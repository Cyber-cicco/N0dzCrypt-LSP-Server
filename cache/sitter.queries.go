package cache

const Q_JAVA_STRING = `(
(field_declaration
    declarator: (variable_declarator
        name: (identifier)
        value: (string_literal
            (string_fragment) @fragment)))
(#eq? @fragment "~page")
)`

