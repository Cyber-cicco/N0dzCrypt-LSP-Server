struct Tokeniser {
    position : u32,
    next_pos : u32,
    input : String,
}

enum TokenType {
    Word,
    OpenCBracket,
    CloseCBracket,
    OpenBracket,
    CloseBracket,
    OpenParenthesis,
    CloseParenthesis,
    DollarSign,
    SingleQuote,
    Pipe,
    Tilda,
    AtSign,
    HashTag,
    Unauthorized,
    PlusSign,
    MinusSign,
    Slash,
    StarSign,
    PercentSign,
    GreaterSign,
    SmallerSign,
    EqualSign,
    ExclamationMark,
    InterrogationMark,
    Comma,
    Underscore,
}

const S : fn(x : &str) -> String = |x : &str| String::from(x);

const CTX : &str = "ctx";
const VARS : &str = "vars";
const LOCALE : &str = "locale";
const EXEC_INFO : &str = "execInfo";
const URI : &str = "uris";
const CONVERSION : &str = "conversion";
const DATES : &str = "dates";
const CALENDAR : &str = "calendar";
const TEMPORALS : &str = "temporals";
const NUMBERS : &str = "numbers";
const STRINGS : &str = "strings";
const OBJECTS : &str = "objects";
const BOOLS : &str = "bools";
const ARRAYS : &str = "arrays";
const LISTS : &str = "lists";
const SETS : &str = "sets";
const MAPS : &str = "maps";
const AGGREGATES : &str = "aggregates";
const IDS : &str = "ids";

pub fn tokenise() {
    println!("Hello, world!");
}
