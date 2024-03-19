#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 489
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 234
#define ALIAS_COUNT 0
#define TOKEN_COUNT 123
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 24

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_LT = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_LT_SLASH = 7,
  anon_sym_th_COLON = 8,
  anon_sym_EQ = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_attribute_name_token1 = 11,
  anon_sym_COMMA = 12,
  anon_sym_COLON = 13,
  aux_sym_iterStat_token1 = 14,
  sym_remove_all = 15,
  sym_remove_body = 16,
  sym_remove_tag = 17,
  sym_remove_abf = 18,
  anon_sym_none = 19,
  anon_sym_text = 20,
  sym_inline_javascript = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  sym_fragment_name = 24,
  sym_fragment_arg = 25,
  sym_th_insert = 26,
  sym_th_replace = 27,
  sym_th_each = 28,
  sym_th_if = 29,
  sym_th_unless = 30,
  sym_th_switch = 31,
  sym_th_case = 32,
  sym_th_object = 33,
  sym_th_with = 34,
  sym_th_attr = 35,
  sym_th_attrappend = 36,
  sym_th_attrprepend = 37,
  sym_th_remove = 38,
  sym_th_fragment = 39,
  sym_th_inline = 40,
  sym_attribute_value = 41,
  sym_entity = 42,
  anon_sym_SQUOTE = 43,
  aux_sym_quoted_attribute_value_token1 = 44,
  aux_sym_quoted_attribute_value_token2 = 45,
  sym_text = 46,
  sym_true_literal = 47,
  sym_false_literal = 48,
  sym_null_literal = 49,
  aux_sym_number_literal_token1 = 50,
  anon_sym_DOT = 51,
  anon_sym_l = 52,
  anon_sym_f = 53,
  aux_sym_token_literal_token1 = 54,
  aux_sym_token_literal_token2 = 55,
  anon_sym_PIPE = 56,
  anon_sym_POUND = 57,
  anon_sym_TILDE = 58,
  anon_sym_DOLLAR = 59,
  anon_sym_STAR = 60,
  sym__interpreted_string_literal_basic_content = 61,
  sym_interpolated_string_literal_basic_content = 62,
  sym__escape_sequence = 63,
  sym_greater_than_2 = 64,
  sym_lesser_than_2 = 65,
  sym_greater_or_equal = 66,
  sym_greater_or_equal_2 = 67,
  sym_lesser_or_equal = 68,
  sym_lesser_or_equal_2 = 69,
  sym_equal = 70,
  sym_not_equal = 71,
  sym_equal_2 = 72,
  sym_not_equal_2 = 73,
  sym_and = 74,
  sym_and_2 = 75,
  sym_or = 76,
  sym_or_2 = 77,
  anon_sym_PLUS = 78,
  anon_sym_DASH = 79,
  anon_sym_SLASH = 80,
  sym_modulo = 81,
  anon_sym_TILDE_LBRACE = 82,
  anon_sym_RBRACE = 83,
  anon_sym_AT_LBRACE = 84,
  anon_sym_POUND_LBRACE = 85,
  anon_sym_STAR_LBRACE = 86,
  anon_sym_DOLLAR_LBRACE = 87,
  anon_sym_COLON_COLON = 88,
  sym_standard_url = 89,
  sym_standard_url_fragment = 90,
  aux_sym_url_parameter_token1 = 91,
  anon_sym_LBRACE = 92,
  anon_sym_QMARK = 93,
  anon_sym_BANG = 94,
  sym_boolean_type = 95,
  anon_sym_float = 96,
  anon_sym_double = 97,
  anon_sym_byte = 98,
  anon_sym_short = 99,
  anon_sym_int = 100,
  anon_sym_long = 101,
  anon_sym_char = 102,
  anon_sym_new = 103,
  anon_sym_LBRACK = 104,
  anon_sym_RBRACK = 105,
  anon_sym_not = 106,
  anon_sym_LBRACE_COLON_RBRACE = 107,
  aux_sym_object_creation_expression_token1 = 108,
  sym_spel_instanceof = 109,
  sym_spel_between = 110,
  sym_exp = 111,
  anon_sym_T_LPAREN = 112,
  aux_sym_spel_object_literal_token1 = 113,
  aux_sym_spel_object_literal_token2 = 114,
  sym__start_tag_name = 115,
  sym__script_start_tag_name = 116,
  sym__style_start_tag_name = 117,
  sym__end_tag_name = 118,
  sym_erroneous_end_tag_name = 119,
  sym__implicit_end_tag = 120,
  sym_raw_text = 121,
  sym_comment = 122,
  sym_document = 123,
  sym_doctype = 124,
  sym__node = 125,
  sym_element = 126,
  sym_script_element = 127,
  sym_style_element = 128,
  sym_start_tag = 129,
  sym__attributes = 130,
  sym_th_attribute_value = 131,
  sym_script_start_tag = 132,
  sym_style_start_tag = 133,
  sym_self_closing_tag = 134,
  sym_end_tag = 135,
  sym_erroneous_end_tag = 136,
  sym_th_attribute = 137,
  sym_attribute = 138,
  sym_attribute_name = 139,
  sym__th_inline_value = 140,
  sym_th_each_value = 141,
  sym_iterStat = 142,
  sym_each_element = 143,
  sym__th_remove_value = 144,
  sym_remove_none = 145,
  sym_inline_text = 146,
  sym_inline_none = 147,
  sym_th_fragment_declaration = 148,
  sym_th_assignation_sequence = 149,
  sym__th_generic = 150,
  sym__th_fragments_insert = 151,
  sym__th_spel_only = 152,
  sym__th_assignation_sequence = 153,
  sym_th_generic = 154,
  sym_quoted_attribute_value = 155,
  sym__literal = 156,
  sym_number_literal = 157,
  sym_integer_literal = 158,
  sym_float_literal = 159,
  sym_double_literal = 160,
  sym_token_literal = 161,
  sym_string_literal = 162,
  sym_interpolated_string_literal = 163,
  sym__interpreted_string_literal = 164,
  sym_greater_than = 165,
  sym_lesser_than = 166,
  sym_add = 167,
  sym_substract = 168,
  sym_multiply = 169,
  sym_divide = 170,
  sym__th_std_expression = 171,
  sym_fragment_th_std_expression = 172,
  sym_url_th_std_expression = 173,
  sym_message_th_std_expression = 174,
  sym_varselect_th_std_expression = 175,
  sym_spel_th_std_expression = 176,
  sym__url_std_expression = 177,
  sym__fragment_std_expression = 178,
  sym_fragment_call = 179,
  sym_url_parameter_assignement = 180,
  sym_url_parameter = 181,
  sym_parameterized_url_fragment = 182,
  sym_message_name = 183,
  sym__message_std_expression = 184,
  sym_ternary_th_std_expression = 185,
  sym_unary_th_std_expression = 186,
  sym_parenthesized_th_std_expression = 187,
  sym_binary_th_std_expression = 188,
  sym__spel_std_expression = 189,
  sym__type = 190,
  sym_floating_point_type = 191,
  sym_integral_type = 192,
  sym_array_creation = 193,
  sym_array_content = 194,
  sym_spel_parenthesized_expression = 195,
  sym_unary_spel_expression = 196,
  sym__spel_primary_expression = 197,
  sym__spel_literal = 198,
  sym_spel_string_literal = 199,
  sym_inline_list = 200,
  sym_inline_map = 201,
  sym_object_creation_expression = 202,
  sym_spel_assignement_expression = 203,
  sym_spel_new = 204,
  sym_binary_spel_expression = 205,
  sym_range = 206,
  sym_type = 207,
  sym__type_adress = 208,
  sym_spel_variable = 209,
  sym__spel_post_accessor = 210,
  sym_spel_object_literal = 211,
  sym_null_operator = 212,
  sym_spel_property_access = 213,
  sym_spel_method_access = 214,
  sym_spel_method_literal = 215,
  sym__spel_name = 216,
  sym_spel_method_args = 217,
  aux_sym_document_repeat1 = 218,
  aux_sym_start_tag_repeat1 = 219,
  aux_sym_th_fragment_declaration_repeat1 = 220,
  aux_sym_th_assignation_sequence_repeat1 = 221,
  aux_sym_token_literal_repeat1 = 222,
  aux_sym_interpolated_string_literal_repeat1 = 223,
  aux_sym__interpreted_string_literal_repeat1 = 224,
  aux_sym__url_std_expression_repeat1 = 225,
  aux_sym__url_std_expression_repeat2 = 226,
  aux_sym_fragment_call_repeat1 = 227,
  aux_sym_array_creation_repeat1 = 228,
  aux_sym_array_content_repeat1 = 229,
  aux_sym_inline_map_repeat1 = 230,
  aux_sym__type_adress_repeat1 = 231,
  aux_sym_spel_object_literal_repeat1 = 232,
  aux_sym_spel_method_args_repeat1 = 233,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_th_COLON] = "th:",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_attribute_name_token1] = "attribute_name_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [aux_sym_iterStat_token1] = "iterStat_token1",
  [sym_remove_all] = "remove_all",
  [sym_remove_body] = "remove_body",
  [sym_remove_tag] = "remove_tag",
  [sym_remove_abf] = "remove_abf",
  [anon_sym_none] = "none",
  [anon_sym_text] = "text",
  [sym_inline_javascript] = "inline_javascript",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_fragment_name] = "fragment_name",
  [sym_fragment_arg] = "fragment_arg",
  [sym_th_insert] = "th_insert",
  [sym_th_replace] = "th_replace",
  [sym_th_each] = "th_each",
  [sym_th_if] = "th_if",
  [sym_th_unless] = "th_unless",
  [sym_th_switch] = "th_switch",
  [sym_th_case] = "th_case",
  [sym_th_object] = "th_object",
  [sym_th_with] = "th_with",
  [sym_th_attr] = "th_attr",
  [sym_th_attrappend] = "th_attrappend",
  [sym_th_attrprepend] = "th_attrprepend",
  [sym_th_remove] = "th_remove",
  [sym_th_fragment] = "th_fragment",
  [sym_th_inline] = "th_inline",
  [sym_attribute_value] = "attribute_value",
  [sym_entity] = "entity",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_text] = "text",
  [sym_true_literal] = "true_literal",
  [sym_false_literal] = "false_literal",
  [sym_null_literal] = "null_literal",
  [aux_sym_number_literal_token1] = "number_literal_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_l] = "l",
  [anon_sym_f] = "f",
  [aux_sym_token_literal_token1] = "token_literal_token1",
  [aux_sym_token_literal_token2] = "token_literal_token2",
  [anon_sym_PIPE] = "|",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_STAR] = "*",
  [sym__interpreted_string_literal_basic_content] = "_interpreted_string_literal_basic_content",
  [sym_interpolated_string_literal_basic_content] = "interpolated_string_literal_basic_content",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_greater_than_2] = "greater_than_2",
  [sym_lesser_than_2] = "lesser_than_2",
  [sym_greater_or_equal] = "greater_or_equal",
  [sym_greater_or_equal_2] = "greater_or_equal_2",
  [sym_lesser_or_equal] = "lesser_or_equal",
  [sym_lesser_or_equal_2] = "lesser_or_equal_2",
  [sym_equal] = "equal",
  [sym_not_equal] = "not_equal",
  [sym_equal_2] = "equal_2",
  [sym_not_equal_2] = "not_equal_2",
  [sym_and] = "and",
  [sym_and_2] = "and_2",
  [sym_or] = "or",
  [sym_or_2] = "or_2",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_modulo] = "modulo",
  [anon_sym_TILDE_LBRACE] = "~{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_STAR_LBRACE] = "*{",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_COLON_COLON] = "::",
  [sym_standard_url] = "standard_url",
  [sym_standard_url_fragment] = "standard_url_fragment",
  [aux_sym_url_parameter_token1] = "url_parameter_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [sym_boolean_type] = "boolean_type",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_byte] = "byte",
  [anon_sym_short] = "short",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_char] = "char",
  [anon_sym_new] = "new",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_not] = "not",
  [anon_sym_LBRACE_COLON_RBRACE] = "{:}",
  [aux_sym_object_creation_expression_token1] = "object_creation_expression_token1",
  [sym_spel_instanceof] = "spel_instanceof",
  [sym_spel_between] = "spel_between",
  [sym_exp] = "exp",
  [anon_sym_T_LPAREN] = "T(",
  [aux_sym_spel_object_literal_token1] = "spel_object_literal_token1",
  [aux_sym_spel_object_literal_token2] = "spel_object_literal_token2",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym__attributes] = "_attributes",
  [sym_th_attribute_value] = "th_attribute_value",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_th_attribute] = "th_attribute",
  [sym_attribute] = "attribute",
  [sym_attribute_name] = "attribute_name",
  [sym__th_inline_value] = "_th_inline_value",
  [sym_th_each_value] = "th_each_value",
  [sym_iterStat] = "iterStat",
  [sym_each_element] = "each_element",
  [sym__th_remove_value] = "_th_remove_value",
  [sym_remove_none] = "remove_none",
  [sym_inline_text] = "inline_text",
  [sym_inline_none] = "inline_none",
  [sym_th_fragment_declaration] = "th_fragment_declaration",
  [sym_th_assignation_sequence] = "th_assignation_sequence",
  [sym__th_generic] = "_th_generic",
  [sym__th_fragments_insert] = "_th_fragments_insert",
  [sym__th_spel_only] = "_th_spel_only",
  [sym__th_assignation_sequence] = "_th_assignation_sequence",
  [sym_th_generic] = "th_generic",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__literal] = "_literal",
  [sym_number_literal] = "number_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [sym_double_literal] = "double_literal",
  [sym_token_literal] = "token_literal",
  [sym_string_literal] = "string_literal",
  [sym_interpolated_string_literal] = "interpolated_string_literal",
  [sym__interpreted_string_literal] = "_interpreted_string_literal",
  [sym_greater_than] = "greater_than",
  [sym_lesser_than] = "lesser_than",
  [sym_add] = "add",
  [sym_substract] = "substract",
  [sym_multiply] = "multiply",
  [sym_divide] = "divide",
  [sym__th_std_expression] = "_th_std_expression",
  [sym_fragment_th_std_expression] = "fragment_th_std_expression",
  [sym_url_th_std_expression] = "url_th_std_expression",
  [sym_message_th_std_expression] = "message_th_std_expression",
  [sym_varselect_th_std_expression] = "varselect_th_std_expression",
  [sym_spel_th_std_expression] = "spel_th_std_expression",
  [sym__url_std_expression] = "_url_std_expression",
  [sym__fragment_std_expression] = "_fragment_std_expression",
  [sym_fragment_call] = "fragment_call",
  [sym_url_parameter_assignement] = "url_parameter_assignement",
  [sym_url_parameter] = "url_parameter",
  [sym_parameterized_url_fragment] = "parameterized_url_fragment",
  [sym_message_name] = "message_name",
  [sym__message_std_expression] = "_message_std_expression",
  [sym_ternary_th_std_expression] = "ternary_th_std_expression",
  [sym_unary_th_std_expression] = "unary_th_std_expression",
  [sym_parenthesized_th_std_expression] = "parenthesized_th_std_expression",
  [sym_binary_th_std_expression] = "binary_th_std_expression",
  [sym__spel_std_expression] = "_spel_std_expression",
  [sym__type] = "_type",
  [sym_floating_point_type] = "floating_point_type",
  [sym_integral_type] = "integral_type",
  [sym_array_creation] = "array_creation",
  [sym_array_content] = "array_content",
  [sym_spel_parenthesized_expression] = "spel_parenthesized_expression",
  [sym_unary_spel_expression] = "unary_spel_expression",
  [sym__spel_primary_expression] = "_spel_primary_expression",
  [sym__spel_literal] = "_spel_literal",
  [sym_spel_string_literal] = "spel_string_literal",
  [sym_inline_list] = "inline_list",
  [sym_inline_map] = "inline_map",
  [sym_object_creation_expression] = "object_creation_expression",
  [sym_spel_assignement_expression] = "spel_assignement_expression",
  [sym_spel_new] = "spel_new",
  [sym_binary_spel_expression] = "binary_spel_expression",
  [sym_range] = "range",
  [sym_type] = "type",
  [sym__type_adress] = "_type_adress",
  [sym_spel_variable] = "spel_variable",
  [sym__spel_post_accessor] = "_spel_post_accessor",
  [sym_spel_object_literal] = "spel_object_literal",
  [sym_null_operator] = "null_operator",
  [sym_spel_property_access] = "spel_property_access",
  [sym_spel_method_access] = "spel_method_access",
  [sym_spel_method_literal] = "spel_method_literal",
  [sym__spel_name] = "_spel_name",
  [sym_spel_method_args] = "spel_method_args",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_th_fragment_declaration_repeat1] = "th_fragment_declaration_repeat1",
  [aux_sym_th_assignation_sequence_repeat1] = "th_assignation_sequence_repeat1",
  [aux_sym_token_literal_repeat1] = "token_literal_repeat1",
  [aux_sym_interpolated_string_literal_repeat1] = "interpolated_string_literal_repeat1",
  [aux_sym__interpreted_string_literal_repeat1] = "_interpreted_string_literal_repeat1",
  [aux_sym__url_std_expression_repeat1] = "_url_std_expression_repeat1",
  [aux_sym__url_std_expression_repeat2] = "_url_std_expression_repeat2",
  [aux_sym_fragment_call_repeat1] = "fragment_call_repeat1",
  [aux_sym_array_creation_repeat1] = "array_creation_repeat1",
  [aux_sym_array_content_repeat1] = "array_content_repeat1",
  [aux_sym_inline_map_repeat1] = "inline_map_repeat1",
  [aux_sym__type_adress_repeat1] = "_type_adress_repeat1",
  [aux_sym_spel_object_literal_repeat1] = "spel_object_literal_repeat1",
  [aux_sym_spel_method_args_repeat1] = "spel_method_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_th_COLON] = anon_sym_th_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_attribute_name_token1] = aux_sym_attribute_name_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_iterStat_token1] = aux_sym_iterStat_token1,
  [sym_remove_all] = sym_remove_all,
  [sym_remove_body] = sym_remove_body,
  [sym_remove_tag] = sym_remove_tag,
  [sym_remove_abf] = sym_remove_abf,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_text] = anon_sym_text,
  [sym_inline_javascript] = sym_inline_javascript,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_fragment_name] = sym_fragment_name,
  [sym_fragment_arg] = sym_fragment_arg,
  [sym_th_insert] = sym_th_insert,
  [sym_th_replace] = sym_th_replace,
  [sym_th_each] = sym_th_each,
  [sym_th_if] = sym_th_if,
  [sym_th_unless] = sym_th_unless,
  [sym_th_switch] = sym_th_switch,
  [sym_th_case] = sym_th_case,
  [sym_th_object] = sym_th_object,
  [sym_th_with] = sym_th_with,
  [sym_th_attr] = sym_th_attr,
  [sym_th_attrappend] = sym_th_attrappend,
  [sym_th_attrprepend] = sym_th_attrprepend,
  [sym_th_remove] = sym_th_remove,
  [sym_th_fragment] = sym_th_fragment,
  [sym_th_inline] = sym_th_inline,
  [sym_attribute_value] = sym_attribute_value,
  [sym_entity] = sym_entity,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_text] = sym_text,
  [sym_true_literal] = sym_true_literal,
  [sym_false_literal] = sym_false_literal,
  [sym_null_literal] = sym_null_literal,
  [aux_sym_number_literal_token1] = aux_sym_number_literal_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_f] = anon_sym_f,
  [aux_sym_token_literal_token1] = aux_sym_token_literal_token1,
  [aux_sym_token_literal_token2] = aux_sym_token_literal_token2,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym__interpreted_string_literal_basic_content] = sym__interpreted_string_literal_basic_content,
  [sym_interpolated_string_literal_basic_content] = sym_interpolated_string_literal_basic_content,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_greater_than_2] = sym_greater_than_2,
  [sym_lesser_than_2] = sym_lesser_than_2,
  [sym_greater_or_equal] = sym_greater_or_equal,
  [sym_greater_or_equal_2] = sym_greater_or_equal_2,
  [sym_lesser_or_equal] = sym_lesser_or_equal,
  [sym_lesser_or_equal_2] = sym_lesser_or_equal_2,
  [sym_equal] = sym_equal,
  [sym_not_equal] = sym_not_equal,
  [sym_equal_2] = sym_equal_2,
  [sym_not_equal_2] = sym_not_equal_2,
  [sym_and] = sym_and,
  [sym_and_2] = sym_and_2,
  [sym_or] = sym_or,
  [sym_or_2] = sym_or_2,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_modulo] = sym_modulo,
  [anon_sym_TILDE_LBRACE] = anon_sym_TILDE_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_STAR_LBRACE] = anon_sym_STAR_LBRACE,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_standard_url] = sym_standard_url,
  [sym_standard_url_fragment] = sym_standard_url_fragment,
  [aux_sym_url_parameter_token1] = aux_sym_url_parameter_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_boolean_type] = sym_boolean_type,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_LBRACE_COLON_RBRACE] = anon_sym_LBRACE_COLON_RBRACE,
  [aux_sym_object_creation_expression_token1] = aux_sym_object_creation_expression_token1,
  [sym_spel_instanceof] = sym_spel_instanceof,
  [sym_spel_between] = sym_spel_between,
  [sym_exp] = sym_exp,
  [anon_sym_T_LPAREN] = anon_sym_T_LPAREN,
  [aux_sym_spel_object_literal_token1] = aux_sym_spel_object_literal_token1,
  [aux_sym_spel_object_literal_token2] = aux_sym_spel_object_literal_token2,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_doctype] = sym_doctype,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym__attributes] = sym__attributes,
  [sym_th_attribute_value] = sym_th_attribute_value,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_th_attribute] = sym_th_attribute,
  [sym_attribute] = sym_attribute,
  [sym_attribute_name] = sym_attribute_name,
  [sym__th_inline_value] = sym__th_inline_value,
  [sym_th_each_value] = sym_th_each_value,
  [sym_iterStat] = sym_iterStat,
  [sym_each_element] = sym_each_element,
  [sym__th_remove_value] = sym__th_remove_value,
  [sym_remove_none] = sym_remove_none,
  [sym_inline_text] = sym_inline_text,
  [sym_inline_none] = sym_inline_none,
  [sym_th_fragment_declaration] = sym_th_fragment_declaration,
  [sym_th_assignation_sequence] = sym_th_assignation_sequence,
  [sym__th_generic] = sym__th_generic,
  [sym__th_fragments_insert] = sym__th_fragments_insert,
  [sym__th_spel_only] = sym__th_spel_only,
  [sym__th_assignation_sequence] = sym__th_assignation_sequence,
  [sym_th_generic] = sym_th_generic,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__literal] = sym__literal,
  [sym_number_literal] = sym_number_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_double_literal] = sym_double_literal,
  [sym_token_literal] = sym_token_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_interpolated_string_literal] = sym_interpolated_string_literal,
  [sym__interpreted_string_literal] = sym__interpreted_string_literal,
  [sym_greater_than] = sym_greater_than,
  [sym_lesser_than] = sym_lesser_than,
  [sym_add] = sym_add,
  [sym_substract] = sym_substract,
  [sym_multiply] = sym_multiply,
  [sym_divide] = sym_divide,
  [sym__th_std_expression] = sym__th_std_expression,
  [sym_fragment_th_std_expression] = sym_fragment_th_std_expression,
  [sym_url_th_std_expression] = sym_url_th_std_expression,
  [sym_message_th_std_expression] = sym_message_th_std_expression,
  [sym_varselect_th_std_expression] = sym_varselect_th_std_expression,
  [sym_spel_th_std_expression] = sym_spel_th_std_expression,
  [sym__url_std_expression] = sym__url_std_expression,
  [sym__fragment_std_expression] = sym__fragment_std_expression,
  [sym_fragment_call] = sym_fragment_call,
  [sym_url_parameter_assignement] = sym_url_parameter_assignement,
  [sym_url_parameter] = sym_url_parameter,
  [sym_parameterized_url_fragment] = sym_parameterized_url_fragment,
  [sym_message_name] = sym_message_name,
  [sym__message_std_expression] = sym__message_std_expression,
  [sym_ternary_th_std_expression] = sym_ternary_th_std_expression,
  [sym_unary_th_std_expression] = sym_unary_th_std_expression,
  [sym_parenthesized_th_std_expression] = sym_parenthesized_th_std_expression,
  [sym_binary_th_std_expression] = sym_binary_th_std_expression,
  [sym__spel_std_expression] = sym__spel_std_expression,
  [sym__type] = sym__type,
  [sym_floating_point_type] = sym_floating_point_type,
  [sym_integral_type] = sym_integral_type,
  [sym_array_creation] = sym_array_creation,
  [sym_array_content] = sym_array_content,
  [sym_spel_parenthesized_expression] = sym_spel_parenthesized_expression,
  [sym_unary_spel_expression] = sym_unary_spel_expression,
  [sym__spel_primary_expression] = sym__spel_primary_expression,
  [sym__spel_literal] = sym__spel_literal,
  [sym_spel_string_literal] = sym_spel_string_literal,
  [sym_inline_list] = sym_inline_list,
  [sym_inline_map] = sym_inline_map,
  [sym_object_creation_expression] = sym_object_creation_expression,
  [sym_spel_assignement_expression] = sym_spel_assignement_expression,
  [sym_spel_new] = sym_spel_new,
  [sym_binary_spel_expression] = sym_binary_spel_expression,
  [sym_range] = sym_range,
  [sym_type] = sym_type,
  [sym__type_adress] = sym__type_adress,
  [sym_spel_variable] = sym_spel_variable,
  [sym__spel_post_accessor] = sym__spel_post_accessor,
  [sym_spel_object_literal] = sym_spel_object_literal,
  [sym_null_operator] = sym_null_operator,
  [sym_spel_property_access] = sym_spel_property_access,
  [sym_spel_method_access] = sym_spel_method_access,
  [sym_spel_method_literal] = sym_spel_method_literal,
  [sym__spel_name] = sym__spel_name,
  [sym_spel_method_args] = sym_spel_method_args,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_th_fragment_declaration_repeat1] = aux_sym_th_fragment_declaration_repeat1,
  [aux_sym_th_assignation_sequence_repeat1] = aux_sym_th_assignation_sequence_repeat1,
  [aux_sym_token_literal_repeat1] = aux_sym_token_literal_repeat1,
  [aux_sym_interpolated_string_literal_repeat1] = aux_sym_interpolated_string_literal_repeat1,
  [aux_sym__interpreted_string_literal_repeat1] = aux_sym__interpreted_string_literal_repeat1,
  [aux_sym__url_std_expression_repeat1] = aux_sym__url_std_expression_repeat1,
  [aux_sym__url_std_expression_repeat2] = aux_sym__url_std_expression_repeat2,
  [aux_sym_fragment_call_repeat1] = aux_sym_fragment_call_repeat1,
  [aux_sym_array_creation_repeat1] = aux_sym_array_creation_repeat1,
  [aux_sym_array_content_repeat1] = aux_sym_array_content_repeat1,
  [aux_sym_inline_map_repeat1] = aux_sym_inline_map_repeat1,
  [aux_sym__type_adress_repeat1] = aux_sym__type_adress_repeat1,
  [aux_sym_spel_object_literal_repeat1] = aux_sym_spel_object_literal_repeat1,
  [aux_sym_spel_method_args_repeat1] = aux_sym_spel_method_args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_th_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_iterStat_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_remove_all] = {
    .visible = true,
    .named = true,
  },
  [sym_remove_body] = {
    .visible = true,
    .named = true,
  },
  [sym_remove_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_remove_abf] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [sym_inline_javascript] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_fragment_name] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_th_insert] = {
    .visible = true,
    .named = true,
  },
  [sym_th_replace] = {
    .visible = true,
    .named = true,
  },
  [sym_th_each] = {
    .visible = true,
    .named = true,
  },
  [sym_th_if] = {
    .visible = true,
    .named = true,
  },
  [sym_th_unless] = {
    .visible = true,
    .named = true,
  },
  [sym_th_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_th_case] = {
    .visible = true,
    .named = true,
  },
  [sym_th_object] = {
    .visible = true,
    .named = true,
  },
  [sym_th_with] = {
    .visible = true,
    .named = true,
  },
  [sym_th_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_th_attrappend] = {
    .visible = true,
    .named = true,
  },
  [sym_th_attrprepend] = {
    .visible = true,
    .named = true,
  },
  [sym_th_remove] = {
    .visible = true,
    .named = true,
  },
  [sym_th_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_th_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_true_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_false_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_token_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_token_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym__interpreted_string_literal_basic_content] = {
    .visible = false,
    .named = true,
  },
  [sym_interpolated_string_literal_basic_content] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_greater_than_2] = {
    .visible = true,
    .named = true,
  },
  [sym_lesser_than_2] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_or_equal_2] = {
    .visible = true,
    .named = true,
  },
  [sym_lesser_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_lesser_or_equal_2] = {
    .visible = true,
    .named = true,
  },
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_not_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_equal_2] = {
    .visible = true,
    .named = true,
  },
  [sym_not_equal_2] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_and_2] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_or_2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_modulo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_standard_url] = {
    .visible = true,
    .named = true,
  },
  [sym_standard_url_fragment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_url_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_boolean_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_COLON_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_creation_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_spel_instanceof] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_between] = {
    .visible = true,
    .named = true,
  },
  [sym_exp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_T_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_spel_object_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_spel_object_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__attributes] = {
    .visible = false,
    .named = true,
  },
  [sym_th_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_th_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym__th_inline_value] = {
    .visible = false,
    .named = true,
  },
  [sym_th_each_value] = {
    .visible = true,
    .named = true,
  },
  [sym_iterStat] = {
    .visible = true,
    .named = true,
  },
  [sym_each_element] = {
    .visible = true,
    .named = true,
  },
  [sym__th_remove_value] = {
    .visible = false,
    .named = true,
  },
  [sym_remove_none] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_text] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_none] = {
    .visible = true,
    .named = true,
  },
  [sym_th_fragment_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_th_assignation_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__th_generic] = {
    .visible = false,
    .named = true,
  },
  [sym__th_fragments_insert] = {
    .visible = false,
    .named = true,
  },
  [sym__th_spel_only] = {
    .visible = false,
    .named = true,
  },
  [sym__th_assignation_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_th_generic] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_double_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_token_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__interpreted_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_greater_than] = {
    .visible = true,
    .named = true,
  },
  [sym_lesser_than] = {
    .visible = true,
    .named = true,
  },
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_substract] = {
    .visible = true,
    .named = true,
  },
  [sym_multiply] = {
    .visible = true,
    .named = true,
  },
  [sym_divide] = {
    .visible = true,
    .named = true,
  },
  [sym__th_std_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_fragment_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_url_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_message_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_varselect_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__url_std_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__fragment_std_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_fragment_call] = {
    .visible = true,
    .named = true,
  },
  [sym_url_parameter_assignement] = {
    .visible = true,
    .named = true,
  },
  [sym_url_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameterized_url_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_message_name] = {
    .visible = true,
    .named = true,
  },
  [sym__message_std_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_ternary_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__spel_std_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_floating_point_type] = {
    .visible = true,
    .named = true,
  },
  [sym_integral_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_creation] = {
    .visible = true,
    .named = true,
  },
  [sym_array_content] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_spel_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__spel_primary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__spel_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_spel_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_list] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_map] = {
    .visible = true,
    .named = true,
  },
  [sym_object_creation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_assignement_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_new] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_spel_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__type_adress] = {
    .visible = false,
    .named = true,
  },
  [sym_spel_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__spel_post_accessor] = {
    .visible = false,
    .named = true,
  },
  [sym_spel_object_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_null_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_property_access] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_method_access] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_method_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__spel_name] = {
    .visible = false,
    .named = true,
  },
  [sym_spel_method_args] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_th_fragment_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_th_assignation_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_token_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolated_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__url_std_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__url_std_expression_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fragment_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_creation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__type_adress_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_spel_object_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_spel_method_args_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_args = 2,
  field_attribute_name = 3,
  field_attribute_value = 4,
  field_begin = 5,
  field_condition = 6,
  field_consequence = 7,
  field_end = 8,
  field_key = 9,
  field_left = 10,
  field_message = 11,
  field_name = 12,
  field_operand = 13,
  field_operator = 14,
  field_param = 15,
  field_right = 16,
  field_value = 17,
  field_var = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_args] = "args",
  [field_attribute_name] = "attribute_name",
  [field_attribute_value] = "attribute_value",
  [field_begin] = "begin",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_end] = "end",
  [field_key] = "key",
  [field_left] = "left",
  [field_message] = "message",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_param] = "param",
  [field_right] = "right",
  [field_value] = "value",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 4},
  [14] = {.index = 27, .length = 2},
  [15] = {.index = 29, .length = 3},
  [16] = {.index = 32, .length = 2},
  [17] = {.index = 34, .length = 2},
  [18] = {.index = 36, .length = 5},
  [19] = {.index = 41, .length = 2},
  [20] = {.index = 43, .length = 4},
  [21] = {.index = 47, .length = 4},
  [22] = {.index = 51, .length = 1},
  [23] = {.index = 52, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_attribute_name, 1},
    {field_attribute_value, 4},
  [2] =
    {field_operand, 1},
    {field_operator, 0},
  [4] =
    {field_message, 0},
  [5] =
    {field_args, 1, .inherited = true},
    {field_message, 1, .inherited = true},
  [7] =
    {field_args, 1},
    {field_name, 0},
  [9] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [12] =
    {field_condition, 0},
    {field_consequence, 2},
  [14] =
    {field_value, 2},
  [15] =
    {field_args, 1},
    {field_args, 2},
    {field_message, 0},
  [18] =
    {field_name, 1},
  [19] =
    {field_value, 2},
    {field_var, 0},
  [21] =
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [23] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_message, 0},
  [27] =
    {field_name, 1},
    {field_name, 2},
  [29] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [32] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [34] =
    {field_param, 0},
    {field_value, 2},
  [36] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_args, 4},
    {field_message, 0},
  [41] =
    {field_key, 1},
    {field_value, 3},
  [43] =
    {field_key, 1},
    {field_key, 4, .inherited = true},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [47] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [51] =
    {field_value, 3},
  [52] =
    {field_begin, 1},
    {field_end, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 5,
  [10] = 4,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 27,
  [28] = 14,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 31,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 121,
  [131] = 131,
  [132] = 132,
  [133] = 123,
  [134] = 132,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 168,
  [170] = 170,
  [171] = 170,
  [172] = 172,
  [173] = 172,
  [174] = 174,
  [175] = 175,
  [176] = 175,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 178,
  [186] = 186,
  [187] = 179,
  [188] = 180,
  [189] = 181,
  [190] = 177,
  [191] = 182,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 3,
  [197] = 2,
  [198] = 119,
  [199] = 115,
  [200] = 36,
  [201] = 127,
  [202] = 135,
  [203] = 33,
  [204] = 129,
  [205] = 131,
  [206] = 125,
  [207] = 120,
  [208] = 208,
  [209] = 209,
  [210] = 209,
  [211] = 211,
  [212] = 208,
  [213] = 32,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 55,
  [219] = 211,
  [220] = 220,
  [221] = 221,
  [222] = 66,
  [223] = 70,
  [224] = 62,
  [225] = 80,
  [226] = 226,
  [227] = 68,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 69,
  [234] = 234,
  [235] = 235,
  [236] = 232,
  [237] = 237,
  [238] = 238,
  [239] = 231,
  [240] = 240,
  [241] = 76,
  [242] = 230,
  [243] = 243,
  [244] = 244,
  [245] = 240,
  [246] = 237,
  [247] = 234,
  [248] = 248,
  [249] = 244,
  [250] = 238,
  [251] = 226,
  [252] = 248,
  [253] = 235,
  [254] = 228,
  [255] = 243,
  [256] = 221,
  [257] = 257,
  [258] = 257,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 266,
  [276] = 261,
  [277] = 260,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 267,
  [289] = 289,
  [290] = 265,
  [291] = 291,
  [292] = 285,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 286,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 268,
  [306] = 287,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 272,
  [313] = 313,
  [314] = 296,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 304,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 324,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 293,
  [334] = 334,
  [335] = 325,
  [336] = 336,
  [337] = 337,
  [338] = 311,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 347,
  [354] = 354,
  [355] = 355,
  [356] = 350,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 354,
  [363] = 346,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 359,
  [382] = 382,
  [383] = 364,
  [384] = 384,
  [385] = 371,
  [386] = 386,
  [387] = 384,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 391,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 420,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 418,
  [441] = 426,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 432,
  [447] = 433,
  [448] = 448,
  [449] = 428,
  [450] = 450,
  [451] = 451,
  [452] = 402,
  [453] = 453,
  [454] = 429,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 434,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 451,
  [468] = 427,
  [469] = 400,
  [470] = 399,
  [471] = 398,
  [472] = 397,
  [473] = 396,
  [474] = 395,
  [475] = 392,
  [476] = 423,
  [477] = 477,
  [478] = 437,
  [479] = 479,
  [480] = 462,
  [481] = 463,
  [482] = 435,
  [483] = 431,
  [484] = 421,
  [485] = 415,
  [486] = 411,
  [487] = 410,
  [488] = 488,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(102);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(100)
      if (lookahead == '!') ADVANCE(360);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '%') ADVANCE(345);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '+') ADVANCE(339);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(370);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == ']') ADVANCE(371);
      if (lookahead == '^') ADVANCE(406);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == 'b') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'f') ADVANCE(275);
      if (lookahead == 'g') ADVANCE(424);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead == '{') ADVANCE(357);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '}') ADVANCE(347);
      if (lookahead == '~') ADVANCE(308);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(100)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '&') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(335);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(407);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(328);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(327);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(112);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(333);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(404);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'q') ADVANCE(329);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 54:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 55:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == 'y') ADVANCE(188);
      END_STATE();
    case 57:
      if (lookahead == '{') ADVANCE(349);
      END_STATE();
    case 58:
      if (lookahead == '{') ADVANCE(351);
      END_STATE();
    case 59:
      if (lookahead == '{') ADVANCE(350);
      END_STATE();
    case 60:
      if (lookahead == '{') ADVANCE(348);
      END_STATE();
    case 61:
      if (lookahead == '{') ADVANCE(346);
      END_STATE();
    case 62:
      if (lookahead == '|') ADVANCE(338);
      END_STATE();
    case 63:
      if (lookahead == '}') ADVANCE(373);
      END_STATE();
    case 64:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(64)
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(345);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(310);
      if (lookahead == '+') ADVANCE(339);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == '[') ADVANCE(370);
      if (lookahead == ']') ADVANCE(371);
      if (lookahead == '^') ADVANCE(406);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == 'b') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'g') ADVANCE(424);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead == '{') ADVANCE(356);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 65:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(65)
      if (lookahead == '!') ADVANCE(359);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == '+') ADVANCE(339);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead == ']') ADVANCE(371);
      if (lookahead == 'f') ADVANCE(408);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '{') ADVANCE(357);
      if (lookahead == '}') ADVANCE(347);
      if (lookahead == '~') ADVANCE(308);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(65)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 66:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(66)
      if (lookahead == '!') ADVANCE(359);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '+') ADVANCE(339);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead == '/') ADVANCE(353);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '}') ADVANCE(347);
      if (lookahead == '~') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(66)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 67:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(67)
      if (lookahead == '!') ADVANCE(359);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '+') ADVANCE(339);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(277);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '~') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 68:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(68)
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '%') ADVANCE(345);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(310);
      if (lookahead == '+') ADVANCE(339);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == ']') ADVANCE(371);
      if (lookahead == '^') ADVANCE(406);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(275);
      if (lookahead == 'g') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'j') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(347);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(68)
      END_STATE();
    case 69:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(69)
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '%') ADVANCE(345);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(310);
      if (lookahead == '+') ADVANCE(339);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'g') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(69)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 70:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(70)
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead == 'w') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(70)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 71:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(71)
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(408);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == 't') ADVANCE(415);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 72:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(314);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '~') ADVANCE(308);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 73:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(73)
      if (lookahead == 'b') ADVANCE(395);
      if (lookahead == 'c') ADVANCE(382);
      if (lookahead == 'd') ADVANCE(390);
      if (lookahead == 'f') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == 's') ADVANCE(383);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 74:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(74)
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == '[') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 75:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(75)
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == 't') ADVANCE(147);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(75)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(182);
      END_STATE();
    case 76:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(76)
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == '{') ADVANCE(356);
      if (lookahead == '}') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(76)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 77:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(77)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(77)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 78:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 79:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(79)
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(79)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(215);
      END_STATE();
    case 80:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(80)
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '}') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(80)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 81:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(81)
      if (lookahead == '"') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(81)
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 82:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(82)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(82)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 83:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 84:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(259);
      if (lookahead == '"') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 85:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(196);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 86:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(198);
      if (lookahead == ')') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(199);
      END_STATE();
    case 87:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(88)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(88)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 89:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(89)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(89)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 92:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 93:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 94:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 95:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 96:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 97:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(261);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 99:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 100:
      if (eof) ADVANCE(102);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(100)
      if (lookahead == '!') ADVANCE(360);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '%') ADVANCE(345);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '+') ADVANCE(339);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(370);
      if (lookahead == ']') ADVANCE(371);
      if (lookahead == '^') ADVANCE(406);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == 'b') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'f') ADVANCE(275);
      if (lookahead == 'g') ADVANCE(424);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead == '{') ADVANCE(357);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '}') ADVANCE(347);
      if (lookahead == '~') ADVANCE(308);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(100)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 101:
      if (eof) ADVANCE(102);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(101)
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '>') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(101)
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(321);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(103);
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(103);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '=') ADVANCE(324);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(324);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_th_COLON);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(327);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'd') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'j') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'm') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'p') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'v') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'w') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(352);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_iterStat_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_remove_all);
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_remove_body);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_remove_tag);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_remove_abf);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_inline_javascript);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_fragment_name);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(196);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_fragment_name);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_fragment_arg);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_fragment_arg);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_th_insert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_th_replace);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_th_each);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_th_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_th_unless);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_th_switch);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_th_case);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_th_object);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_th_with);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_th_attr);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_th_attrappend);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_th_attrprepend);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_th_remove);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_th_fragment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_th_inline);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(182);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(257);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_true_literal);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_true_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_true_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_false_literal);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_false_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_false_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_null_literal);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_null_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(286);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(262);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(265);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(297);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(268);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(287);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'q') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(337);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(299);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(280);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(279);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(290);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(349);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(351);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '{') ADVANCE(350);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(312);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_not_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_and);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_and_2);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_or);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_or_2);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '>') ADVANCE(112);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_TILDE_LBRACE);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_STAR_LBRACE);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_standard_url);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_standard_url_fragment);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_url_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(328);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_boolean_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_float);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_double);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_short);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_int);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_long);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_char);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_new);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_not);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_LBRACE_COLON_RBRACE);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'a') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'a') ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'a') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'b') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'e') ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'e') ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'e') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'g') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'h') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'h') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'l') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'l') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'l') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'n') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'n') ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'n') ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(391);
      if (lookahead == 'y') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'r') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'r') ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'u') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_spel_instanceof);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_spel_between);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_T_LPAREN);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'a') ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'e') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'e') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'l') ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'l') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'l') ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'r') ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 's') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 't') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'u') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'u') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'w') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'q') ADVANCE(329);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 101, .external_lex_state = 2},
  [2] = {.lex_state = 64},
  [3] = {.lex_state = 64},
  [4] = {.lex_state = 65},
  [5] = {.lex_state = 65},
  [6] = {.lex_state = 65},
  [7] = {.lex_state = 65},
  [8] = {.lex_state = 66},
  [9] = {.lex_state = 65},
  [10] = {.lex_state = 65},
  [11] = {.lex_state = 65},
  [12] = {.lex_state = 65},
  [13] = {.lex_state = 65},
  [14] = {.lex_state = 66},
  [15] = {.lex_state = 65},
  [16] = {.lex_state = 65},
  [17] = {.lex_state = 65},
  [18] = {.lex_state = 65},
  [19] = {.lex_state = 65},
  [20] = {.lex_state = 65},
  [21] = {.lex_state = 65},
  [22] = {.lex_state = 65},
  [23] = {.lex_state = 65},
  [24] = {.lex_state = 65},
  [25] = {.lex_state = 65},
  [26] = {.lex_state = 65},
  [27] = {.lex_state = 65},
  [28] = {.lex_state = 66},
  [29] = {.lex_state = 65},
  [30] = {.lex_state = 67},
  [31] = {.lex_state = 67},
  [32] = {.lex_state = 64},
  [33] = {.lex_state = 64},
  [34] = {.lex_state = 67},
  [35] = {.lex_state = 68},
  [36] = {.lex_state = 64},
  [37] = {.lex_state = 67},
  [38] = {.lex_state = 68},
  [39] = {.lex_state = 68},
  [40] = {.lex_state = 67},
  [41] = {.lex_state = 68},
  [42] = {.lex_state = 68},
  [43] = {.lex_state = 68},
  [44] = {.lex_state = 68},
  [45] = {.lex_state = 68},
  [46] = {.lex_state = 68},
  [47] = {.lex_state = 67},
  [48] = {.lex_state = 67},
  [49] = {.lex_state = 67},
  [50] = {.lex_state = 67},
  [51] = {.lex_state = 67},
  [52] = {.lex_state = 67},
  [53] = {.lex_state = 67},
  [54] = {.lex_state = 67},
  [55] = {.lex_state = 64},
  [56] = {.lex_state = 67},
  [57] = {.lex_state = 67},
  [58] = {.lex_state = 67},
  [59] = {.lex_state = 67},
  [60] = {.lex_state = 67},
  [61] = {.lex_state = 67},
  [62] = {.lex_state = 64},
  [63] = {.lex_state = 64},
  [64] = {.lex_state = 64},
  [65] = {.lex_state = 64},
  [66] = {.lex_state = 64},
  [67] = {.lex_state = 64},
  [68] = {.lex_state = 64},
  [69] = {.lex_state = 64},
  [70] = {.lex_state = 64},
  [71] = {.lex_state = 64},
  [72] = {.lex_state = 64},
  [73] = {.lex_state = 64},
  [74] = {.lex_state = 64},
  [75] = {.lex_state = 64},
  [76] = {.lex_state = 64},
  [77] = {.lex_state = 64},
  [78] = {.lex_state = 69},
  [79] = {.lex_state = 64},
  [80] = {.lex_state = 64},
  [81] = {.lex_state = 64},
  [82] = {.lex_state = 64},
  [83] = {.lex_state = 69},
  [84] = {.lex_state = 64},
  [85] = {.lex_state = 64},
  [86] = {.lex_state = 68},
  [87] = {.lex_state = 64},
  [88] = {.lex_state = 64},
  [89] = {.lex_state = 68},
  [90] = {.lex_state = 68},
  [91] = {.lex_state = 68},
  [92] = {.lex_state = 69},
  [93] = {.lex_state = 68},
  [94] = {.lex_state = 64},
  [95] = {.lex_state = 64},
  [96] = {.lex_state = 68},
  [97] = {.lex_state = 64},
  [98] = {.lex_state = 64},
  [99] = {.lex_state = 64},
  [100] = {.lex_state = 68},
  [101] = {.lex_state = 64},
  [102] = {.lex_state = 64},
  [103] = {.lex_state = 68},
  [104] = {.lex_state = 68},
  [105] = {.lex_state = 68},
  [106] = {.lex_state = 68},
  [107] = {.lex_state = 68},
  [108] = {.lex_state = 68},
  [109] = {.lex_state = 68},
  [110] = {.lex_state = 68},
  [111] = {.lex_state = 68},
  [112] = {.lex_state = 68},
  [113] = {.lex_state = 68},
  [114] = {.lex_state = 68},
  [115] = {.lex_state = 68},
  [116] = {.lex_state = 64},
  [117] = {.lex_state = 68},
  [118] = {.lex_state = 64},
  [119] = {.lex_state = 68},
  [120] = {.lex_state = 68},
  [121] = {.lex_state = 64},
  [122] = {.lex_state = 64},
  [123] = {.lex_state = 64},
  [124] = {.lex_state = 64},
  [125] = {.lex_state = 68},
  [126] = {.lex_state = 64},
  [127] = {.lex_state = 68},
  [128] = {.lex_state = 64},
  [129] = {.lex_state = 68},
  [130] = {.lex_state = 64},
  [131] = {.lex_state = 68},
  [132] = {.lex_state = 64},
  [133] = {.lex_state = 64},
  [134] = {.lex_state = 64},
  [135] = {.lex_state = 68},
  [136] = {.lex_state = 64},
  [137] = {.lex_state = 64},
  [138] = {.lex_state = 64},
  [139] = {.lex_state = 64},
  [140] = {.lex_state = 64},
  [141] = {.lex_state = 64},
  [142] = {.lex_state = 64},
  [143] = {.lex_state = 64},
  [144] = {.lex_state = 64},
  [145] = {.lex_state = 68},
  [146] = {.lex_state = 64},
  [147] = {.lex_state = 64},
  [148] = {.lex_state = 64},
  [149] = {.lex_state = 64},
  [150] = {.lex_state = 64},
  [151] = {.lex_state = 64},
  [152] = {.lex_state = 64},
  [153] = {.lex_state = 64},
  [154] = {.lex_state = 64},
  [155] = {.lex_state = 64},
  [156] = {.lex_state = 64},
  [157] = {.lex_state = 64},
  [158] = {.lex_state = 64},
  [159] = {.lex_state = 64},
  [160] = {.lex_state = 64},
  [161] = {.lex_state = 64},
  [162] = {.lex_state = 64},
  [163] = {.lex_state = 64},
  [164] = {.lex_state = 64},
  [165] = {.lex_state = 64},
  [166] = {.lex_state = 64},
  [167] = {.lex_state = 64},
  [168] = {.lex_state = 70},
  [169] = {.lex_state = 70},
  [170] = {.lex_state = 101, .external_lex_state = 3},
  [171] = {.lex_state = 101, .external_lex_state = 3},
  [172] = {.lex_state = 101, .external_lex_state = 3},
  [173] = {.lex_state = 101, .external_lex_state = 3},
  [174] = {.lex_state = 101, .external_lex_state = 2},
  [175] = {.lex_state = 101, .external_lex_state = 2},
  [176] = {.lex_state = 101, .external_lex_state = 3},
  [177] = {.lex_state = 67},
  [178] = {.lex_state = 67},
  [179] = {.lex_state = 67},
  [180] = {.lex_state = 67},
  [181] = {.lex_state = 67},
  [182] = {.lex_state = 67},
  [183] = {.lex_state = 71},
  [184] = {.lex_state = 71},
  [185] = {.lex_state = 65},
  [186] = {.lex_state = 71},
  [187] = {.lex_state = 65},
  [188] = {.lex_state = 65},
  [189] = {.lex_state = 65},
  [190] = {.lex_state = 65},
  [191] = {.lex_state = 65},
  [192] = {.lex_state = 72},
  [193] = {.lex_state = 72},
  [194] = {.lex_state = 72},
  [195] = {.lex_state = 73},
  [196] = {.lex_state = 74},
  [197] = {.lex_state = 74},
  [198] = {.lex_state = 72},
  [199] = {.lex_state = 72},
  [200] = {.lex_state = 74},
  [201] = {.lex_state = 72},
  [202] = {.lex_state = 72},
  [203] = {.lex_state = 74},
  [204] = {.lex_state = 72},
  [205] = {.lex_state = 72},
  [206] = {.lex_state = 72},
  [207] = {.lex_state = 72},
  [208] = {.lex_state = 75, .external_lex_state = 4},
  [209] = {.lex_state = 75, .external_lex_state = 4},
  [210] = {.lex_state = 75, .external_lex_state = 4},
  [211] = {.lex_state = 75, .external_lex_state = 4},
  [212] = {.lex_state = 75, .external_lex_state = 4},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 75},
  [215] = {.lex_state = 75},
  [216] = {.lex_state = 75},
  [217] = {.lex_state = 75},
  [218] = {.lex_state = 74},
  [219] = {.lex_state = 75},
  [220] = {.lex_state = 101, .external_lex_state = 3},
  [221] = {.lex_state = 101, .external_lex_state = 3},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 101, .external_lex_state = 2},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 101, .external_lex_state = 2},
  [229] = {.lex_state = 101, .external_lex_state = 3},
  [230] = {.lex_state = 101, .external_lex_state = 2},
  [231] = {.lex_state = 68},
  [232] = {.lex_state = 76},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 101, .external_lex_state = 2},
  [235] = {.lex_state = 101, .external_lex_state = 2},
  [236] = {.lex_state = 76},
  [237] = {.lex_state = 101, .external_lex_state = 2},
  [238] = {.lex_state = 101, .external_lex_state = 2},
  [239] = {.lex_state = 68},
  [240] = {.lex_state = 101, .external_lex_state = 2},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 101, .external_lex_state = 3},
  [243] = {.lex_state = 101, .external_lex_state = 3},
  [244] = {.lex_state = 101, .external_lex_state = 3},
  [245] = {.lex_state = 101, .external_lex_state = 3},
  [246] = {.lex_state = 101, .external_lex_state = 3},
  [247] = {.lex_state = 101, .external_lex_state = 3},
  [248] = {.lex_state = 101, .external_lex_state = 2},
  [249] = {.lex_state = 101, .external_lex_state = 2},
  [250] = {.lex_state = 101, .external_lex_state = 3},
  [251] = {.lex_state = 101, .external_lex_state = 3},
  [252] = {.lex_state = 101, .external_lex_state = 3},
  [253] = {.lex_state = 101, .external_lex_state = 3},
  [254] = {.lex_state = 101, .external_lex_state = 3},
  [255] = {.lex_state = 101, .external_lex_state = 2},
  [256] = {.lex_state = 101, .external_lex_state = 2},
  [257] = {.lex_state = 68},
  [258] = {.lex_state = 68},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 75, .external_lex_state = 4},
  [261] = {.lex_state = 75, .external_lex_state = 4},
  [262] = {.lex_state = 76},
  [263] = {.lex_state = 77},
  [264] = {.lex_state = 78},
  [265] = {.lex_state = 79},
  [266] = {.lex_state = 78},
  [267] = {.lex_state = 78},
  [268] = {.lex_state = 75, .external_lex_state = 4},
  [269] = {.lex_state = 76},
  [270] = {.lex_state = 74},
  [271] = {.lex_state = 76},
  [272] = {.lex_state = 75, .external_lex_state = 4},
  [273] = {.lex_state = 80},
  [274] = {.lex_state = 76},
  [275] = {.lex_state = 78},
  [276] = {.lex_state = 75},
  [277] = {.lex_state = 75},
  [278] = {.lex_state = 78},
  [279] = {.lex_state = 80},
  [280] = {.lex_state = 78},
  [281] = {.lex_state = 80},
  [282] = {.lex_state = 76},
  [283] = {.lex_state = 76},
  [284] = {.lex_state = 76},
  [285] = {.lex_state = 80},
  [286] = {.lex_state = 75, .external_lex_state = 4},
  [287] = {.lex_state = 75, .external_lex_state = 4},
  [288] = {.lex_state = 78},
  [289] = {.lex_state = 74},
  [290] = {.lex_state = 79},
  [291] = {.lex_state = 80},
  [292] = {.lex_state = 80},
  [293] = {.lex_state = 0, .external_lex_state = 5},
  [294] = {.lex_state = 77},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0, .external_lex_state = 6},
  [297] = {.lex_state = 81},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 75},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 80},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 81},
  [305] = {.lex_state = 75},
  [306] = {.lex_state = 75},
  [307] = {.lex_state = 64},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 65},
  [311] = {.lex_state = 82},
  [312] = {.lex_state = 75},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0, .external_lex_state = 6},
  [315] = {.lex_state = 64},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 81},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 64},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0, .external_lex_state = 5},
  [325] = {.lex_state = 77},
  [326] = {.lex_state = 81},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0, .external_lex_state = 5},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0, .external_lex_state = 5},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 77},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 82},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 64},
  [343] = {.lex_state = 77},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 83},
  [347] = {.lex_state = 84},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 84},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 81},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0, .external_lex_state = 7},
  [360] = {.lex_state = 82},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 83},
  [364] = {.lex_state = 85},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 80},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0, .external_lex_state = 5},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0, .external_lex_state = 5},
  [375] = {.lex_state = 0, .external_lex_state = 5},
  [376] = {.lex_state = 0, .external_lex_state = 5},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 86},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 68},
  [381] = {.lex_state = 0, .external_lex_state = 7},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 85},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 76},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 87},
  [403] = {.lex_state = 65},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 86},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 101},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 101},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 101},
  [427] = {.lex_state = 68},
  [428] = {.lex_state = 101},
  [429] = {.lex_state = 0, .external_lex_state = 8},
  [430] = {.lex_state = 77},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 80},
  [437] = {.lex_state = 89},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 64},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 101},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 65},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 101},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0, .external_lex_state = 9},
  [452] = {.lex_state = 87},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0, .external_lex_state = 8},
  [455] = {.lex_state = 88},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0, .external_lex_state = 9},
  [468] = {.lex_state = 68},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 89},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 89},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_number_literal_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [aux_sym_token_literal_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_greater_or_equal] = ACTIONS(1),
    [sym_greater_or_equal_2] = ACTIONS(1),
    [sym_lesser_or_equal] = ACTIONS(1),
    [sym_lesser_or_equal_2] = ACTIONS(1),
    [sym_equal] = ACTIONS(1),
    [sym_not_equal] = ACTIONS(1),
    [sym_equal_2] = ACTIONS(1),
    [sym_not_equal_2] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_and_2] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_modulo] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_STAR_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE_COLON_RBRACE] = ACTIONS(1),
    [sym_spel_instanceof] = ACTIONS(1),
    [sym_spel_between] = ACTIONS(1),
    [sym_exp] = ACTIONS(1),
    [aux_sym_spel_object_literal_token2] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(460),
    [sym_doctype] = STATE(174),
    [sym__node] = STATE(174),
    [sym_element] = STATE(174),
    [sym_script_element] = STATE(174),
    [sym_style_element] = STATE(174),
    [sym_start_tag] = STATE(173),
    [sym_script_start_tag] = STATE(328),
    [sym_style_start_tag] = STATE(333),
    [sym_self_closing_tag] = STATE(228),
    [sym_erroneous_end_tag] = STATE(174),
    [aux_sym_document_repeat1] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_BANG] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LT_SLASH] = ACTIONS(9),
    [sym_entity] = ACTIONS(11),
    [sym_text] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_spel_object_literal_token2,
    STATE(55), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(70), 1,
      sym_null_operator,
    ACTIONS(13), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(140), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(15), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [59] = 10,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_spel_object_literal_token2,
    STATE(2), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(62), 1,
      sym_null_operator,
    ACTIONS(27), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(143), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(29), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [118] = 16,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(39), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(134), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [188] = 16,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(59), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(123), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [258] = 16,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(63), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(87), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [328] = 16,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(67), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(82), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [398] = 20,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_number_literal_token1,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(101), 1,
      sym_standard_url,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    STATE(409), 1,
      sym__fragment_std_expression,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(75), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(91), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [476] = 16,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(103), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(133), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [546] = 16,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(107), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(132), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [616] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(111), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(65), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [683] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(113), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(116), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [750] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(115), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(102), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [817] = 19,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_number_literal_token1,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(101), 1,
      sym_standard_url,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    STATE(458), 1,
      sym__fragment_std_expression,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(75), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(91), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [892] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(117), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(122), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [959] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(119), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(64), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1026] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(121), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(63), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1093] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(123), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(67), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1160] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(125), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(128), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1227] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(127), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(74), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1294] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(129), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(73), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1361] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(131), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(72), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1428] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(133), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(71), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1495] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(135), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(121), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1562] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(137), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(126), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1629] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(139), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(130), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1696] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(141), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(85), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1763] = 19,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_number_literal_token1,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(101), 1,
      sym_standard_url,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    STATE(434), 1,
      sym__fragment_std_expression,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(75), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(91), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1838] = 15,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(384), 1,
      sym__spel_name,
    STATE(488), 1,
      sym_spel_new,
    ACTIONS(143), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(45), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(97), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1905] = 18,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(147), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(89), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1977] = 18,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    STATE(458), 1,
      sym_th_attribute_value,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(151), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(113), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [2049] = 7,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_null_operator,
    ACTIONS(153), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(142), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(155), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [2099] = 8,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      aux_sym_spel_object_literal_token2,
    STATE(36), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(157), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(152), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(159), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [2151] = 18,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    STATE(434), 1,
      sym_th_attribute_value,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(151), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(113), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [2223] = 17,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(169), 1,
      anon_sym_COLON,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(189), 1,
      anon_sym_QMARK,
    ACTIONS(177), 2,
      sym_and,
      sym_and_2,
    ACTIONS(179), 2,
      sym_or,
      sym_or_2,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(175), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(167), 6,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [2293] = 8,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_spel_object_literal_token2,
    STATE(55), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(191), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(156), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(193), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [2345] = 18,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(197), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(86), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [2417] = 17,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(189), 1,
      anon_sym_QMARK,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(177), 2,
      sym_and,
      sym_and_2,
    ACTIONS(179), 2,
      sym_or,
      sym_or_2,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(175), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(199), 6,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [2487] = 5,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(203), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(205), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [2533] = 18,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    STATE(348), 1,
      sym_fragment_call,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(207), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(90), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [2605] = 5,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(209), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(211), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [2651] = 15,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(209), 1,
      anon_sym_COLON,
    ACTIONS(177), 2,
      sym_and,
      sym_and_2,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(175), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(211), 9,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [2717] = 14,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(209), 1,
      anon_sym_COLON,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(175), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(211), 11,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [2781] = 8,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(209), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(211), 23,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [2833] = 13,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(209), 1,
      anon_sym_COLON,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(211), 15,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [2895] = 10,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(209), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(211), 21,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [2951] = 17,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(213), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(93), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3020] = 17,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(215), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(100), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3089] = 17,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(217), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(42), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3158] = 17,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(219), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(43), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3227] = 17,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(221), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(109), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3296] = 17,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(223), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(41), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3365] = 17,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(225), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(38), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3434] = 17,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(227), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(35), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3503] = 4,
    ACTIONS(233), 1,
      aux_sym_spel_object_literal_token2,
    STATE(55), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(229), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(231), 29,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [3546] = 17,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(236), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(103), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3615] = 17,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(238), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(45), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3684] = 17,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(240), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(104), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3753] = 17,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(242), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(44), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3822] = 17,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(244), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(46), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3891] = 17,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(81), 1,
      aux_sym_token_literal_token2,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(93), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(95), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(97), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      aux_sym_number_literal_token1,
    STATE(78), 1,
      aux_sym_token_literal_repeat1,
    STATE(105), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(246), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(39), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3960] = 5,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(142), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(155), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [4004] = 7,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(248), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(250), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [4052] = 11,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(248), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(250), 19,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [4108] = 5,
    ACTIONS(264), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(266), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [4152] = 5,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(268), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(136), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(270), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [4196] = 8,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(248), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(250), 22,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [4246] = 5,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(146), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(274), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [4290] = 5,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(276), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(144), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(278), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [4334] = 5,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(138), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(282), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [4378] = 13,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(248), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(250), 17,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [4438] = 15,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(250), 13,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [4502] = 16,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(250), 9,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [4568] = 17,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(250), 7,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [4636] = 5,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(149), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(300), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [4679] = 5,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(162), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(304), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [4722] = 5,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(306), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(161), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(308), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [4765] = 5,
    ACTIONS(79), 1,
      aux_sym_token_literal_token1,
    ACTIONS(314), 1,
      aux_sym_token_literal_token2,
    STATE(83), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(310), 12,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal_2,
      sym_lesser_or_equal_2,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_DASH,
    ACTIONS(312), 17,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_and_2,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [4808] = 5,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(316), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(164), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(318), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [4851] = 5,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(159), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(322), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [4894] = 5,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(154), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(326), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [4937] = 21,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      aux_sym_array_content_repeat1,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [5012] = 5,
    ACTIONS(340), 1,
      aux_sym_token_literal_token1,
    ACTIONS(343), 1,
      aux_sym_token_literal_token2,
    STATE(83), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(336), 12,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal_2,
      sym_lesser_or_equal_2,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_DASH,
    ACTIONS(338), 17,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_and_2,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5055] = 5,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(165), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(348), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [5098] = 20,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      aux_sym_inline_map_repeat1,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [5170] = 18,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(189), 1,
      anon_sym_QMARK,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_fragment_call_repeat1,
    ACTIONS(177), 2,
      sym_and,
      sym_and_2,
    ACTIONS(179), 2,
      sym_or,
      sym_or_2,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(175), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [5238] = 20,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    STATE(331), 1,
      aux_sym_array_content_repeat1,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [5310] = 6,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      aux_sym_array_creation_repeat1,
    STATE(148), 1,
      sym_array_content,
    ACTIONS(360), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [5354] = 18,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(189), 1,
      anon_sym_QMARK,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      aux_sym_fragment_call_repeat1,
    ACTIONS(177), 2,
      sym_and,
      sym_and_2,
    ACTIONS(179), 2,
      sym_or,
      sym_or_2,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(175), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [5422] = 17,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(189), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 2,
      sym_and,
      sym_and_2,
    ACTIONS(179), 2,
      sym_or,
      sym_or_2,
    ACTIONS(370), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(175), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [5488] = 17,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(189), 1,
      anon_sym_QMARK,
    ACTIONS(376), 1,
      anon_sym_COLON_COLON,
    ACTIONS(177), 2,
      sym_and,
      sym_and_2,
    ACTIONS(179), 2,
      sym_or,
      sym_or_2,
    ACTIONS(374), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(175), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [5554] = 2,
    ACTIONS(336), 14,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal_2,
      sym_lesser_or_equal_2,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_DASH,
    ACTIONS(338), 17,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_and_2,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5590] = 18,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(189), 1,
      anon_sym_QMARK,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_th_assignation_sequence_repeat1,
    ACTIONS(177), 2,
      sym_and,
      sym_and_2,
    ACTIONS(179), 2,
      sym_or,
      sym_or_2,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(175), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [5658] = 4,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      aux_sym_array_creation_repeat1,
    ACTIONS(382), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 26,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [5697] = 2,
    ACTIONS(389), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(391), 27,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [5732] = 3,
    ACTIONS(397), 1,
      anon_sym_DOT,
    ACTIONS(393), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(395), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5769] = 18,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [5836] = 2,
    ACTIONS(401), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(403), 27,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [5871] = 2,
    ACTIONS(405), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(407), 27,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [5906] = 16,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(189), 1,
      anon_sym_QMARK,
    ACTIONS(177), 2,
      sym_and,
      sym_and_2,
    ACTIONS(179), 2,
      sym_or,
      sym_or_2,
    ACTIONS(409), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(175), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [5969] = 2,
    ACTIONS(411), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(413), 27,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [6004] = 18,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6071] = 16,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(189), 1,
      anon_sym_QMARK,
    ACTIONS(177), 2,
      sym_and,
      sym_and_2,
    ACTIONS(179), 2,
      sym_or,
      sym_or_2,
    ACTIONS(417), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(175), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [6134] = 16,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(189), 1,
      anon_sym_QMARK,
    ACTIONS(177), 2,
      sym_and,
      sym_and_2,
    ACTIONS(179), 2,
      sym_or,
      sym_or_2,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(175), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [6197] = 2,
    ACTIONS(421), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(423), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6231] = 2,
    ACTIONS(425), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(427), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6265] = 2,
    ACTIONS(429), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(431), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6299] = 2,
    ACTIONS(433), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(435), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6333] = 16,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(189), 1,
      anon_sym_QMARK,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 2,
      sym_and,
      sym_and_2,
    ACTIONS(179), 2,
      sym_or,
      sym_or_2,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(175), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [6395] = 2,
    ACTIONS(439), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(441), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6429] = 2,
    ACTIONS(443), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(445), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6463] = 2,
    ACTIONS(447), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(449), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6497] = 16,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      sym_modulo,
    ACTIONS(189), 1,
      anon_sym_QMARK,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 2,
      sym_and,
      sym_and_2,
    ACTIONS(179), 2,
      sym_or,
      sym_or_2,
    STATE(52), 2,
      sym_multiply,
      sym_divide,
    STATE(59), 2,
      sym_add,
      sym_substract,
    STATE(60), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(175), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(173), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [6559] = 2,
    ACTIONS(453), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(455), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6593] = 2,
    ACTIONS(457), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(459), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6627] = 18,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6693] = 2,
    ACTIONS(463), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(465), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6727] = 2,
    ACTIONS(467), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(469), 27,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [6761] = 2,
    ACTIONS(471), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(473), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6795] = 2,
    ACTIONS(475), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(477), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6829] = 18,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(479), 1,
      anon_sym_RBRACK,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6895] = 18,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6961] = 18,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7027] = 2,
    ACTIONS(382), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 27,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [7061] = 2,
    ACTIONS(485), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(487), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [7095] = 18,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(489), 1,
      anon_sym_COLON,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7161] = 2,
    ACTIONS(491), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(493), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [7195] = 18,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7261] = 2,
    ACTIONS(497), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(499), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [7295] = 18,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7361] = 2,
    ACTIONS(503), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(505), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [7395] = 18,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7461] = 18,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7527] = 18,
    ACTIONS(252), 1,
      sym_spel_instanceof,
    ACTIONS(254), 1,
      sym_spel_between,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym_modulo,
    ACTIONS(262), 1,
      sym_exp,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(286), 1,
      anon_sym_DASH,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 2,
      sym_and,
      sym_and_2,
    ACTIONS(332), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_add,
      sym_substract,
    STATE(18), 2,
      sym_multiply,
      sym_divide,
    STATE(23), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(292), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(294), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7593] = 2,
    ACTIONS(513), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(515), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [7627] = 2,
    ACTIONS(517), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(519), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [7660] = 2,
    ACTIONS(521), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(523), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [7693] = 2,
    ACTIONS(525), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(527), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [7726] = 3,
    ACTIONS(533), 1,
      anon_sym_DOT,
    ACTIONS(529), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(531), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [7761] = 2,
    ACTIONS(280), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(282), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [7794] = 3,
    ACTIONS(537), 1,
      anon_sym_EQ,
    ACTIONS(535), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(539), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [7829] = 2,
    ACTIONS(268), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(270), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [7862] = 2,
    ACTIONS(153), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(155), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [7895] = 2,
    ACTIONS(541), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(543), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [7928] = 3,
    ACTIONS(549), 1,
      anon_sym_f,
    ACTIONS(545), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(547), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [7963] = 2,
    ACTIONS(551), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(553), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [7996] = 2,
    ACTIONS(555), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(557), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8028] = 2,
    ACTIONS(559), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(561), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8060] = 2,
    ACTIONS(563), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(565), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8092] = 2,
    ACTIONS(567), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(569), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8124] = 2,
    ACTIONS(571), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(573), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8156] = 2,
    ACTIONS(191), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8188] = 2,
    ACTIONS(575), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(577), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8220] = 2,
    ACTIONS(306), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8252] = 2,
    ACTIONS(579), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(581), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8284] = 2,
    ACTIONS(583), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(585), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8316] = 2,
    ACTIONS(587), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(589), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8348] = 2,
    ACTIONS(591), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(593), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8380] = 2,
    ACTIONS(595), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(597), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8412] = 2,
    ACTIONS(599), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(601), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8444] = 2,
    ACTIONS(346), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8476] = 2,
    ACTIONS(320), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(322), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8508] = 2,
    ACTIONS(248), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(250), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8540] = 2,
    ACTIONS(603), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(605), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8572] = 2,
    ACTIONS(607), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(609), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8604] = 2,
    ACTIONS(611), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(613), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8636] = 2,
    ACTIONS(615), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(617), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_exp,
  [8668] = 13,
    ACTIONS(619), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(623), 1,
      sym_th_each,
    ACTIONS(631), 1,
      sym_th_remove,
    ACTIONS(633), 1,
      sym_th_fragment,
    ACTIONS(635), 1,
      sym_th_inline,
    STATE(410), 1,
      sym__th_assignation_sequence,
    STATE(411), 1,
      sym__th_spel_only,
    STATE(415), 1,
      sym__th_fragments_insert,
    ACTIONS(621), 2,
      sym_th_insert,
      sym_th_replace,
    ACTIONS(627), 2,
      sym_th_object,
      sym_th_with,
    STATE(421), 2,
      sym__th_generic,
      sym_th_generic,
    ACTIONS(629), 3,
      sym_th_attr,
      sym_th_attrappend,
      sym_th_attrprepend,
    ACTIONS(625), 4,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
  [8716] = 13,
    ACTIONS(619), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(639), 1,
      sym_th_each,
    ACTIONS(647), 1,
      sym_th_remove,
    ACTIONS(649), 1,
      sym_th_fragment,
    ACTIONS(651), 1,
      sym_th_inline,
    STATE(485), 1,
      sym__th_fragments_insert,
    STATE(486), 1,
      sym__th_spel_only,
    STATE(487), 1,
      sym__th_assignation_sequence,
    ACTIONS(637), 2,
      sym_th_insert,
      sym_th_replace,
    ACTIONS(643), 2,
      sym_th_object,
      sym_th_with,
    STATE(484), 2,
      sym__th_generic,
      sym_th_generic,
    ACTIONS(645), 3,
      sym_th_attr,
      sym_th_attrappend,
      sym_th_attrprepend,
    ACTIONS(641), 4,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
  [8764] = 11,
    ACTIONS(653), 1,
      anon_sym_LT_BANG,
    ACTIONS(655), 1,
      anon_sym_LT,
    ACTIONS(657), 1,
      anon_sym_LT_SLASH,
    ACTIONS(661), 1,
      sym__implicit_end_tag,
    STATE(172), 1,
      sym_start_tag,
    STATE(246), 1,
      sym_end_tag,
    STATE(254), 1,
      sym_self_closing_tag,
    STATE(293), 1,
      sym_style_start_tag,
    STATE(324), 1,
      sym_script_start_tag,
    ACTIONS(659), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(176), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [8806] = 11,
    ACTIONS(653), 1,
      anon_sym_LT_BANG,
    ACTIONS(655), 1,
      anon_sym_LT,
    ACTIONS(663), 1,
      anon_sym_LT_SLASH,
    ACTIONS(665), 1,
      sym__implicit_end_tag,
    STATE(172), 1,
      sym_start_tag,
    STATE(237), 1,
      sym_end_tag,
    STATE(254), 1,
      sym_self_closing_tag,
    STATE(293), 1,
      sym_style_start_tag,
    STATE(324), 1,
      sym_script_start_tag,
    ACTIONS(659), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(176), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [8848] = 11,
    ACTIONS(653), 1,
      anon_sym_LT_BANG,
    ACTIONS(655), 1,
      anon_sym_LT,
    ACTIONS(657), 1,
      anon_sym_LT_SLASH,
    ACTIONS(669), 1,
      sym__implicit_end_tag,
    STATE(172), 1,
      sym_start_tag,
    STATE(253), 1,
      sym_end_tag,
    STATE(254), 1,
      sym_self_closing_tag,
    STATE(293), 1,
      sym_style_start_tag,
    STATE(324), 1,
      sym_script_start_tag,
    ACTIONS(667), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(170), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [8890] = 11,
    ACTIONS(653), 1,
      anon_sym_LT_BANG,
    ACTIONS(655), 1,
      anon_sym_LT,
    ACTIONS(663), 1,
      anon_sym_LT_SLASH,
    ACTIONS(673), 1,
      sym__implicit_end_tag,
    STATE(172), 1,
      sym_start_tag,
    STATE(235), 1,
      sym_end_tag,
    STATE(254), 1,
      sym_self_closing_tag,
    STATE(293), 1,
      sym_style_start_tag,
    STATE(324), 1,
      sym_script_start_tag,
    ACTIONS(671), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(171), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [8932] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LT_SLASH,
    ACTIONS(675), 1,
      ts_builtin_sym_end,
    STATE(173), 1,
      sym_start_tag,
    STATE(228), 1,
      sym_self_closing_tag,
    STATE(328), 1,
      sym_script_start_tag,
    STATE(333), 1,
      sym_style_start_tag,
    ACTIONS(677), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(175), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [8971] = 10,
    ACTIONS(679), 1,
      ts_builtin_sym_end,
    ACTIONS(681), 1,
      anon_sym_LT_BANG,
    ACTIONS(684), 1,
      anon_sym_LT,
    ACTIONS(687), 1,
      anon_sym_LT_SLASH,
    STATE(173), 1,
      sym_start_tag,
    STATE(228), 1,
      sym_self_closing_tag,
    STATE(328), 1,
      sym_script_start_tag,
    STATE(333), 1,
      sym_style_start_tag,
    ACTIONS(690), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(175), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [9010] = 10,
    ACTIONS(679), 1,
      sym__implicit_end_tag,
    ACTIONS(693), 1,
      anon_sym_LT_BANG,
    ACTIONS(696), 1,
      anon_sym_LT,
    ACTIONS(699), 1,
      anon_sym_LT_SLASH,
    STATE(172), 1,
      sym_start_tag,
    STATE(254), 1,
      sym_self_closing_tag,
    STATE(293), 1,
      sym_style_start_tag,
    STATE(324), 1,
      sym_script_start_tag,
    ACTIONS(702), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(176), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [9049] = 2,
    ACTIONS(707), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(705), 11,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
  [9071] = 2,
    ACTIONS(711), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(709), 11,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
  [9093] = 2,
    ACTIONS(715), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(713), 11,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
  [9115] = 2,
    ACTIONS(719), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(717), 11,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
  [9137] = 2,
    ACTIONS(723), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(721), 11,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
  [9159] = 2,
    ACTIONS(727), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(725), 11,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
  [9181] = 8,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(731), 1,
      anon_sym_SQUOTE,
    ACTIONS(735), 1,
      anon_sym_POUND,
    ACTIONS(737), 1,
      aux_sym_spel_object_literal_token1,
    STATE(387), 1,
      sym__spel_name,
    ACTIONS(733), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(339), 8,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_spel_variable,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [9215] = 7,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      aux_sym_spel_object_literal_token1,
    STATE(384), 1,
      sym__spel_name,
    ACTIONS(739), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(147), 8,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_spel_variable,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [9246] = 2,
    ACTIONS(711), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(709), 9,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
  [9267] = 7,
    ACTIONS(41), 1,
      aux_sym_number_literal_token1,
    ACTIONS(731), 1,
      anon_sym_SQUOTE,
    ACTIONS(735), 1,
      anon_sym_POUND,
    ACTIONS(737), 1,
      aux_sym_spel_object_literal_token1,
    STATE(387), 1,
      sym__spel_name,
    ACTIONS(741), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(349), 8,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_spel_variable,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [9298] = 2,
    ACTIONS(715), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(713), 9,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
  [9319] = 2,
    ACTIONS(719), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(717), 9,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
  [9340] = 2,
    ACTIONS(723), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(721), 9,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
  [9361] = 2,
    ACTIONS(707), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(705), 9,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
  [9382] = 2,
    ACTIONS(727), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(725), 9,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
  [9403] = 8,
    ACTIONS(743), 1,
      anon_sym_PIPE,
    ACTIONS(747), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(749), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(751), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(753), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(755), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(745), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(194), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [9435] = 8,
    ACTIONS(749), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(751), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(753), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(755), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(757), 1,
      anon_sym_PIPE,
    ACTIONS(761), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(759), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(192), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [9467] = 8,
    ACTIONS(763), 1,
      anon_sym_PIPE,
    ACTIONS(768), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(771), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(774), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(777), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(780), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(765), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(194), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [9499] = 5,
    ACTIONS(783), 1,
      sym_boolean_type,
    ACTIONS(789), 1,
      aux_sym_object_creation_expression_token1,
    ACTIONS(785), 2,
      anon_sym_float,
      anon_sym_double,
    STATE(351), 3,
      sym__type,
      sym_floating_point_type,
      sym_integral_type,
    ACTIONS(787), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [9522] = 9,
    ACTIONS(21), 1,
      anon_sym_QMARK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(793), 1,
      anon_sym_LBRACK,
    ACTIONS(795), 1,
      aux_sym_spel_object_literal_token2,
    STATE(197), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(224), 1,
      sym_null_operator,
    ACTIONS(29), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(143), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9553] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_QMARK,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(793), 1,
      anon_sym_LBRACK,
    ACTIONS(797), 1,
      aux_sym_spel_object_literal_token2,
    STATE(218), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(223), 1,
      sym_null_operator,
    ACTIONS(15), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(140), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9584] = 2,
    ACTIONS(473), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(471), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9599] = 2,
    ACTIONS(459), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(457), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9614] = 7,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(793), 1,
      anon_sym_LBRACK,
    ACTIONS(797), 1,
      aux_sym_spel_object_literal_token2,
    STATE(218), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(156), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9639] = 2,
    ACTIONS(493), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(491), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9654] = 2,
    ACTIONS(515), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(513), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9669] = 7,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(793), 1,
      anon_sym_LBRACK,
    ACTIONS(799), 1,
      aux_sym_spel_object_literal_token2,
    STATE(200), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(152), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9694] = 2,
    ACTIONS(499), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(497), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9709] = 2,
    ACTIONS(505), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(503), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9724] = 2,
    ACTIONS(487), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(485), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9739] = 2,
    ACTIONS(477), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(475), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9754] = 6,
    ACTIONS(801), 1,
      anon_sym_GT,
    ACTIONS(803), 1,
      anon_sym_SLASH_GT,
    ACTIONS(805), 1,
      anon_sym_th_COLON,
    ACTIONS(807), 1,
      aux_sym_attribute_name_token1,
    STATE(260), 1,
      sym_attribute_name,
    STATE(211), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9776] = 6,
    ACTIONS(805), 1,
      anon_sym_th_COLON,
    ACTIONS(807), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(809), 1,
      anon_sym_GT,
    ACTIONS(811), 1,
      anon_sym_SLASH_GT,
    STATE(260), 1,
      sym_attribute_name,
    STATE(212), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9798] = 6,
    ACTIONS(805), 1,
      anon_sym_th_COLON,
    ACTIONS(807), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(809), 1,
      anon_sym_GT,
    ACTIONS(813), 1,
      anon_sym_SLASH_GT,
    STATE(260), 1,
      sym_attribute_name,
    STATE(208), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9820] = 5,
    ACTIONS(817), 1,
      anon_sym_th_COLON,
    ACTIONS(820), 1,
      aux_sym_attribute_name_token1,
    STATE(260), 1,
      sym_attribute_name,
    ACTIONS(815), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(211), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9840] = 6,
    ACTIONS(801), 1,
      anon_sym_GT,
    ACTIONS(805), 1,
      anon_sym_th_COLON,
    ACTIONS(807), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(823), 1,
      anon_sym_SLASH_GT,
    STATE(260), 1,
      sym_attribute_name,
    STATE(211), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9862] = 6,
    ACTIONS(21), 1,
      anon_sym_QMARK,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(793), 1,
      anon_sym_LBRACK,
    STATE(222), 1,
      sym_null_operator,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(142), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9884] = 5,
    ACTIONS(825), 1,
      anon_sym_GT,
    ACTIONS(827), 1,
      anon_sym_th_COLON,
    ACTIONS(829), 1,
      aux_sym_attribute_name_token1,
    STATE(277), 1,
      sym_attribute_name,
    STATE(219), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9903] = 5,
    ACTIONS(827), 1,
      anon_sym_th_COLON,
    ACTIONS(829), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(831), 1,
      anon_sym_GT,
    STATE(277), 1,
      sym_attribute_name,
    STATE(219), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9922] = 5,
    ACTIONS(827), 1,
      anon_sym_th_COLON,
    ACTIONS(829), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(833), 1,
      anon_sym_GT,
    STATE(277), 1,
      sym_attribute_name,
    STATE(215), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9941] = 5,
    ACTIONS(827), 1,
      anon_sym_th_COLON,
    ACTIONS(829), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(835), 1,
      anon_sym_GT,
    STATE(277), 1,
      sym_attribute_name,
    STATE(214), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9960] = 3,
    ACTIONS(837), 1,
      aux_sym_spel_object_literal_token2,
    STATE(218), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(231), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [9975] = 5,
    ACTIONS(815), 1,
      anon_sym_GT,
    ACTIONS(840), 1,
      anon_sym_th_COLON,
    ACTIONS(843), 1,
      aux_sym_attribute_name_token1,
    STATE(277), 1,
      sym_attribute_name,
    STATE(219), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9994] = 2,
    ACTIONS(848), 1,
      anon_sym_LT,
    ACTIONS(846), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10006] = 2,
    ACTIONS(852), 1,
      anon_sym_LT,
    ACTIONS(850), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10018] = 4,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(793), 1,
      anon_sym_LBRACK,
    ACTIONS(270), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(136), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10034] = 4,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(793), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(138), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10050] = 4,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(793), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(142), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10066] = 4,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(793), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(159), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10082] = 2,
    ACTIONS(856), 1,
      anon_sym_LT,
    ACTIONS(854), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10094] = 4,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(793), 1,
      anon_sym_LBRACK,
    ACTIONS(274), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(146), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10110] = 2,
    ACTIONS(860), 1,
      anon_sym_LT,
    ACTIONS(858), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10122] = 2,
    ACTIONS(864), 1,
      anon_sym_LT,
    ACTIONS(862), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10134] = 2,
    ACTIONS(868), 1,
      anon_sym_LT,
    ACTIONS(866), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10146] = 4,
    ACTIONS(870), 1,
      sym_remove_all,
    ACTIONS(874), 1,
      anon_sym_none,
    STATE(458), 2,
      sym__th_remove_value,
      sym_remove_none,
    ACTIONS(872), 3,
      sym_remove_body,
      sym_remove_tag,
      sym_remove_abf,
  [10162] = 7,
    ACTIONS(876), 1,
      anon_sym_SLASH,
    ACTIONS(878), 1,
      anon_sym_RBRACE,
    ACTIONS(880), 1,
      sym_standard_url_fragment,
    ACTIONS(882), 1,
      anon_sym_LBRACE,
    STATE(284), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(321), 1,
      sym_parameterized_url_fragment,
    STATE(391), 1,
      sym__url_std_expression,
  [10184] = 4,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(793), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(144), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10200] = 2,
    ACTIONS(886), 1,
      anon_sym_LT,
    ACTIONS(884), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10212] = 2,
    ACTIONS(890), 1,
      anon_sym_LT,
    ACTIONS(888), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10224] = 7,
    ACTIONS(876), 1,
      anon_sym_SLASH,
    ACTIONS(880), 1,
      sym_standard_url_fragment,
    ACTIONS(882), 1,
      anon_sym_LBRACE,
    ACTIONS(892), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(321), 1,
      sym_parameterized_url_fragment,
    STATE(413), 1,
      sym__url_std_expression,
  [10246] = 2,
    ACTIONS(896), 1,
      anon_sym_LT,
    ACTIONS(894), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10258] = 2,
    ACTIONS(900), 1,
      anon_sym_LT,
    ACTIONS(898), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10270] = 4,
    ACTIONS(874), 1,
      anon_sym_none,
    ACTIONS(902), 1,
      sym_remove_all,
    STATE(434), 2,
      sym__th_remove_value,
      sym_remove_none,
    ACTIONS(904), 3,
      sym_remove_body,
      sym_remove_tag,
      sym_remove_abf,
  [10286] = 2,
    ACTIONS(908), 1,
      anon_sym_LT,
    ACTIONS(906), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10298] = 4,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(793), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(162), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10314] = 2,
    ACTIONS(868), 1,
      anon_sym_LT,
    ACTIONS(866), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10326] = 2,
    ACTIONS(912), 1,
      anon_sym_LT,
    ACTIONS(910), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10338] = 2,
    ACTIONS(916), 1,
      anon_sym_LT,
    ACTIONS(914), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10350] = 2,
    ACTIONS(908), 1,
      anon_sym_LT,
    ACTIONS(906), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10362] = 2,
    ACTIONS(896), 1,
      anon_sym_LT,
    ACTIONS(894), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10374] = 2,
    ACTIONS(886), 1,
      anon_sym_LT,
    ACTIONS(884), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10386] = 2,
    ACTIONS(920), 1,
      anon_sym_LT,
    ACTIONS(918), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10398] = 2,
    ACTIONS(916), 1,
      anon_sym_LT,
    ACTIONS(914), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10410] = 2,
    ACTIONS(900), 1,
      anon_sym_LT,
    ACTIONS(898), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10422] = 2,
    ACTIONS(856), 1,
      anon_sym_LT,
    ACTIONS(854), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10434] = 2,
    ACTIONS(920), 1,
      anon_sym_LT,
    ACTIONS(918), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10446] = 2,
    ACTIONS(890), 1,
      anon_sym_LT,
    ACTIONS(888), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10458] = 2,
    ACTIONS(860), 1,
      anon_sym_LT,
    ACTIONS(858), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10470] = 2,
    ACTIONS(912), 1,
      anon_sym_LT,
    ACTIONS(910), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10482] = 2,
    ACTIONS(852), 1,
      anon_sym_LT,
    ACTIONS(850), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10494] = 4,
    ACTIONS(872), 1,
      sym_inline_javascript,
    ACTIONS(922), 1,
      anon_sym_none,
    ACTIONS(924), 1,
      anon_sym_text,
    STATE(458), 3,
      sym__th_inline_value,
      sym_inline_text,
      sym_inline_none,
  [10509] = 4,
    ACTIONS(904), 1,
      sym_inline_javascript,
    ACTIONS(922), 1,
      anon_sym_none,
    ACTIONS(924), 1,
      anon_sym_text,
    STATE(434), 3,
      sym__th_inline_value,
      sym_inline_text,
      sym_inline_none,
  [10524] = 3,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(153), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10536] = 3,
    ACTIONS(928), 1,
      anon_sym_EQ,
    ACTIONS(930), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [10548] = 2,
    ACTIONS(934), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(932), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
      anon_sym_EQ,
  [10558] = 3,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
    ACTIONS(940), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [10569] = 4,
    ACTIONS(942), 1,
      aux_sym_spel_object_literal_token1,
    STATE(294), 1,
      aux_sym__type_adress_repeat1,
    STATE(373), 1,
      sym__spel_name,
    STATE(448), 1,
      sym__type_adress,
  [10582] = 3,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    STATE(278), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(946), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10593] = 4,
    ACTIONS(948), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      sym_attribute_value,
    ACTIONS(952), 1,
      anon_sym_SQUOTE,
    STATE(286), 1,
      sym_quoted_attribute_value,
  [10606] = 3,
    ACTIONS(954), 1,
      anon_sym_SQUOTE,
    STATE(280), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(956), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10617] = 3,
    ACTIONS(958), 1,
      anon_sym_SQUOTE,
    STATE(275), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(960), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10628] = 2,
    ACTIONS(964), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(962), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [10637] = 4,
    ACTIONS(966), 1,
      sym_standard_url_fragment,
    ACTIONS(969), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(439), 1,
      sym_parameterized_url_fragment,
  [10650] = 3,
    ACTIONS(797), 1,
      aux_sym_spel_object_literal_token2,
    STATE(218), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(17), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [10661] = 3,
    ACTIONS(972), 1,
      anon_sym_LPAREN,
    ACTIONS(974), 1,
      anon_sym_RBRACE,
    ACTIONS(940), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [10672] = 2,
    ACTIONS(978), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(976), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [10681] = 4,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    ACTIONS(982), 1,
      aux_sym_url_parameter_token1,
    STATE(298), 1,
      sym_url_parameter_assignement,
    STATE(393), 1,
      sym_url_parameter,
  [10694] = 4,
    ACTIONS(882), 1,
      anon_sym_LBRACE,
    ACTIONS(984), 1,
      sym_standard_url_fragment,
    STATE(269), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(315), 1,
      sym_parameterized_url_fragment,
  [10707] = 3,
    ACTIONS(986), 1,
      anon_sym_SQUOTE,
    STATE(280), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(956), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10718] = 2,
    ACTIONS(934), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(932), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_EQ,
  [10727] = 3,
    ACTIONS(930), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(988), 1,
      anon_sym_EQ,
    ACTIONS(926), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [10738] = 3,
    ACTIONS(990), 1,
      anon_sym_SQUOTE,
    STATE(280), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(956), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10749] = 4,
    ACTIONS(982), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym_url_parameter_assignement,
    STATE(393), 1,
      sym_url_parameter,
  [10762] = 3,
    ACTIONS(994), 1,
      anon_sym_SQUOTE,
    STATE(280), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(996), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10773] = 4,
    ACTIONS(982), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      sym_url_parameter_assignement,
    STATE(393), 1,
      sym_url_parameter,
  [10786] = 3,
    ACTIONS(1001), 1,
      anon_sym_LPAREN,
    ACTIONS(1003), 1,
      anon_sym_RBRACE,
    ACTIONS(940), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [10797] = 4,
    ACTIONS(882), 1,
      anon_sym_LBRACE,
    ACTIONS(1005), 1,
      sym_standard_url_fragment,
    STATE(274), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(307), 1,
      sym_parameterized_url_fragment,
  [10810] = 4,
    ACTIONS(882), 1,
      anon_sym_LBRACE,
    ACTIONS(1005), 1,
      sym_standard_url_fragment,
    STATE(269), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(307), 1,
      sym_parameterized_url_fragment,
  [10823] = 4,
    ACTIONS(1007), 1,
      anon_sym_RBRACE,
    ACTIONS(1009), 1,
      aux_sym_url_parameter_token1,
    STATE(367), 1,
      sym_message_name,
    STATE(418), 1,
      sym__message_std_expression,
  [10836] = 2,
    ACTIONS(1013), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1011), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [10845] = 2,
    ACTIONS(1017), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1015), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [10854] = 3,
    ACTIONS(1019), 1,
      anon_sym_SQUOTE,
    STATE(266), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(1021), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10865] = 3,
    ACTIONS(1023), 1,
      aux_sym_spel_object_literal_token2,
    STATE(270), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(31), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [10876] = 4,
    ACTIONS(1025), 1,
      anon_sym_DQUOTE,
    ACTIONS(1027), 1,
      sym_attribute_value,
    ACTIONS(1029), 1,
      anon_sym_SQUOTE,
    STATE(300), 1,
      sym_quoted_attribute_value,
  [10889] = 4,
    ACTIONS(982), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      sym_url_parameter_assignement,
    STATE(393), 1,
      sym_url_parameter,
  [10902] = 4,
    ACTIONS(1009), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(1033), 1,
      anon_sym_RBRACE,
    STATE(367), 1,
      sym_message_name,
    STATE(440), 1,
      sym__message_std_expression,
  [10915] = 3,
    ACTIONS(1035), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1037), 1,
      sym_raw_text,
    STATE(251), 1,
      sym_end_tag,
  [10925] = 3,
    ACTIONS(942), 1,
      aux_sym_spel_object_literal_token1,
    STATE(343), 1,
      aux_sym__type_adress_repeat1,
    STATE(357), 1,
      sym__spel_name,
  [10935] = 3,
    ACTIONS(1039), 1,
      anon_sym_DQUOTE,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    STATE(327), 1,
      aux_sym_th_assignation_sequence_repeat1,
  [10945] = 3,
    ACTIONS(1043), 1,
      sym__start_tag_name,
    ACTIONS(1045), 1,
      sym__script_start_tag_name,
    ACTIONS(1047), 1,
      sym__style_start_tag_name,
  [10955] = 3,
    ACTIONS(1049), 1,
      anon_sym_DQUOTE,
    ACTIONS(1051), 1,
      aux_sym_attribute_name_token1,
    STATE(444), 1,
      sym_attribute_name,
  [10965] = 3,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    STATE(303), 1,
      aux_sym__url_std_expression_repeat2,
  [10975] = 3,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_th_fragment_declaration_repeat1,
  [10985] = 2,
    ACTIONS(1013), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1011), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [10993] = 3,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym__url_std_expression_repeat2,
  [11003] = 3,
    ACTIONS(982), 1,
      aux_sym_url_parameter_token1,
    STATE(366), 1,
      sym_url_parameter_assignement,
    STATE(393), 1,
      sym_url_parameter,
  [11013] = 3,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym__url_std_expression_repeat2,
  [11023] = 3,
    ACTIONS(1051), 1,
      aux_sym_attribute_name_token1,
    STATE(434), 1,
      sym_th_assignation_sequence,
    STATE(438), 1,
      sym_attribute_name,
  [11033] = 2,
    ACTIONS(964), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(962), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [11041] = 2,
    ACTIONS(1017), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1015), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [11049] = 3,
    ACTIONS(972), 1,
      anon_sym_LPAREN,
    ACTIONS(974), 1,
      anon_sym_RBRACE,
    ACTIONS(1060), 1,
      anon_sym_SLASH,
  [11059] = 3,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    STATE(334), 1,
      aux_sym_fragment_call_repeat1,
  [11069] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(1064), 1,
      anon_sym_RBRACE,
    STATE(313), 1,
      aux_sym_array_content_repeat1,
  [11079] = 3,
    ACTIONS(1066), 1,
      aux_sym_number_literal_token1,
    ACTIONS(1068), 1,
      anon_sym_RBRACK,
    STATE(450), 1,
      sym_integer_literal,
  [11089] = 3,
    ACTIONS(1070), 1,
      aux_sym_iterStat_token1,
    STATE(388), 1,
      sym_each_element,
    STATE(434), 1,
      sym_th_each_value,
  [11099] = 2,
    ACTIONS(978), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(976), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [11107] = 3,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym_array_content_repeat1,
  [11117] = 3,
    ACTIONS(1045), 1,
      sym__script_start_tag_name,
    ACTIONS(1047), 1,
      sym__style_start_tag_name,
    ACTIONS(1075), 1,
      sym__start_tag_name,
  [11127] = 3,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
    ACTIONS(1077), 1,
      anon_sym_SLASH,
  [11137] = 3,
    ACTIONS(1079), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      aux_sym_th_fragment_declaration_repeat1,
  [11147] = 3,
    ACTIONS(1079), 1,
      anon_sym_COMMA,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_th_fragment_declaration_repeat1,
  [11157] = 3,
    ACTIONS(1051), 1,
      aux_sym_attribute_name_token1,
    STATE(438), 1,
      sym_attribute_name,
    STATE(458), 1,
      sym_th_assignation_sequence,
  [11167] = 3,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym__url_std_expression_repeat2,
  [11177] = 3,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym__url_std_expression_repeat2,
  [11187] = 3,
    ACTIONS(1089), 1,
      anon_sym_LPAREN,
    ACTIONS(1091), 1,
      anon_sym_SLASH,
    ACTIONS(1093), 1,
      anon_sym_RBRACE,
  [11197] = 2,
    ACTIONS(1097), 1,
      anon_sym_DOT,
    ACTIONS(1095), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [11205] = 3,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    STATE(344), 1,
      aux_sym_spel_method_args_repeat1,
  [11215] = 3,
    ACTIONS(1035), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1103), 1,
      sym_raw_text,
    STATE(252), 1,
      sym_end_tag,
  [11225] = 3,
    ACTIONS(1105), 1,
      aux_sym_spel_object_literal_token1,
    STATE(137), 1,
      sym_spel_method_literal,
    STATE(387), 1,
      sym__spel_name,
  [11235] = 3,
    ACTIONS(1051), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1107), 1,
      anon_sym_DQUOTE,
    STATE(444), 1,
      sym_attribute_name,
  [11245] = 3,
    ACTIONS(1109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    STATE(327), 1,
      aux_sym_th_assignation_sequence_repeat1,
  [11255] = 3,
    ACTIONS(1114), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1116), 1,
      sym_raw_text,
    STATE(248), 1,
      sym_end_tag,
  [11265] = 3,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym__url_std_expression_repeat2,
  [11275] = 3,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    STATE(320), 1,
      aux_sym__url_std_expression_repeat2,
  [11285] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
    STATE(313), 1,
      aux_sym_array_content_repeat1,
  [11295] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym__url_std_expression_repeat2,
  [11305] = 3,
    ACTIONS(1114), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1125), 1,
      sym_raw_text,
    STATE(226), 1,
      sym_end_tag,
  [11315] = 3,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_fragment_call_repeat1,
  [11325] = 3,
    ACTIONS(1130), 1,
      aux_sym_spel_object_literal_token1,
    STATE(137), 1,
      sym_spel_method_literal,
    STATE(384), 1,
      sym__spel_name,
  [11335] = 3,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(1132), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      aux_sym_inline_map_repeat1,
  [11345] = 2,
    ACTIONS(376), 1,
      anon_sym_COLON_COLON,
    ACTIONS(374), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [11353] = 3,
    ACTIONS(1070), 1,
      aux_sym_iterStat_token1,
    STATE(388), 1,
      sym_each_element,
    STATE(458), 1,
      sym_th_each_value,
  [11363] = 3,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym_spel_method_args_repeat1,
  [11373] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1139), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      aux_sym_inline_map_repeat1,
  [11383] = 3,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      aux_sym__url_std_expression_repeat2,
  [11393] = 1,
    ACTIONS(1141), 3,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_RBRACE,
  [11399] = 3,
    ACTIONS(1143), 1,
      aux_sym_spel_object_literal_token1,
    STATE(343), 1,
      aux_sym__type_adress_repeat1,
    STATE(419), 1,
      sym__spel_name,
  [11409] = 3,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    STATE(344), 1,
      aux_sym_spel_method_args_repeat1,
  [11419] = 3,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
    STATE(334), 1,
      aux_sym_fragment_call_repeat1,
  [11429] = 2,
    ACTIONS(1153), 1,
      anon_sym_SQUOTE,
    ACTIONS(1155), 1,
      aux_sym_quoted_attribute_value_token1,
  [11436] = 2,
    ACTIONS(1153), 1,
      anon_sym_DQUOTE,
    ACTIONS(1157), 1,
      aux_sym_quoted_attribute_value_token2,
  [11443] = 1,
    ACTIONS(1159), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [11448] = 1,
    ACTIONS(1149), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11453] = 2,
    ACTIONS(1114), 1,
      anon_sym_LT_SLASH,
    STATE(240), 1,
      sym_end_tag,
  [11460] = 2,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      aux_sym_array_creation_repeat1,
  [11467] = 1,
    ACTIONS(1161), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [11472] = 2,
    ACTIONS(1163), 1,
      anon_sym_DQUOTE,
    ACTIONS(1165), 1,
      aux_sym_quoted_attribute_value_token2,
  [11479] = 2,
    ACTIONS(1035), 1,
      anon_sym_LT_SLASH,
    STATE(244), 1,
      sym_end_tag,
  [11486] = 2,
    ACTIONS(1051), 1,
      aux_sym_attribute_name_token1,
    STATE(444), 1,
      sym_attribute_name,
  [11493] = 2,
    ACTIONS(1035), 1,
      anon_sym_LT_SLASH,
    STATE(245), 1,
      sym_end_tag,
  [11500] = 2,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    ACTIONS(1169), 1,
      anon_sym_DOT,
  [11507] = 1,
    ACTIONS(1058), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11512] = 2,
    ACTIONS(1171), 1,
      sym__end_tag_name,
    ACTIONS(1173), 1,
      sym_erroneous_end_tag_name,
  [11519] = 2,
    ACTIONS(1175), 1,
      aux_sym_iterStat_token1,
    STATE(407), 1,
      sym_iterStat,
  [11526] = 2,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(394), 1,
      sym_spel_th_std_expression,
  [11533] = 2,
    ACTIONS(1114), 1,
      anon_sym_LT_SLASH,
    STATE(249), 1,
      sym_end_tag,
  [11540] = 2,
    ACTIONS(1163), 1,
      anon_sym_SQUOTE,
    ACTIONS(1177), 1,
      aux_sym_quoted_attribute_value_token1,
  [11547] = 2,
    ACTIONS(1179), 1,
      sym_fragment_name,
    STATE(458), 1,
      sym_th_fragment_declaration,
  [11554] = 1,
    ACTIONS(1181), 2,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [11559] = 1,
    ACTIONS(1123), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11564] = 2,
    ACTIONS(1183), 1,
      anon_sym_LPAREN,
    ACTIONS(1185), 1,
      anon_sym_RBRACE,
  [11571] = 1,
    ACTIONS(1187), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [11576] = 1,
    ACTIONS(1189), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [11581] = 2,
    ACTIONS(982), 1,
      aux_sym_url_parameter_token1,
    STATE(417), 1,
      sym_url_parameter,
  [11588] = 2,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(458), 1,
      sym_spel_th_std_expression,
  [11595] = 1,
    ACTIONS(1191), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [11600] = 2,
    ACTIONS(1169), 1,
      anon_sym_DOT,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
  [11607] = 1,
    ACTIONS(1195), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [11612] = 1,
    ACTIONS(1197), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [11617] = 1,
    ACTIONS(1199), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [11622] = 2,
    ACTIONS(1201), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_range,
  [11629] = 2,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
    ACTIONS(1205), 1,
      sym_fragment_arg,
  [11636] = 2,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(406), 1,
      sym_spel_th_std_expression,
  [11643] = 2,
    ACTIONS(1207), 1,
      anon_sym_T_LPAREN,
    STATE(163), 1,
      sym_type,
  [11650] = 2,
    ACTIONS(1173), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(1209), 1,
      sym__end_tag_name,
  [11657] = 1,
    ACTIONS(1211), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [11662] = 2,
    ACTIONS(1179), 1,
      sym_fragment_name,
    STATE(434), 1,
      sym_th_fragment_declaration,
  [11669] = 2,
    ACTIONS(1213), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_spel_method_args,
  [11676] = 2,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(434), 1,
      sym_spel_th_std_expression,
  [11683] = 1,
    ACTIONS(940), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [11688] = 2,
    ACTIONS(1213), 1,
      anon_sym_LPAREN,
    STATE(227), 1,
      sym_spel_method_args,
  [11695] = 2,
    ACTIONS(1215), 1,
      anon_sym_COMMA,
    ACTIONS(1217), 1,
      anon_sym_COLON,
  [11702] = 1,
    ACTIONS(1219), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [11707] = 1,
    ACTIONS(1221), 1,
      anon_sym_RBRACE,
  [11711] = 1,
    ACTIONS(1223), 1,
      anon_sym_RBRACE,
  [11715] = 1,
    ACTIONS(1225), 1,
      anon_sym_DQUOTE,
  [11719] = 1,
    ACTIONS(1227), 1,
      anon_sym_EQ,
  [11723] = 1,
    ACTIONS(1229), 1,
      anon_sym_DQUOTE,
  [11727] = 1,
    ACTIONS(1231), 1,
      anon_sym_DQUOTE,
  [11731] = 1,
    ACTIONS(1233), 1,
      anon_sym_DQUOTE,
  [11735] = 1,
    ACTIONS(1235), 1,
      anon_sym_DQUOTE,
  [11739] = 1,
    ACTIONS(1237), 1,
      anon_sym_DQUOTE,
  [11743] = 1,
    ACTIONS(1239), 1,
      anon_sym_DQUOTE,
  [11747] = 1,
    ACTIONS(1241), 1,
      anon_sym_DQUOTE,
  [11751] = 1,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
  [11755] = 1,
    ACTIONS(1243), 1,
      aux_sym_doctype_token1,
  [11759] = 1,
    ACTIONS(1245), 1,
      aux_sym_number_literal_token1,
  [11763] = 1,
    ACTIONS(1247), 1,
      anon_sym_RBRACE,
  [11767] = 1,
    ACTIONS(1249), 1,
      anon_sym_DQUOTE,
  [11771] = 1,
    ACTIONS(1251), 1,
      anon_sym_DQUOTE,
  [11775] = 1,
    ACTIONS(1253), 1,
      anon_sym_COLON,
  [11779] = 1,
    ACTIONS(1255), 1,
      anon_sym_COLON,
  [11783] = 1,
    ACTIONS(1257), 1,
      anon_sym_RBRACE,
  [11787] = 1,
    ACTIONS(1259), 1,
      anon_sym_EQ,
  [11791] = 1,
    ACTIONS(1261), 1,
      anon_sym_EQ,
  [11795] = 1,
    ACTIONS(1263), 1,
      anon_sym_RBRACE,
  [11799] = 1,
    ACTIONS(1265), 1,
      anon_sym_RBRACE,
  [11803] = 1,
    ACTIONS(1267), 1,
      anon_sym_DQUOTE,
  [11807] = 1,
    ACTIONS(1269), 1,
      anon_sym_EQ,
  [11811] = 1,
    ACTIONS(1271), 1,
      sym_fragment_arg,
  [11815] = 1,
    ACTIONS(1273), 1,
      anon_sym_RBRACE,
  [11819] = 1,
    ACTIONS(1275), 1,
      anon_sym_RBRACE,
  [11823] = 1,
    ACTIONS(1169), 1,
      anon_sym_DOT,
  [11827] = 1,
    ACTIONS(1277), 1,
      anon_sym_GT,
  [11831] = 1,
    ACTIONS(1279), 1,
      anon_sym_EQ,
  [11835] = 1,
    ACTIONS(1281), 1,
      anon_sym_GT,
  [11839] = 1,
    ACTIONS(1283), 1,
      anon_sym_DQUOTE,
  [11843] = 1,
    ACTIONS(1285), 1,
      anon_sym_DQUOTE,
  [11847] = 1,
    ACTIONS(1287), 1,
      anon_sym_RBRACE,
  [11851] = 1,
    ACTIONS(1289), 1,
      anon_sym_GT,
  [11855] = 1,
    ACTIONS(1291), 1,
      sym__doctype,
  [11859] = 1,
    ACTIONS(1293), 1,
      anon_sym_GT,
  [11863] = 1,
    ACTIONS(1171), 1,
      sym__end_tag_name,
  [11867] = 1,
    ACTIONS(1295), 1,
      aux_sym_spel_object_literal_token1,
  [11871] = 1,
    ACTIONS(1297), 1,
      anon_sym_EQ,
  [11875] = 1,
    ACTIONS(1299), 1,
      anon_sym_DQUOTE,
  [11879] = 1,
    ACTIONS(1299), 1,
      anon_sym_SQUOTE,
  [11883] = 1,
    ACTIONS(1301), 1,
      anon_sym_DQUOTE,
  [11887] = 1,
    ACTIONS(1303), 1,
      anon_sym_EQ,
  [11891] = 1,
    ACTIONS(1305), 1,
      aux_sym_url_parameter_token1,
  [11895] = 1,
    ACTIONS(1307), 1,
      aux_sym_object_creation_expression_token1,
  [11899] = 1,
    ACTIONS(1309), 1,
      anon_sym_EQ,
  [11903] = 1,
    ACTIONS(1311), 1,
      anon_sym_SLASH,
  [11907] = 1,
    ACTIONS(1313), 1,
      anon_sym_RBRACE,
  [11911] = 1,
    ACTIONS(1315), 1,
      anon_sym_GT,
  [11915] = 1,
    ACTIONS(1317), 1,
      anon_sym_RBRACE,
  [11919] = 1,
    ACTIONS(1319), 1,
      anon_sym_RBRACE,
  [11923] = 1,
    ACTIONS(1321), 1,
      anon_sym_EQ,
  [11927] = 1,
    ACTIONS(1323), 1,
      aux_sym_number_literal_token1,
  [11931] = 1,
    ACTIONS(1325), 1,
      anon_sym_DQUOTE,
  [11935] = 1,
    ACTIONS(1325), 1,
      anon_sym_SQUOTE,
  [11939] = 1,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
  [11943] = 1,
    ACTIONS(1329), 1,
      anon_sym_GT,
  [11947] = 1,
    ACTIONS(1331), 1,
      anon_sym_RBRACK,
  [11951] = 1,
    ACTIONS(1173), 1,
      sym_erroneous_end_tag_name,
  [11955] = 1,
    ACTIONS(1333), 1,
      aux_sym_doctype_token1,
  [11959] = 1,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
  [11963] = 1,
    ACTIONS(1209), 1,
      sym__end_tag_name,
  [11967] = 1,
    ACTIONS(1335), 1,
      aux_sym_token_literal_token2,
  [11971] = 1,
    ACTIONS(1337), 1,
      anon_sym_EQ,
  [11975] = 1,
    ACTIONS(1339), 1,
      anon_sym_LBRACK,
  [11979] = 1,
    ACTIONS(1341), 1,
      anon_sym_DQUOTE,
  [11983] = 1,
    ACTIONS(1343), 1,
      anon_sym_LBRACK,
  [11987] = 1,
    ACTIONS(1345), 1,
      ts_builtin_sym_end,
  [11991] = 1,
    ACTIONS(1347), 1,
      anon_sym_RBRACE,
  [11995] = 1,
    ACTIONS(1349), 1,
      anon_sym_EQ,
  [11999] = 1,
    ACTIONS(1351), 1,
      anon_sym_EQ,
  [12003] = 1,
    ACTIONS(1003), 1,
      anon_sym_RBRACE,
  [12007] = 1,
    ACTIONS(1353), 1,
      anon_sym_DQUOTE,
  [12011] = 1,
    ACTIONS(1355), 1,
      anon_sym_LPAREN,
  [12015] = 1,
    ACTIONS(1357), 1,
      sym_erroneous_end_tag_name,
  [12019] = 1,
    ACTIONS(1359), 1,
      sym__doctype,
  [12023] = 1,
    ACTIONS(1361), 1,
      anon_sym_DQUOTE,
  [12027] = 1,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
  [12031] = 1,
    ACTIONS(1365), 1,
      anon_sym_DQUOTE,
  [12035] = 1,
    ACTIONS(1367), 1,
      anon_sym_DQUOTE,
  [12039] = 1,
    ACTIONS(1369), 1,
      anon_sym_DQUOTE,
  [12043] = 1,
    ACTIONS(1371), 1,
      anon_sym_DQUOTE,
  [12047] = 1,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
  [12051] = 1,
    ACTIONS(1375), 1,
      anon_sym_DQUOTE,
  [12055] = 1,
    ACTIONS(1377), 1,
      anon_sym_DQUOTE,
  [12059] = 1,
    ACTIONS(1379), 1,
      aux_sym_object_creation_expression_token1,
  [12063] = 1,
    ACTIONS(1381), 1,
      anon_sym_DQUOTE,
  [12067] = 1,
    ACTIONS(1383), 1,
      anon_sym_EQ,
  [12071] = 1,
    ACTIONS(1385), 1,
      anon_sym_EQ,
  [12075] = 1,
    ACTIONS(1387), 1,
      anon_sym_EQ,
  [12079] = 1,
    ACTIONS(1389), 1,
      anon_sym_EQ,
  [12083] = 1,
    ACTIONS(1391), 1,
      anon_sym_EQ,
  [12087] = 1,
    ACTIONS(1393), 1,
      anon_sym_EQ,
  [12091] = 1,
    ACTIONS(1395), 1,
      anon_sym_EQ,
  [12095] = 1,
    ACTIONS(1397), 1,
      anon_sym_EQ,
  [12099] = 1,
    ACTIONS(1399), 1,
      aux_sym_object_creation_expression_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 188,
  [SMALL_STATE(6)] = 258,
  [SMALL_STATE(7)] = 328,
  [SMALL_STATE(8)] = 398,
  [SMALL_STATE(9)] = 476,
  [SMALL_STATE(10)] = 546,
  [SMALL_STATE(11)] = 616,
  [SMALL_STATE(12)] = 683,
  [SMALL_STATE(13)] = 750,
  [SMALL_STATE(14)] = 817,
  [SMALL_STATE(15)] = 892,
  [SMALL_STATE(16)] = 959,
  [SMALL_STATE(17)] = 1026,
  [SMALL_STATE(18)] = 1093,
  [SMALL_STATE(19)] = 1160,
  [SMALL_STATE(20)] = 1227,
  [SMALL_STATE(21)] = 1294,
  [SMALL_STATE(22)] = 1361,
  [SMALL_STATE(23)] = 1428,
  [SMALL_STATE(24)] = 1495,
  [SMALL_STATE(25)] = 1562,
  [SMALL_STATE(26)] = 1629,
  [SMALL_STATE(27)] = 1696,
  [SMALL_STATE(28)] = 1763,
  [SMALL_STATE(29)] = 1838,
  [SMALL_STATE(30)] = 1905,
  [SMALL_STATE(31)] = 1977,
  [SMALL_STATE(32)] = 2049,
  [SMALL_STATE(33)] = 2099,
  [SMALL_STATE(34)] = 2151,
  [SMALL_STATE(35)] = 2223,
  [SMALL_STATE(36)] = 2293,
  [SMALL_STATE(37)] = 2345,
  [SMALL_STATE(38)] = 2417,
  [SMALL_STATE(39)] = 2487,
  [SMALL_STATE(40)] = 2533,
  [SMALL_STATE(41)] = 2605,
  [SMALL_STATE(42)] = 2651,
  [SMALL_STATE(43)] = 2717,
  [SMALL_STATE(44)] = 2781,
  [SMALL_STATE(45)] = 2833,
  [SMALL_STATE(46)] = 2895,
  [SMALL_STATE(47)] = 2951,
  [SMALL_STATE(48)] = 3020,
  [SMALL_STATE(49)] = 3089,
  [SMALL_STATE(50)] = 3158,
  [SMALL_STATE(51)] = 3227,
  [SMALL_STATE(52)] = 3296,
  [SMALL_STATE(53)] = 3365,
  [SMALL_STATE(54)] = 3434,
  [SMALL_STATE(55)] = 3503,
  [SMALL_STATE(56)] = 3546,
  [SMALL_STATE(57)] = 3615,
  [SMALL_STATE(58)] = 3684,
  [SMALL_STATE(59)] = 3753,
  [SMALL_STATE(60)] = 3822,
  [SMALL_STATE(61)] = 3891,
  [SMALL_STATE(62)] = 3960,
  [SMALL_STATE(63)] = 4004,
  [SMALL_STATE(64)] = 4052,
  [SMALL_STATE(65)] = 4108,
  [SMALL_STATE(66)] = 4152,
  [SMALL_STATE(67)] = 4196,
  [SMALL_STATE(68)] = 4246,
  [SMALL_STATE(69)] = 4290,
  [SMALL_STATE(70)] = 4334,
  [SMALL_STATE(71)] = 4378,
  [SMALL_STATE(72)] = 4438,
  [SMALL_STATE(73)] = 4502,
  [SMALL_STATE(74)] = 4568,
  [SMALL_STATE(75)] = 4636,
  [SMALL_STATE(76)] = 4679,
  [SMALL_STATE(77)] = 4722,
  [SMALL_STATE(78)] = 4765,
  [SMALL_STATE(79)] = 4808,
  [SMALL_STATE(80)] = 4851,
  [SMALL_STATE(81)] = 4894,
  [SMALL_STATE(82)] = 4937,
  [SMALL_STATE(83)] = 5012,
  [SMALL_STATE(84)] = 5055,
  [SMALL_STATE(85)] = 5098,
  [SMALL_STATE(86)] = 5170,
  [SMALL_STATE(87)] = 5238,
  [SMALL_STATE(88)] = 5310,
  [SMALL_STATE(89)] = 5354,
  [SMALL_STATE(90)] = 5422,
  [SMALL_STATE(91)] = 5488,
  [SMALL_STATE(92)] = 5554,
  [SMALL_STATE(93)] = 5590,
  [SMALL_STATE(94)] = 5658,
  [SMALL_STATE(95)] = 5697,
  [SMALL_STATE(96)] = 5732,
  [SMALL_STATE(97)] = 5769,
  [SMALL_STATE(98)] = 5836,
  [SMALL_STATE(99)] = 5871,
  [SMALL_STATE(100)] = 5906,
  [SMALL_STATE(101)] = 5969,
  [SMALL_STATE(102)] = 6004,
  [SMALL_STATE(103)] = 6071,
  [SMALL_STATE(104)] = 6134,
  [SMALL_STATE(105)] = 6197,
  [SMALL_STATE(106)] = 6231,
  [SMALL_STATE(107)] = 6265,
  [SMALL_STATE(108)] = 6299,
  [SMALL_STATE(109)] = 6333,
  [SMALL_STATE(110)] = 6395,
  [SMALL_STATE(111)] = 6429,
  [SMALL_STATE(112)] = 6463,
  [SMALL_STATE(113)] = 6497,
  [SMALL_STATE(114)] = 6559,
  [SMALL_STATE(115)] = 6593,
  [SMALL_STATE(116)] = 6627,
  [SMALL_STATE(117)] = 6693,
  [SMALL_STATE(118)] = 6727,
  [SMALL_STATE(119)] = 6761,
  [SMALL_STATE(120)] = 6795,
  [SMALL_STATE(121)] = 6829,
  [SMALL_STATE(122)] = 6895,
  [SMALL_STATE(123)] = 6961,
  [SMALL_STATE(124)] = 7027,
  [SMALL_STATE(125)] = 7061,
  [SMALL_STATE(126)] = 7095,
  [SMALL_STATE(127)] = 7161,
  [SMALL_STATE(128)] = 7195,
  [SMALL_STATE(129)] = 7261,
  [SMALL_STATE(130)] = 7295,
  [SMALL_STATE(131)] = 7361,
  [SMALL_STATE(132)] = 7395,
  [SMALL_STATE(133)] = 7461,
  [SMALL_STATE(134)] = 7527,
  [SMALL_STATE(135)] = 7593,
  [SMALL_STATE(136)] = 7627,
  [SMALL_STATE(137)] = 7660,
  [SMALL_STATE(138)] = 7693,
  [SMALL_STATE(139)] = 7726,
  [SMALL_STATE(140)] = 7761,
  [SMALL_STATE(141)] = 7794,
  [SMALL_STATE(142)] = 7829,
  [SMALL_STATE(143)] = 7862,
  [SMALL_STATE(144)] = 7895,
  [SMALL_STATE(145)] = 7928,
  [SMALL_STATE(146)] = 7963,
  [SMALL_STATE(147)] = 7996,
  [SMALL_STATE(148)] = 8028,
  [SMALL_STATE(149)] = 8060,
  [SMALL_STATE(150)] = 8092,
  [SMALL_STATE(151)] = 8124,
  [SMALL_STATE(152)] = 8156,
  [SMALL_STATE(153)] = 8188,
  [SMALL_STATE(154)] = 8220,
  [SMALL_STATE(155)] = 8252,
  [SMALL_STATE(156)] = 8284,
  [SMALL_STATE(157)] = 8316,
  [SMALL_STATE(158)] = 8348,
  [SMALL_STATE(159)] = 8380,
  [SMALL_STATE(160)] = 8412,
  [SMALL_STATE(161)] = 8444,
  [SMALL_STATE(162)] = 8476,
  [SMALL_STATE(163)] = 8508,
  [SMALL_STATE(164)] = 8540,
  [SMALL_STATE(165)] = 8572,
  [SMALL_STATE(166)] = 8604,
  [SMALL_STATE(167)] = 8636,
  [SMALL_STATE(168)] = 8668,
  [SMALL_STATE(169)] = 8716,
  [SMALL_STATE(170)] = 8764,
  [SMALL_STATE(171)] = 8806,
  [SMALL_STATE(172)] = 8848,
  [SMALL_STATE(173)] = 8890,
  [SMALL_STATE(174)] = 8932,
  [SMALL_STATE(175)] = 8971,
  [SMALL_STATE(176)] = 9010,
  [SMALL_STATE(177)] = 9049,
  [SMALL_STATE(178)] = 9071,
  [SMALL_STATE(179)] = 9093,
  [SMALL_STATE(180)] = 9115,
  [SMALL_STATE(181)] = 9137,
  [SMALL_STATE(182)] = 9159,
  [SMALL_STATE(183)] = 9181,
  [SMALL_STATE(184)] = 9215,
  [SMALL_STATE(185)] = 9246,
  [SMALL_STATE(186)] = 9267,
  [SMALL_STATE(187)] = 9298,
  [SMALL_STATE(188)] = 9319,
  [SMALL_STATE(189)] = 9340,
  [SMALL_STATE(190)] = 9361,
  [SMALL_STATE(191)] = 9382,
  [SMALL_STATE(192)] = 9403,
  [SMALL_STATE(193)] = 9435,
  [SMALL_STATE(194)] = 9467,
  [SMALL_STATE(195)] = 9499,
  [SMALL_STATE(196)] = 9522,
  [SMALL_STATE(197)] = 9553,
  [SMALL_STATE(198)] = 9584,
  [SMALL_STATE(199)] = 9599,
  [SMALL_STATE(200)] = 9614,
  [SMALL_STATE(201)] = 9639,
  [SMALL_STATE(202)] = 9654,
  [SMALL_STATE(203)] = 9669,
  [SMALL_STATE(204)] = 9694,
  [SMALL_STATE(205)] = 9709,
  [SMALL_STATE(206)] = 9724,
  [SMALL_STATE(207)] = 9739,
  [SMALL_STATE(208)] = 9754,
  [SMALL_STATE(209)] = 9776,
  [SMALL_STATE(210)] = 9798,
  [SMALL_STATE(211)] = 9820,
  [SMALL_STATE(212)] = 9840,
  [SMALL_STATE(213)] = 9862,
  [SMALL_STATE(214)] = 9884,
  [SMALL_STATE(215)] = 9903,
  [SMALL_STATE(216)] = 9922,
  [SMALL_STATE(217)] = 9941,
  [SMALL_STATE(218)] = 9960,
  [SMALL_STATE(219)] = 9975,
  [SMALL_STATE(220)] = 9994,
  [SMALL_STATE(221)] = 10006,
  [SMALL_STATE(222)] = 10018,
  [SMALL_STATE(223)] = 10034,
  [SMALL_STATE(224)] = 10050,
  [SMALL_STATE(225)] = 10066,
  [SMALL_STATE(226)] = 10082,
  [SMALL_STATE(227)] = 10094,
  [SMALL_STATE(228)] = 10110,
  [SMALL_STATE(229)] = 10122,
  [SMALL_STATE(230)] = 10134,
  [SMALL_STATE(231)] = 10146,
  [SMALL_STATE(232)] = 10162,
  [SMALL_STATE(233)] = 10184,
  [SMALL_STATE(234)] = 10200,
  [SMALL_STATE(235)] = 10212,
  [SMALL_STATE(236)] = 10224,
  [SMALL_STATE(237)] = 10246,
  [SMALL_STATE(238)] = 10258,
  [SMALL_STATE(239)] = 10270,
  [SMALL_STATE(240)] = 10286,
  [SMALL_STATE(241)] = 10298,
  [SMALL_STATE(242)] = 10314,
  [SMALL_STATE(243)] = 10326,
  [SMALL_STATE(244)] = 10338,
  [SMALL_STATE(245)] = 10350,
  [SMALL_STATE(246)] = 10362,
  [SMALL_STATE(247)] = 10374,
  [SMALL_STATE(248)] = 10386,
  [SMALL_STATE(249)] = 10398,
  [SMALL_STATE(250)] = 10410,
  [SMALL_STATE(251)] = 10422,
  [SMALL_STATE(252)] = 10434,
  [SMALL_STATE(253)] = 10446,
  [SMALL_STATE(254)] = 10458,
  [SMALL_STATE(255)] = 10470,
  [SMALL_STATE(256)] = 10482,
  [SMALL_STATE(257)] = 10494,
  [SMALL_STATE(258)] = 10509,
  [SMALL_STATE(259)] = 10524,
  [SMALL_STATE(260)] = 10536,
  [SMALL_STATE(261)] = 10548,
  [SMALL_STATE(262)] = 10558,
  [SMALL_STATE(263)] = 10569,
  [SMALL_STATE(264)] = 10582,
  [SMALL_STATE(265)] = 10593,
  [SMALL_STATE(266)] = 10606,
  [SMALL_STATE(267)] = 10617,
  [SMALL_STATE(268)] = 10628,
  [SMALL_STATE(269)] = 10637,
  [SMALL_STATE(270)] = 10650,
  [SMALL_STATE(271)] = 10661,
  [SMALL_STATE(272)] = 10672,
  [SMALL_STATE(273)] = 10681,
  [SMALL_STATE(274)] = 10694,
  [SMALL_STATE(275)] = 10707,
  [SMALL_STATE(276)] = 10718,
  [SMALL_STATE(277)] = 10727,
  [SMALL_STATE(278)] = 10738,
  [SMALL_STATE(279)] = 10749,
  [SMALL_STATE(280)] = 10762,
  [SMALL_STATE(281)] = 10773,
  [SMALL_STATE(282)] = 10786,
  [SMALL_STATE(283)] = 10797,
  [SMALL_STATE(284)] = 10810,
  [SMALL_STATE(285)] = 10823,
  [SMALL_STATE(286)] = 10836,
  [SMALL_STATE(287)] = 10845,
  [SMALL_STATE(288)] = 10854,
  [SMALL_STATE(289)] = 10865,
  [SMALL_STATE(290)] = 10876,
  [SMALL_STATE(291)] = 10889,
  [SMALL_STATE(292)] = 10902,
  [SMALL_STATE(293)] = 10915,
  [SMALL_STATE(294)] = 10925,
  [SMALL_STATE(295)] = 10935,
  [SMALL_STATE(296)] = 10945,
  [SMALL_STATE(297)] = 10955,
  [SMALL_STATE(298)] = 10965,
  [SMALL_STATE(299)] = 10975,
  [SMALL_STATE(300)] = 10985,
  [SMALL_STATE(301)] = 10993,
  [SMALL_STATE(302)] = 11003,
  [SMALL_STATE(303)] = 11013,
  [SMALL_STATE(304)] = 11023,
  [SMALL_STATE(305)] = 11033,
  [SMALL_STATE(306)] = 11041,
  [SMALL_STATE(307)] = 11049,
  [SMALL_STATE(308)] = 11059,
  [SMALL_STATE(309)] = 11069,
  [SMALL_STATE(310)] = 11079,
  [SMALL_STATE(311)] = 11089,
  [SMALL_STATE(312)] = 11099,
  [SMALL_STATE(313)] = 11107,
  [SMALL_STATE(314)] = 11117,
  [SMALL_STATE(315)] = 11127,
  [SMALL_STATE(316)] = 11137,
  [SMALL_STATE(317)] = 11147,
  [SMALL_STATE(318)] = 11157,
  [SMALL_STATE(319)] = 11167,
  [SMALL_STATE(320)] = 11177,
  [SMALL_STATE(321)] = 11187,
  [SMALL_STATE(322)] = 11197,
  [SMALL_STATE(323)] = 11205,
  [SMALL_STATE(324)] = 11215,
  [SMALL_STATE(325)] = 11225,
  [SMALL_STATE(326)] = 11235,
  [SMALL_STATE(327)] = 11245,
  [SMALL_STATE(328)] = 11255,
  [SMALL_STATE(329)] = 11265,
  [SMALL_STATE(330)] = 11275,
  [SMALL_STATE(331)] = 11285,
  [SMALL_STATE(332)] = 11295,
  [SMALL_STATE(333)] = 11305,
  [SMALL_STATE(334)] = 11315,
  [SMALL_STATE(335)] = 11325,
  [SMALL_STATE(336)] = 11335,
  [SMALL_STATE(337)] = 11345,
  [SMALL_STATE(338)] = 11353,
  [SMALL_STATE(339)] = 11363,
  [SMALL_STATE(340)] = 11373,
  [SMALL_STATE(341)] = 11383,
  [SMALL_STATE(342)] = 11393,
  [SMALL_STATE(343)] = 11399,
  [SMALL_STATE(344)] = 11409,
  [SMALL_STATE(345)] = 11419,
  [SMALL_STATE(346)] = 11429,
  [SMALL_STATE(347)] = 11436,
  [SMALL_STATE(348)] = 11443,
  [SMALL_STATE(349)] = 11448,
  [SMALL_STATE(350)] = 11453,
  [SMALL_STATE(351)] = 11460,
  [SMALL_STATE(352)] = 11467,
  [SMALL_STATE(353)] = 11472,
  [SMALL_STATE(354)] = 11479,
  [SMALL_STATE(355)] = 11486,
  [SMALL_STATE(356)] = 11493,
  [SMALL_STATE(357)] = 11500,
  [SMALL_STATE(358)] = 11507,
  [SMALL_STATE(359)] = 11512,
  [SMALL_STATE(360)] = 11519,
  [SMALL_STATE(361)] = 11526,
  [SMALL_STATE(362)] = 11533,
  [SMALL_STATE(363)] = 11540,
  [SMALL_STATE(364)] = 11547,
  [SMALL_STATE(365)] = 11554,
  [SMALL_STATE(366)] = 11559,
  [SMALL_STATE(367)] = 11564,
  [SMALL_STATE(368)] = 11571,
  [SMALL_STATE(369)] = 11576,
  [SMALL_STATE(370)] = 11581,
  [SMALL_STATE(371)] = 11588,
  [SMALL_STATE(372)] = 11595,
  [SMALL_STATE(373)] = 11600,
  [SMALL_STATE(374)] = 11607,
  [SMALL_STATE(375)] = 11612,
  [SMALL_STATE(376)] = 11617,
  [SMALL_STATE(377)] = 11622,
  [SMALL_STATE(378)] = 11629,
  [SMALL_STATE(379)] = 11636,
  [SMALL_STATE(380)] = 11643,
  [SMALL_STATE(381)] = 11650,
  [SMALL_STATE(382)] = 11657,
  [SMALL_STATE(383)] = 11662,
  [SMALL_STATE(384)] = 11669,
  [SMALL_STATE(385)] = 11676,
  [SMALL_STATE(386)] = 11683,
  [SMALL_STATE(387)] = 11688,
  [SMALL_STATE(388)] = 11695,
  [SMALL_STATE(389)] = 11702,
  [SMALL_STATE(390)] = 11707,
  [SMALL_STATE(391)] = 11711,
  [SMALL_STATE(392)] = 11715,
  [SMALL_STATE(393)] = 11719,
  [SMALL_STATE(394)] = 11723,
  [SMALL_STATE(395)] = 11727,
  [SMALL_STATE(396)] = 11731,
  [SMALL_STATE(397)] = 11735,
  [SMALL_STATE(398)] = 11739,
  [SMALL_STATE(399)] = 11743,
  [SMALL_STATE(400)] = 11747,
  [SMALL_STATE(401)] = 11751,
  [SMALL_STATE(402)] = 11755,
  [SMALL_STATE(403)] = 11759,
  [SMALL_STATE(404)] = 11763,
  [SMALL_STATE(405)] = 11767,
  [SMALL_STATE(406)] = 11771,
  [SMALL_STATE(407)] = 11775,
  [SMALL_STATE(408)] = 11779,
  [SMALL_STATE(409)] = 11783,
  [SMALL_STATE(410)] = 11787,
  [SMALL_STATE(411)] = 11791,
  [SMALL_STATE(412)] = 11795,
  [SMALL_STATE(413)] = 11799,
  [SMALL_STATE(414)] = 11803,
  [SMALL_STATE(415)] = 11807,
  [SMALL_STATE(416)] = 11811,
  [SMALL_STATE(417)] = 11815,
  [SMALL_STATE(418)] = 11819,
  [SMALL_STATE(419)] = 11823,
  [SMALL_STATE(420)] = 11827,
  [SMALL_STATE(421)] = 11831,
  [SMALL_STATE(422)] = 11835,
  [SMALL_STATE(423)] = 11839,
  [SMALL_STATE(424)] = 11843,
  [SMALL_STATE(425)] = 11847,
  [SMALL_STATE(426)] = 11851,
  [SMALL_STATE(427)] = 11855,
  [SMALL_STATE(428)] = 11859,
  [SMALL_STATE(429)] = 11863,
  [SMALL_STATE(430)] = 11867,
  [SMALL_STATE(431)] = 11871,
  [SMALL_STATE(432)] = 11875,
  [SMALL_STATE(433)] = 11879,
  [SMALL_STATE(434)] = 11883,
  [SMALL_STATE(435)] = 11887,
  [SMALL_STATE(436)] = 11891,
  [SMALL_STATE(437)] = 11895,
  [SMALL_STATE(438)] = 11899,
  [SMALL_STATE(439)] = 11903,
  [SMALL_STATE(440)] = 11907,
  [SMALL_STATE(441)] = 11911,
  [SMALL_STATE(442)] = 11915,
  [SMALL_STATE(443)] = 11919,
  [SMALL_STATE(444)] = 11923,
  [SMALL_STATE(445)] = 11927,
  [SMALL_STATE(446)] = 11931,
  [SMALL_STATE(447)] = 11935,
  [SMALL_STATE(448)] = 11939,
  [SMALL_STATE(449)] = 11943,
  [SMALL_STATE(450)] = 11947,
  [SMALL_STATE(451)] = 11951,
  [SMALL_STATE(452)] = 11955,
  [SMALL_STATE(453)] = 11959,
  [SMALL_STATE(454)] = 11963,
  [SMALL_STATE(455)] = 11967,
  [SMALL_STATE(456)] = 11971,
  [SMALL_STATE(457)] = 11975,
  [SMALL_STATE(458)] = 11979,
  [SMALL_STATE(459)] = 11983,
  [SMALL_STATE(460)] = 11987,
  [SMALL_STATE(461)] = 11991,
  [SMALL_STATE(462)] = 11995,
  [SMALL_STATE(463)] = 11999,
  [SMALL_STATE(464)] = 12003,
  [SMALL_STATE(465)] = 12007,
  [SMALL_STATE(466)] = 12011,
  [SMALL_STATE(467)] = 12015,
  [SMALL_STATE(468)] = 12019,
  [SMALL_STATE(469)] = 12023,
  [SMALL_STATE(470)] = 12027,
  [SMALL_STATE(471)] = 12031,
  [SMALL_STATE(472)] = 12035,
  [SMALL_STATE(473)] = 12039,
  [SMALL_STATE(474)] = 12043,
  [SMALL_STATE(475)] = 12047,
  [SMALL_STATE(476)] = 12051,
  [SMALL_STATE(477)] = 12055,
  [SMALL_STATE(478)] = 12059,
  [SMALL_STATE(479)] = 12063,
  [SMALL_STATE(480)] = 12067,
  [SMALL_STATE(481)] = 12071,
  [SMALL_STATE(482)] = 12075,
  [SMALL_STATE(483)] = 12079,
  [SMALL_STATE(484)] = 12083,
  [SMALL_STATE(485)] = 12087,
  [SMALL_STATE(486)] = 12091,
  [SMALL_STATE(487)] = 12095,
  [SMALL_STATE(488)] = 12099,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 3, .production_id = 14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 3, .production_id = 14),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spel_name, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 2, .production_id = 10),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 2, .production_id = 10),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spel_name, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 3, .production_id = 10),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 3, .production_id = 10),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_object_literal, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_object_literal, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 15),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 15),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_object_literal, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_object_literal, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 3, .production_id = 7),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 6),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2), SHIFT_REPEAT(55),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_spel_expression, 3, .production_id = 6),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_spel_expression, 3, .production_id = 6),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_spel_expression, 2, .production_id = 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_spel_expression, 2, .production_id = 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 4, .production_id = 10),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 4, .production_id = 10),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_literal, 2, .production_id = 5),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_literal, 2, .production_id = 5),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_variable, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_variable, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 4, .production_id = 14),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 4, .production_id = 14),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 6, .production_id = 20),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 6, .production_id = 20),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_string_literal, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_string_literal, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_literal, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_literal, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 5, .production_id = 19),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 5, .production_id = 19),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_string_literal, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_string_literal, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(455),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(83),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_creation, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_creation, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fragment_std_expression, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 3, .production_id = 8),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_creation_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_creation_repeat1, 2),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_creation_repeat1, 2), SHIFT_REPEAT(310),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_operator, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_operator, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_content_repeat1, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_args, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_args, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_args, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_args, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_th_assignation_sequence_repeat1, 4, .production_id = 22),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_args, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_args, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_map_repeat1, 4, .production_id = 19),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_parameter_assignement, 3, .production_id = 17),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_call_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment_th_std_expression, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_th_std_expression, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_value, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_th_std_expression, 3, .production_id = 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_th_std_expression, 3, .production_id = 4),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment_th_std_expression, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_th_std_expression, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_creation_repeat1, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_creation_repeat1, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_th_std_expression, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_th_std_expression, 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_th_std_expression, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_th_std_expression, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_th_std_expression, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_th_std_expression, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varselect_th_std_expression, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varselect_th_std_expression, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_th_std_expression, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_th_std_expression, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varselect_th_std_expression, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varselect_th_std_expression, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_th_std_expression, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_th_std_expression, 2),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 5, .production_id = 10),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 5, .production_id = 10),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_access, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_access, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 5, .production_id = 14),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 5, .production_id = 14),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spel_literal, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spel_literal, 1),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_variable, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_variable, 3),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_literal, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_literal, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_literal, 3, .production_id = 5),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_literal, 3, .production_id = 5),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_assignement_expression, 3, .production_id = 11),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_assignement_expression, 3, .production_id = 11),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_creation, 4),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_creation, 4),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 7, .production_id = 20),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 7, .production_id = 20),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_content, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_content, 4),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_parenthesized_expression, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_parenthesized_expression, 3),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_creation_expression, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_creation_expression, 2),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_object_literal, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_object_literal, 3),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_content, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_content, 3),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5, .production_id = 23),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, .production_id = 23),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_string_literal, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_string_literal, 4),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 4),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 4),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 6, .production_id = 19),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 6, .production_id = 19),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 5),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 5),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_content, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_content, 2),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(427),
  [684] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(296),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(467),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(175),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(468),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(314),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(451),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(176),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divide, 1),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divide, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substract, 1),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substract, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_than, 1),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lesser_than, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply, 1),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 1),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2),
  [765] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(194),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(194),
  [771] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(232),
  [774] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(292),
  [777] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(10),
  [780] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(9),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_new, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(168),
  [820] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(261),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2), SHIFT_REPEAT(218),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(169),
  [843] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(276),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 3),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat1, 2),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat1, 2), SHIFT_REPEAT(439),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat1, 2), SHIFT_REPEAT(370),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 2),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 6, .production_id = 1),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_th_attribute, 6, .production_id = 1),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [996] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(280),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 4),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [1017] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 4, .production_id = 12),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 4, .production_id = 8),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1055] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_th_fragment_declaration_repeat1, 2), SHIFT_REPEAT(416),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_th_fragment_declaration_repeat1, 2),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_content_repeat1, 2), SHIFT_REPEAT(29),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 1),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 5, .production_id = 12),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_th_assignation_sequence_repeat1, 2, .production_id = 16),
  [1111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_th_assignation_sequence_repeat1, 2, .production_id = 16), SHIFT_REPEAT(355),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat2, 2), SHIFT_REPEAT(302),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat2, 2),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_call_repeat1, 2), SHIFT_REPEAT(58),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_map_repeat1, 2, .production_id = 21), SHIFT_REPEAT(25),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_map_repeat1, 2, .production_id = 21),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterized_url_fragment, 3),
  [1143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_adress_repeat1, 2), SHIFT_REPEAT(289),
  [1146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spel_method_args_repeat1, 2), SHIFT_REPEAT(186),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spel_method_args_repeat1, 2),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fragment_std_expression, 3),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 4),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_adress, 2),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_parameter, 1),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 1, .production_id = 3),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 3),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 5),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_adress, 1),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_element, 1),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 3),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 3, .production_id = 9),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_each_value, 5),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 8),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_fragment_declaration, 3),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_each_value, 3),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iterStat, 1),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 7),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_fragment_declaration, 4),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 6),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_adress_repeat1, 2),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 5, .production_id = 18),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 5),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_generic, 1),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_type, 1),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integral_type, 1),
  [1345] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 4, .production_id = 13),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remove_none, 1),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_none, 1),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_fragment_declaration, 5),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__start_tag_name = 0,
  ts_external_token__script_start_tag_name = 1,
  ts_external_token__style_start_tag_name = 2,
  ts_external_token__end_tag_name = 3,
  ts_external_token_erroneous_end_tag_name = 4,
  ts_external_token_SLASH_GT = 5,
  ts_external_token__implicit_end_tag = 6,
  ts_external_token_raw_text = 7,
  ts_external_token_comment = 8,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
  },
  [5] = {
    [ts_external_token_raw_text] = true,
  },
  [6] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
  },
  [7] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
  },
  [8] = {
    [ts_external_token__end_tag_name] = true,
  },
  [9] = {
    [ts_external_token_erroneous_end_tag_name] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_thymeleaf_external_scanner_create(void);
void tree_sitter_thymeleaf_external_scanner_destroy(void *);
bool tree_sitter_thymeleaf_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_thymeleaf_external_scanner_serialize(void *, char *);
void tree_sitter_thymeleaf_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_thymeleaf(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_thymeleaf_external_scanner_create,
      tree_sitter_thymeleaf_external_scanner_destroy,
      tree_sitter_thymeleaf_external_scanner_scan,
      tree_sitter_thymeleaf_external_scanner_serialize,
      tree_sitter_thymeleaf_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
