use tree_sitter::{Parser, Language, Node, Tree};

mod syntax_tree;

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


struct ThymeleafExpression {
    start_pos : u32,
    end_pos : u32,
    token : MetaToken,
}

enum MetaToken {
    UrlExpression(String),
    OGNLExpression(String),
    MSGExpression(String),
    CommentExpression(String),
    ObjectExpression(String),
}


pub fn parse_tokens(){
    let mut parser = Parser::new();
    parser.set_language(tree_sitter_java::language())
        .expect("Error loading HTML grammar");
    let source_code = r#"<div class="bg-primary">Bonjour</div>"#;
    let tree = parser.parse(source_code, None).unwrap();
    let root_node = tree.root_node();
    println!("root node kind : {:}", root_node.kind());
    println!("root node child count : {:}", root_node.named_child_count());
}
