struct DocumentParser {

}

struct CommentParser {

}

struct UrlParser {

}

struct OGNLParser {

}

struct MSGParser {

}

struct JavaTextFormatParser {

}

struct ObjectSelectionParser {

}

struct AttributeParser {

}

struct AttributeSyntaxTree {
    name : String,
    attribute : MetaToken
}

enum MetaToken {
    UrlExpression(String),
    OGNLExpression(String),
    MSGExpression(String),
    CommentExpression(String),
    ObjectExpression(String),
}

struct DocumentSyntaxTree {

}

struct OGNLExpressionSyntaxTree {
}

struct MSGExpressionSyntaxTree {

}

struct UrlExpressionSyntaxTree {

}

fn parse_tokens(){

}
