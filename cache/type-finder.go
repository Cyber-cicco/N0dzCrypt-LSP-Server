package cache

import (
	"bufio"
	"os"
	"strings"

	sitter "github.com/Cyber-cicco/go-tree-sitter"
	"github.com/Cyber-cicco/nodzcript-lsp/config"
)

// Finds the type of an object by looking at the class declaration inside the current file and the imports.
//
// If it finds a definition in the class, it will find it's property and methods.
// Will recursively call a function to get the type of each property until it gets to a point where
// the type doesn't come from a project file.
//
// TODO : Will need to work with generics.
func findTypeFromVariable(javaDocument *JavaIrrigator, session *Session, node *sitter.Node) (Type, error) {

	switch node.Type() {

	case "assignment_expression":
	case "binary_expression":
	case "instanceof_expression":
	case "lambda_expression":
	case "ternary_expression":
	case "update_expression":
	case "unary_expression":
	case "cast_expression":
	case "switch_expression":

	case "class_literal":
	case "this":
	case "identifier":
	case "parenthesized_expression":
	case "object_creation_expression":
	case "field_access":
	case "array_access":
	case "method_invocation":
	case "array_creation_expression":
	case "template_expression":

		//literal cases
	case "decimal_integer_literal":
	case "string_literal":
	case "hex_integer_literal":
	case "octal_integer_literal":
	case "binary_integer_literal":
	case "decimal_floating_point_literal":
	case "hex_floating_point_literal":
	case "true":
	case "false":
	case "character_literal":
	case "null_literal":
	}

	varType := Type{
		Identifier: "",
		Methods:    []*Method{},
		Properties: []*ContextObject{},
		ExtendFrom: nil,
	}

	return varType, nil
}

var idToType = make(map[string]*Type)

// This method allows to populate a Type object by searching into
// csv files documenting the methods and properties of a java object
func getType(typeId string) (*Type, error) {

	if idToType[typeId] != nil {
		return idToType[typeId], nil
	}

	idToType[typeId] = &Type{
		Identifier: typeId,
		Methods:    []*Method{},
		Properties: []*ContextObject{},
	}

	csvPath := config.CSV_DIR + typeId + ".methods.csv"

	if _, err := os.Stat(csvPath); err == nil {

		file, err := os.Open(csvPath)

		if err != nil {
			return nil, err
		}

		defer file.Close()
		scanner := bufio.NewScanner(file)

		for scanner.Scan() {
			text := scanner.Text()
			seps := strings.Split(text, ";")
			secondEntry := parseSecondCSVEntry(seps[1])
			returnType, err := getType(seps[0])

			if err != nil {
				return nil, err
			}

            methodTypes := []MethodType{}

			method := &Method{
				Identifier:    secondEntry.identifier,
				ReturnType:    returnType,
				Arguments:     methodTypes,
				Documentation: seps[2],
			}

			idToType[typeId].Methods = append(idToType[typeId].Methods, method)
		}

	}

	return idToType[typeId], nil
}

type secondEntry struct {
	identifier string
	arguments  []string
}

//Breaks down the csv entry containing the method signature into 
//parts that can be put in the Method Struct
func parseSecondCSVEntry(entry string) secondEntry {
	secondEntry := secondEntry{}
	lastIndex := 0

	//find identifier
	for i := 0; i < len(entry); i++ {
		if entry[i] == '(' {
			secondEntry.identifier = entry[lastIndex:i]
			lastIndex = i + 1
			break
		}
	}

	//find arguments
	for i := lastIndex; i < len(entry); i++ {
		if entry[i] == ' ' {
			secondEntry.arguments = append(secondEntry.arguments, entry[lastIndex:i])
			lastIndex = i

			for entry[i] != ',' && entry[i] != ')' && i < len(entry) {
				i++
			}
			if entry[i] == ')' {
				break
			}
			i++
			for entry[i] == ' ' {
				i++
			}
			lastIndex = i
		}
	}
	return secondEntry

}
