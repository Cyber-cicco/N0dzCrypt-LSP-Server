package cache

import (
	"bufio"
	"os"
	"strings"

	sitter "github.com/Cyber-cicco/go-tree-sitter"
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
	}

	return varType, nil
}

var stringType *Type

func getStringType() *Type {

    if stringType != nil {
        return stringType
    }

    stringType = &Type{
    	Identifier: "String",
    	Methods:    []*Method{},
    	Properties: []*ContextObject{},
    }

	file, err := os.Open("./types/string-methods.txt")

	if err != nil {
		panic("should always be able to read file")
	}

	defer file.Close()

	scanner := bufio.NewScanner(file)
	for scanner.Scan() {
        text := scanner.Text()
        seps := strings.Split(text, ";")
        method := &Method{
        	Identifier:    seps[0],
        	ReturnType:    &Type{},
        	Arguments:     []*Type{},
        	Documentation: "",
        }
        stringType.Methods = append(stringType.Methods, method)
	}

    return stringType
}

func charType() *Type {
	return &Type{
		Identifier: "char",
		Methods:    []*Method{},
		Properties: []*ContextObject{},
	}
}

func intType() *Type {
	return &Type{
		Identifier: "int",
		Methods:    []*Method{},
		Properties: []*ContextObject{},
	}
}
