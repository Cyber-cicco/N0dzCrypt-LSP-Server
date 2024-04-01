package cache

const Q_JAVA_STRING = `(
(field_declaration
    declarator: (variable_declarator
        name: (identifier)
        value: (string_literal
            (string_fragment) @fragment)))
)`

const Q_JAVA_METHOD_WITH_MODEL = `(
(method_declaration 
    parameters: (formal_parameters
        (formal_parameter
            type: (type_identifier) @type))) @method 
(#match? @type ".*Model")
)`

const Q_JAVA_CLASS_NAME = `(
    (class_declaration
        name: (identifier))
)`
const Q_JAVA_IMPORTS = `(
    (import_declaration
        (scoped_identifier) @id)
    (#match? @id "~basePackage")
)`


const Q_JAVA_FIELD_ACESS = `(
(field_access
    object: (identifier) @object
    field: (identifier) @field )  
(#eq? @object "~object")
)`
