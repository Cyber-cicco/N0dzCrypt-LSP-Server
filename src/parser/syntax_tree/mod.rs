use tree_sitter::Node;

struct AttributeValueSyntaxTree {
}

struct DocumentSyntaxTree<'a> {
    root_node : &'a Node<'a>
}

struct OGNLExpressionSyntaxTree {
}

struct MSGExpressionSyntaxTree {

}

struct CommentExpressionSyntaxTree {
}

struct UrlExpressionSyntaxTree {
}
