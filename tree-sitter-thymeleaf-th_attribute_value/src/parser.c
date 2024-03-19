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
#define STATE_COUNT 497
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 236
#define ALIAS_COUNT 0
#define TOKEN_COUNT 124
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 25

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
  sym_spel_matches = 111,
  sym_exp = 112,
  anon_sym_T_LPAREN = 113,
  aux_sym_spel_object_literal_token1 = 114,
  aux_sym_spel_object_literal_token2 = 115,
  sym__start_tag_name = 116,
  sym__script_start_tag_name = 117,
  sym__style_start_tag_name = 118,
  sym__end_tag_name = 119,
  sym_erroneous_end_tag_name = 120,
  sym__implicit_end_tag = 121,
  sym_raw_text = 122,
  sym_comment = 123,
  sym_document = 124,
  sym_doctype = 125,
  sym__node = 126,
  sym_element = 127,
  sym_script_element = 128,
  sym_style_element = 129,
  sym_start_tag = 130,
  sym__attributes = 131,
  sym_th_attribute_value = 132,
  sym_script_start_tag = 133,
  sym_style_start_tag = 134,
  sym_self_closing_tag = 135,
  sym_end_tag = 136,
  sym_erroneous_end_tag = 137,
  sym_th_attribute = 138,
  sym_attribute = 139,
  sym_attribute_name = 140,
  sym__th_inline_value = 141,
  sym_th_each_value = 142,
  sym_iterStat = 143,
  sym_each_element = 144,
  sym__th_remove_value = 145,
  sym_remove_none = 146,
  sym_inline_text = 147,
  sym_inline_none = 148,
  sym_th_fragment_declaration = 149,
  sym_th_assignation_sequence = 150,
  sym__th_generic = 151,
  sym__th_fragments_insert = 152,
  sym__th_spel_only = 153,
  sym__th_assignation_sequence = 154,
  sym_th_generic = 155,
  sym_quoted_attribute_value = 156,
  sym__literal = 157,
  sym_number_literal = 158,
  sym_integer_literal = 159,
  sym_float_literal = 160,
  sym_double_literal = 161,
  sym_token_literal = 162,
  sym_string_literal = 163,
  sym_interpolated_string_literal = 164,
  sym__interpreted_string_literal = 165,
  sym_greater_than = 166,
  sym_lesser_than = 167,
  sym_add = 168,
  sym_substract = 169,
  sym_multiply = 170,
  sym_divide = 171,
  sym__th_std_expression = 172,
  sym_fragment_th_std_expression = 173,
  sym_url_th_std_expression = 174,
  sym_message_th_std_expression = 175,
  sym_varselect_th_std_expression = 176,
  sym_spel_th_std_expression = 177,
  sym__url_std_expression = 178,
  sym__fragment_std_expression = 179,
  sym_fragment_call = 180,
  sym_url_parameter_assignement = 181,
  sym_url_parameter = 182,
  sym_parameterized_url_fragment = 183,
  sym_message_name = 184,
  sym__message_std_expression = 185,
  sym_ternary_th_std_expression = 186,
  sym_unary_th_std_expression = 187,
  sym_parenthesized_th_std_expression = 188,
  sym_binary_th_std_expression = 189,
  sym__spel_std_expression = 190,
  sym__type = 191,
  sym_floating_point_type = 192,
  sym_integral_type = 193,
  sym_array_creation = 194,
  sym_array_content = 195,
  sym_spel_parenthesized_expression = 196,
  sym_unary_spel_expression = 197,
  sym__spel_primary_expression = 198,
  sym__spel_literal = 199,
  sym_spel_string_literal = 200,
  sym_inline_list = 201,
  sym_inline_map = 202,
  sym_object_creation_expression = 203,
  sym_spel_assignement_expression = 204,
  sym_spel_new = 205,
  sym_binary_spel_expression = 206,
  sym_range = 207,
  sym_identifier = 208,
  sym_type = 209,
  sym__type_adress = 210,
  sym_spel_variable = 211,
  sym__spel_post_accessor = 212,
  sym_spel_object_literal = 213,
  sym_null_operator = 214,
  sym_spel_property_access = 215,
  sym_spel_method_access = 216,
  sym_spel_method_literal = 217,
  sym__spel_name = 218,
  sym_spel_method_args = 219,
  aux_sym_document_repeat1 = 220,
  aux_sym_start_tag_repeat1 = 221,
  aux_sym_th_fragment_declaration_repeat1 = 222,
  aux_sym_th_assignation_sequence_repeat1 = 223,
  aux_sym_token_literal_repeat1 = 224,
  aux_sym_interpolated_string_literal_repeat1 = 225,
  aux_sym__interpreted_string_literal_repeat1 = 226,
  aux_sym__url_std_expression_repeat1 = 227,
  aux_sym__url_std_expression_repeat2 = 228,
  aux_sym_fragment_call_repeat1 = 229,
  aux_sym_array_creation_repeat1 = 230,
  aux_sym_array_content_repeat1 = 231,
  aux_sym_inline_map_repeat1 = 232,
  aux_sym__type_adress_repeat1 = 233,
  aux_sym_spel_object_literal_repeat1 = 234,
  aux_sym_spel_method_args_repeat1 = 235,
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
  [sym_spel_matches] = "spel_matches",
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
  [sym_identifier] = "identifier",
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
  [sym_spel_matches] = sym_spel_matches,
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
  [sym_identifier] = sym_identifier,
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
  [sym_spel_matches] = {
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
  [sym_identifier] = {
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
  [12] = {.index = 21, .length = 4},
  [13] = {.index = 25, .length = 2},
  [14] = {.index = 27, .length = 1},
  [15] = {.index = 28, .length = 3},
  [16] = {.index = 31, .length = 2},
  [17] = {.index = 33, .length = 2},
  [18] = {.index = 35, .length = 5},
  [19] = {.index = 40, .length = 2},
  [20] = {.index = 42, .length = 2},
  [21] = {.index = 44, .length = 4},
  [22] = {.index = 48, .length = 4},
  [23] = {.index = 52, .length = 1},
  [24] = {.index = 53, .length = 2},
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
    {field_value, 3, .inherited = true},
  [21] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_message, 0},
  [25] =
    {field_name, 1},
    {field_name, 2},
  [27] =
    {field_name, 2},
  [28] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [31] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [33] =
    {field_param, 0},
    {field_value, 2},
  [35] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_args, 4},
    {field_message, 0},
  [40] =
    {field_key, 1},
    {field_value, 3},
  [42] =
    {field_name, 2},
    {field_name, 3},
  [44] =
    {field_key, 1},
    {field_key, 4, .inherited = true},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [48] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [52] =
    {field_value, 3},
  [53] =
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
  [5] = 2,
  [6] = 6,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
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
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 34,
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
  [56] = 50,
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
  [113] = 110,
  [114] = 114,
  [115] = 114,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 109,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
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
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 172,
  [174] = 174,
  [175] = 174,
  [176] = 176,
  [177] = 176,
  [178] = 178,
  [179] = 179,
  [180] = 179,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 182,
  [187] = 181,
  [188] = 185,
  [189] = 189,
  [190] = 183,
  [191] = 184,
  [192] = 192,
  [193] = 189,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 30,
  [199] = 11,
  [200] = 18,
  [201] = 12,
  [202] = 24,
  [203] = 203,
  [204] = 31,
  [205] = 129,
  [206] = 134,
  [207] = 127,
  [208] = 126,
  [209] = 139,
  [210] = 148,
  [211] = 125,
  [212] = 145,
  [213] = 213,
  [214] = 35,
  [215] = 215,
  [216] = 33,
  [217] = 46,
  [218] = 218,
  [219] = 37,
  [220] = 218,
  [221] = 215,
  [222] = 54,
  [223] = 51,
  [224] = 213,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 75,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 229,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 64,
  [248] = 248,
  [249] = 246,
  [250] = 245,
  [251] = 231,
  [252] = 230,
  [253] = 235,
  [254] = 237,
  [255] = 236,
  [256] = 240,
  [257] = 242,
  [258] = 243,
  [259] = 248,
  [260] = 241,
  [261] = 234,
  [262] = 262,
  [263] = 262,
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
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 269,
  [282] = 282,
  [283] = 283,
  [284] = 276,
  [285] = 285,
  [286] = 286,
  [287] = 264,
  [288] = 265,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 285,
  [293] = 293,
  [294] = 293,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 279,
  [311] = 311,
  [312] = 280,
  [313] = 289,
  [314] = 267,
  [315] = 315,
  [316] = 297,
  [317] = 317,
  [318] = 309,
  [319] = 306,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 322,
  [324] = 307,
  [325] = 325,
  [326] = 302,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 303,
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
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 352,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 358,
  [364] = 360,
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
  [375] = 365,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 371,
  [383] = 362,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 361,
  [388] = 388,
  [389] = 377,
  [390] = 390,
  [391] = 391,
  [392] = 351,
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
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
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
  [440] = 440,
  [441] = 413,
  [442] = 408,
  [443] = 407,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 437,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 435,
  [455] = 448,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 449,
  [462] = 457,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 431,
  [468] = 460,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 411,
  [476] = 476,
  [477] = 452,
  [478] = 422,
  [479] = 421,
  [480] = 420,
  [481] = 419,
  [482] = 418,
  [483] = 417,
  [484] = 416,
  [485] = 415,
  [486] = 486,
  [487] = 459,
  [488] = 444,
  [489] = 436,
  [490] = 432,
  [491] = 430,
  [492] = 427,
  [493] = 426,
  [494] = 425,
  [495] = 397,
  [496] = 496,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(107);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(105)
      if (lookahead == '!') ADVANCE(365);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '$') ADVANCE(314);
      if (lookahead == '%') ADVANCE(350);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(316);
      if (lookahead == '+') ADVANCE(344);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '[') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == ']') ADVANCE(376);
      if (lookahead == '^') ADVANCE(412);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'b') ADVANCE(431);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'f') ADVANCE(280);
      if (lookahead == 'g') ADVANCE(432);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == '{') ADVANCE(362);
      if (lookahead == '|') ADVANCE(310);
      if (lookahead == '}') ADVANCE(352);
      if (lookahead == '~') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(105)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '&') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(340);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(333);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(332);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(409);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(194);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'q') ADVANCE(334);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 59:
      if (lookahead == 'w') ADVANCE(26);
      END_STATE();
    case 60:
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == 'y') ADVANCE(193);
      END_STATE();
    case 62:
      if (lookahead == '{') ADVANCE(354);
      END_STATE();
    case 63:
      if (lookahead == '{') ADVANCE(356);
      END_STATE();
    case 64:
      if (lookahead == '{') ADVANCE(355);
      END_STATE();
    case 65:
      if (lookahead == '{') ADVANCE(353);
      END_STATE();
    case 66:
      if (lookahead == '{') ADVANCE(351);
      END_STATE();
    case 67:
      if (lookahead == '|') ADVANCE(343);
      END_STATE();
    case 68:
      if (lookahead == '}') ADVANCE(378);
      END_STATE();
    case 69:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(69)
      if (lookahead == '!') ADVANCE(364);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '+') ADVANCE(344);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == 'T') ADVANCE(414);
      if (lookahead == ']') ADVANCE(376);
      if (lookahead == 'f') ADVANCE(415);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead == '{') ADVANCE(362);
      if (lookahead == '}') ADVANCE(352);
      if (lookahead == '~') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 70:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(70)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(350);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '+') ADVANCE(344);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '[') ADVANCE(375);
      if (lookahead == ']') ADVANCE(376);
      if (lookahead == '^') ADVANCE(412);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'b') ADVANCE(431);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'g') ADVANCE(432);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead == 'l') ADVANCE(433);
      if (lookahead == 'm') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == '{') ADVANCE(361);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(352);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 71:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(71)
      if (lookahead == '!') ADVANCE(364);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(344);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '/') ADVANCE(358);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == '|') ADVANCE(310);
      if (lookahead == '}') ADVANCE(352);
      if (lookahead == '~') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 72:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(72)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '%') ADVANCE(350);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '+') ADVANCE(344);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == ']') ADVANCE(376);
      if (lookahead == '^') ADVANCE(412);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(280);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'j') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(352);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(72)
      END_STATE();
    case 73:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(73)
      if (lookahead == '!') ADVANCE(364);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(344);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == '|') ADVANCE(310);
      if (lookahead == '~') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 74:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(74)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '%') ADVANCE(350);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '+') ADVANCE(344);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'g') ADVANCE(288);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(352);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(74)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 75:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(75)
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead == 'w') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(75)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 76:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(76)
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == 'f') ADVANCE(415);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead == 't') ADVANCE(422);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 77:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(319);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '$') ADVANCE(314);
      if (lookahead == '*') ADVANCE(316);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '|') ADVANCE(310);
      if (lookahead == '~') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0) ADVANCE(320);
      END_STATE();
    case 78:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(78)
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '[') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 79:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(79)
      if (lookahead == 'b') ADVANCE(400);
      if (lookahead == 'c') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(395);
      if (lookahead == 'f') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == 's') ADVANCE(388);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(79)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 80:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(80)
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead == 't') ADVANCE(152);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(80)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(187);
      END_STATE();
    case 81:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(81)
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == '{') ADVANCE(361);
      if (lookahead == '}') ADVANCE(352);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(81)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 82:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(317);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 83:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(83)
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '}') ADVANCE(352);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 84:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(84)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(84)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 85:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(85)
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(220);
      END_STATE();
    case 86:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(86)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(86)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 87:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(87)
      if (lookahead == '"') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(87)
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 88:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(264);
      if (lookahead == '"') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 89:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(201);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(202);
      END_STATE();
    case 90:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 91:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(203);
      if (lookahead == ')') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(204);
      END_STATE();
    case 92:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(92)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(92)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 93:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(110);
      END_STATE();
    case 94:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(94)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(94)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 98:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 99:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 101:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 102:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(266);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 104:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(321);
      END_STATE();
    case 105:
      if (eof) ADVANCE(107);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(105)
      if (lookahead == '!') ADVANCE(365);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '$') ADVANCE(314);
      if (lookahead == '%') ADVANCE(350);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(316);
      if (lookahead == '+') ADVANCE(344);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '[') ADVANCE(375);
      if (lookahead == ']') ADVANCE(376);
      if (lookahead == '^') ADVANCE(412);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'b') ADVANCE(431);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'f') ADVANCE(280);
      if (lookahead == 'g') ADVANCE(432);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == '{') ADVANCE(362);
      if (lookahead == '|') ADVANCE(310);
      if (lookahead == '}') ADVANCE(352);
      if (lookahead == '~') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(105)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 106:
      if (eof) ADVANCE(107);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(106)
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '<') ADVANCE(114);
      if (lookahead == '>') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(106)
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(326);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(108);
      if (lookahead == '/') ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(108);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '=') ADVANCE(329);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(329);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_th_COLON);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(332);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'j') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'm') ADVANCE(167);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'p') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'v') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'w') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(357);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_iterStat_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_remove_all);
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_remove_body);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_remove_tag);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_remove_abf);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_inline_javascript);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_fragment_name);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(201);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_fragment_name);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_fragment_arg);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_fragment_arg);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_th_insert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_th_replace);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_th_each);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_th_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_th_unless);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_th_switch);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_th_case);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_th_object);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_th_with);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_th_attr);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_th_attrappend);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_th_attrprepend);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_th_remove);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_th_fragment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_th_inline);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(187);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(264);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_true_literal);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_true_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_true_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_false_literal);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_false_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_false_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_null_literal);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_null_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(291);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'd') ADVANCE(339);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(267);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(270);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(302);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(273);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(292);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'q') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(304);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(285);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(284);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(286);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(295);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(296);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(354);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(356);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '{') ADVANCE(355);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(317);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(319);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_not_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_and);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_and_2);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_or);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_or_2);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_TILDE_LBRACE);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_STAR_LBRACE);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_standard_url);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_standard_url_fragment);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_url_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(68);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(333);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_boolean_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_float);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_double);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_short);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_int);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_long);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_char);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_new);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_not);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_LBRACE_COLON_RBRACE);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'a') ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'a') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'a') ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'b') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'e') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'e') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'e') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'g') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'h') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'h') ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'l') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'l') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'l') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'n') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'n') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'n') ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(389);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead == 'y') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'r') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'r') ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'u') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_spel_instanceof);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_spel_between);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_spel_matches);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_T_LPAREN);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == '(') ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'a') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == 'u') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'e') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'e') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'l') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'l') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'l') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'r') ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 's') ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 't') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'u') ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'u') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'w') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'q') ADVANCE(334);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 106, .external_lex_state = 2},
  [2] = {.lex_state = 69},
  [3] = {.lex_state = 69},
  [4] = {.lex_state = 69},
  [5] = {.lex_state = 69},
  [6] = {.lex_state = 69},
  [7] = {.lex_state = 69},
  [8] = {.lex_state = 69},
  [9] = {.lex_state = 69},
  [10] = {.lex_state = 69},
  [11] = {.lex_state = 70},
  [12] = {.lex_state = 70},
  [13] = {.lex_state = 69},
  [14] = {.lex_state = 69},
  [15] = {.lex_state = 69},
  [16] = {.lex_state = 69},
  [17] = {.lex_state = 69},
  [18] = {.lex_state = 70},
  [19] = {.lex_state = 69},
  [20] = {.lex_state = 69},
  [21] = {.lex_state = 69},
  [22] = {.lex_state = 69},
  [23] = {.lex_state = 69},
  [24] = {.lex_state = 70},
  [25] = {.lex_state = 69},
  [26] = {.lex_state = 69},
  [27] = {.lex_state = 69},
  [28] = {.lex_state = 69},
  [29] = {.lex_state = 69},
  [30] = {.lex_state = 70},
  [31] = {.lex_state = 70},
  [32] = {.lex_state = 71},
  [33] = {.lex_state = 70},
  [34] = {.lex_state = 71},
  [35] = {.lex_state = 70},
  [36] = {.lex_state = 71},
  [37] = {.lex_state = 70},
  [38] = {.lex_state = 70},
  [39] = {.lex_state = 70},
  [40] = {.lex_state = 72},
  [41] = {.lex_state = 72},
  [42] = {.lex_state = 72},
  [43] = {.lex_state = 72},
  [44] = {.lex_state = 73},
  [45] = {.lex_state = 70},
  [46] = {.lex_state = 70},
  [47] = {.lex_state = 70},
  [48] = {.lex_state = 70},
  [49] = {.lex_state = 72},
  [50] = {.lex_state = 73},
  [51] = {.lex_state = 70},
  [52] = {.lex_state = 72},
  [53] = {.lex_state = 73},
  [54] = {.lex_state = 70},
  [55] = {.lex_state = 70},
  [56] = {.lex_state = 73},
  [57] = {.lex_state = 72},
  [58] = {.lex_state = 72},
  [59] = {.lex_state = 73},
  [60] = {.lex_state = 72},
  [61] = {.lex_state = 73},
  [62] = {.lex_state = 73},
  [63] = {.lex_state = 70},
  [64] = {.lex_state = 70},
  [65] = {.lex_state = 73},
  [66] = {.lex_state = 70},
  [67] = {.lex_state = 73},
  [68] = {.lex_state = 70},
  [69] = {.lex_state = 70},
  [70] = {.lex_state = 70},
  [71] = {.lex_state = 70},
  [72] = {.lex_state = 72},
  [73] = {.lex_state = 73},
  [74] = {.lex_state = 70},
  [75] = {.lex_state = 70},
  [76] = {.lex_state = 73},
  [77] = {.lex_state = 72},
  [78] = {.lex_state = 70},
  [79] = {.lex_state = 72},
  [80] = {.lex_state = 73},
  [81] = {.lex_state = 70},
  [82] = {.lex_state = 73},
  [83] = {.lex_state = 73},
  [84] = {.lex_state = 73},
  [85] = {.lex_state = 73},
  [86] = {.lex_state = 73},
  [87] = {.lex_state = 73},
  [88] = {.lex_state = 73},
  [89] = {.lex_state = 70},
  [90] = {.lex_state = 70},
  [91] = {.lex_state = 74},
  [92] = {.lex_state = 70},
  [93] = {.lex_state = 70},
  [94] = {.lex_state = 70},
  [95] = {.lex_state = 74},
  [96] = {.lex_state = 70},
  [97] = {.lex_state = 70},
  [98] = {.lex_state = 72},
  [99] = {.lex_state = 70},
  [100] = {.lex_state = 70},
  [101] = {.lex_state = 72},
  [102] = {.lex_state = 70},
  [103] = {.lex_state = 72},
  [104] = {.lex_state = 70},
  [105] = {.lex_state = 72},
  [106] = {.lex_state = 74},
  [107] = {.lex_state = 72},
  [108] = {.lex_state = 72},
  [109] = {.lex_state = 70},
  [110] = {.lex_state = 70},
  [111] = {.lex_state = 72},
  [112] = {.lex_state = 70},
  [113] = {.lex_state = 70},
  [114] = {.lex_state = 70},
  [115] = {.lex_state = 70},
  [116] = {.lex_state = 70},
  [117] = {.lex_state = 72},
  [118] = {.lex_state = 70},
  [119] = {.lex_state = 70},
  [120] = {.lex_state = 70},
  [121] = {.lex_state = 70},
  [122] = {.lex_state = 72},
  [123] = {.lex_state = 70},
  [124] = {.lex_state = 70},
  [125] = {.lex_state = 72},
  [126] = {.lex_state = 72},
  [127] = {.lex_state = 72},
  [128] = {.lex_state = 72},
  [129] = {.lex_state = 72},
  [130] = {.lex_state = 72},
  [131] = {.lex_state = 72},
  [132] = {.lex_state = 70},
  [133] = {.lex_state = 70},
  [134] = {.lex_state = 72},
  [135] = {.lex_state = 72},
  [136] = {.lex_state = 70},
  [137] = {.lex_state = 70},
  [138] = {.lex_state = 70},
  [139] = {.lex_state = 72},
  [140] = {.lex_state = 72},
  [141] = {.lex_state = 70},
  [142] = {.lex_state = 72},
  [143] = {.lex_state = 70},
  [144] = {.lex_state = 72},
  [145] = {.lex_state = 72},
  [146] = {.lex_state = 72},
  [147] = {.lex_state = 70},
  [148] = {.lex_state = 72},
  [149] = {.lex_state = 70},
  [150] = {.lex_state = 70},
  [151] = {.lex_state = 72},
  [152] = {.lex_state = 70},
  [153] = {.lex_state = 70},
  [154] = {.lex_state = 70},
  [155] = {.lex_state = 70},
  [156] = {.lex_state = 70},
  [157] = {.lex_state = 70},
  [158] = {.lex_state = 70},
  [159] = {.lex_state = 70},
  [160] = {.lex_state = 70},
  [161] = {.lex_state = 70},
  [162] = {.lex_state = 70},
  [163] = {.lex_state = 70},
  [164] = {.lex_state = 70},
  [165] = {.lex_state = 70},
  [166] = {.lex_state = 70},
  [167] = {.lex_state = 70},
  [168] = {.lex_state = 70},
  [169] = {.lex_state = 70},
  [170] = {.lex_state = 70},
  [171] = {.lex_state = 70},
  [172] = {.lex_state = 75},
  [173] = {.lex_state = 75},
  [174] = {.lex_state = 106, .external_lex_state = 3},
  [175] = {.lex_state = 106, .external_lex_state = 3},
  [176] = {.lex_state = 106, .external_lex_state = 3},
  [177] = {.lex_state = 106, .external_lex_state = 3},
  [178] = {.lex_state = 106, .external_lex_state = 2},
  [179] = {.lex_state = 106, .external_lex_state = 2},
  [180] = {.lex_state = 106, .external_lex_state = 3},
  [181] = {.lex_state = 73},
  [182] = {.lex_state = 73},
  [183] = {.lex_state = 73},
  [184] = {.lex_state = 73},
  [185] = {.lex_state = 73},
  [186] = {.lex_state = 69},
  [187] = {.lex_state = 69},
  [188] = {.lex_state = 69},
  [189] = {.lex_state = 69},
  [190] = {.lex_state = 69},
  [191] = {.lex_state = 69},
  [192] = {.lex_state = 76},
  [193] = {.lex_state = 73},
  [194] = {.lex_state = 76},
  [195] = {.lex_state = 77},
  [196] = {.lex_state = 77},
  [197] = {.lex_state = 77},
  [198] = {.lex_state = 78},
  [199] = {.lex_state = 78},
  [200] = {.lex_state = 78},
  [201] = {.lex_state = 78},
  [202] = {.lex_state = 78},
  [203] = {.lex_state = 79},
  [204] = {.lex_state = 78},
  [205] = {.lex_state = 77},
  [206] = {.lex_state = 77},
  [207] = {.lex_state = 77},
  [208] = {.lex_state = 77},
  [209] = {.lex_state = 77},
  [210] = {.lex_state = 77},
  [211] = {.lex_state = 77},
  [212] = {.lex_state = 77},
  [213] = {.lex_state = 80, .external_lex_state = 4},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 80, .external_lex_state = 4},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 80, .external_lex_state = 4},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 80, .external_lex_state = 4},
  [221] = {.lex_state = 80, .external_lex_state = 4},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 78},
  [224] = {.lex_state = 80},
  [225] = {.lex_state = 80},
  [226] = {.lex_state = 80},
  [227] = {.lex_state = 80},
  [228] = {.lex_state = 80},
  [229] = {.lex_state = 106, .external_lex_state = 3},
  [230] = {.lex_state = 72},
  [231] = {.lex_state = 106, .external_lex_state = 2},
  [232] = {.lex_state = 106, .external_lex_state = 3},
  [233] = {.lex_state = 78},
  [234] = {.lex_state = 106, .external_lex_state = 3},
  [235] = {.lex_state = 106, .external_lex_state = 3},
  [236] = {.lex_state = 81},
  [237] = {.lex_state = 106, .external_lex_state = 2},
  [238] = {.lex_state = 106, .external_lex_state = 2},
  [239] = {.lex_state = 106, .external_lex_state = 3},
  [240] = {.lex_state = 106, .external_lex_state = 2},
  [241] = {.lex_state = 106, .external_lex_state = 2},
  [242] = {.lex_state = 106, .external_lex_state = 2},
  [243] = {.lex_state = 106, .external_lex_state = 2},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 106, .external_lex_state = 2},
  [246] = {.lex_state = 106, .external_lex_state = 2},
  [247] = {.lex_state = 78},
  [248] = {.lex_state = 106, .external_lex_state = 2},
  [249] = {.lex_state = 106, .external_lex_state = 3},
  [250] = {.lex_state = 106, .external_lex_state = 3},
  [251] = {.lex_state = 106, .external_lex_state = 3},
  [252] = {.lex_state = 72},
  [253] = {.lex_state = 106, .external_lex_state = 2},
  [254] = {.lex_state = 106, .external_lex_state = 3},
  [255] = {.lex_state = 81},
  [256] = {.lex_state = 106, .external_lex_state = 3},
  [257] = {.lex_state = 106, .external_lex_state = 3},
  [258] = {.lex_state = 106, .external_lex_state = 3},
  [259] = {.lex_state = 106, .external_lex_state = 3},
  [260] = {.lex_state = 106, .external_lex_state = 3},
  [261] = {.lex_state = 106, .external_lex_state = 2},
  [262] = {.lex_state = 72},
  [263] = {.lex_state = 72},
  [264] = {.lex_state = 80, .external_lex_state = 4},
  [265] = {.lex_state = 80, .external_lex_state = 4},
  [266] = {.lex_state = 81},
  [267] = {.lex_state = 80, .external_lex_state = 4},
  [268] = {.lex_state = 82},
  [269] = {.lex_state = 82},
  [270] = {.lex_state = 82},
  [271] = {.lex_state = 81},
  [272] = {.lex_state = 81},
  [273] = {.lex_state = 83},
  [274] = {.lex_state = 83},
  [275] = {.lex_state = 81},
  [276] = {.lex_state = 82},
  [277] = {.lex_state = 84},
  [278] = {.lex_state = 81},
  [279] = {.lex_state = 80, .external_lex_state = 4},
  [280] = {.lex_state = 80, .external_lex_state = 4},
  [281] = {.lex_state = 82},
  [282] = {.lex_state = 81},
  [283] = {.lex_state = 83},
  [284] = {.lex_state = 82},
  [285] = {.lex_state = 83},
  [286] = {.lex_state = 82},
  [287] = {.lex_state = 80},
  [288] = {.lex_state = 80},
  [289] = {.lex_state = 80, .external_lex_state = 4},
  [290] = {.lex_state = 83},
  [291] = {.lex_state = 81},
  [292] = {.lex_state = 83},
  [293] = {.lex_state = 85},
  [294] = {.lex_state = 85},
  [295] = {.lex_state = 84},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 84},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 83},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0, .external_lex_state = 5},
  [303] = {.lex_state = 0, .external_lex_state = 5},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 86},
  [307] = {.lex_state = 87},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0, .external_lex_state = 6},
  [310] = {.lex_state = 80},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 80},
  [313] = {.lex_state = 80},
  [314] = {.lex_state = 80},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 84},
  [317] = {.lex_state = 87},
  [318] = {.lex_state = 0, .external_lex_state = 6},
  [319] = {.lex_state = 86},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 84},
  [323] = {.lex_state = 84},
  [324] = {.lex_state = 87},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0, .external_lex_state = 5},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 69},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 69},
  [331] = {.lex_state = 69},
  [332] = {.lex_state = 87},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0, .external_lex_state = 5},
  [341] = {.lex_state = 69},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 69},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 84},
  [351] = {.lex_state = 88},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0, .external_lex_state = 7},
  [361] = {.lex_state = 89},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0, .external_lex_state = 7},
  [365] = {.lex_state = 84},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 87},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0, .external_lex_state = 5},
  [373] = {.lex_state = 83},
  [374] = {.lex_state = 0, .external_lex_state = 5},
  [375] = {.lex_state = 84},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 90},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 91},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 86},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 81},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 89},
  [388] = {.lex_state = 69},
  [389] = {.lex_state = 90},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 88},
  [393] = {.lex_state = 0, .external_lex_state = 5},
  [394] = {.lex_state = 0, .external_lex_state = 5},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 69},
  [400] = {.lex_state = 92},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
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
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 106},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 84},
  [435] = {.lex_state = 106},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 106},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 83},
  [447] = {.lex_state = 106},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 69},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 72},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 106},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0, .external_lex_state = 8},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0, .external_lex_state = 9},
  [460] = {.lex_state = 93},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0, .external_lex_state = 8},
  [463] = {.lex_state = 91},
  [464] = {.lex_state = 94},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 106},
  [468] = {.lex_state = 93},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 69},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 72},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0, .external_lex_state = 9},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
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
    [sym_spel_matches] = ACTIONS(1),
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
    [sym_document] = STATE(476),
    [sym_doctype] = STATE(178),
    [sym__node] = STATE(178),
    [sym_element] = STATE(178),
    [sym_script_element] = STATE(178),
    [sym_style_element] = STATE(178),
    [sym_start_tag] = STATE(177),
    [sym_script_start_tag] = STATE(340),
    [sym_style_start_tag] = STATE(326),
    [sym_self_closing_tag] = STATE(261),
    [sym_erroneous_end_tag] = STATE(178),
    [aux_sym_document_repeat1] = STATE(178),
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
  [0] = 18,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(17), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(114), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [77] = 18,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(39), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(97), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [154] = 18,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(43), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(110), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [231] = 18,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(47), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(115), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [308] = 18,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(51), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(89), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [385] = 18,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(55), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(113), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [462] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(59), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(71), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [536] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(61), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(66), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [610] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(63), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(119), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [684] = 10,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      aux_sym_spel_object_literal_token2,
    STATE(51), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(65), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(149), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(67), 26,
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
      sym_spel_matches,
      sym_exp,
  [744] = 10,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      aux_sym_spel_object_literal_token2,
    STATE(51), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(79), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(141), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(81), 26,
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
      sym_spel_matches,
      sym_exp,
  [804] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(83), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(120), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [878] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(85), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(74), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [952] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(87), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(109), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1026] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(89), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(70), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1100] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(91), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(104), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1174] = 10,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      aux_sym_spel_object_literal_token2,
    STATE(12), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(93), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(133), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(95), 26,
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
      sym_spel_matches,
      sym_exp,
  [1234] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(101), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(69), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1308] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(103), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(68), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1382] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(105), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(94), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1456] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(107), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1530] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(109), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(63), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1604] = 10,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_spel_object_literal_token2,
    STATE(11), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(111), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(132), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(113), 26,
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
      sym_spel_matches,
      sym_exp,
  [1664] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(117), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(78), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1738] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(119), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(81), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1812] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(121), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(112), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1886] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(123), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(116), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1960] = 17,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    ACTIONS(37), 1,
      aux_sym_spel_object_literal_token1,
    STATE(47), 1,
      sym_type,
    STATE(143), 1,
      sym_spel_variable,
    STATE(363), 1,
      sym__spel_name,
    STATE(464), 1,
      sym_spel_new,
    ACTIONS(125), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(123), 18,
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
      sym_identifier,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [2034] = 10,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      aux_sym_spel_object_literal_token2,
    STATE(51), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(127), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(162), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(129), 26,
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
      sym_spel_matches,
      sym_exp,
  [2093] = 10,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_spel_object_literal_token2,
    STATE(30), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(157), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(133), 26,
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
      sym_spel_matches,
      sym_exp,
  [2152] = 20,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      aux_sym_number_literal_token1,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(167), 1,
      sym_standard_url,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    STATE(451), 1,
      sym__fragment_std_expression,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(141), 3,
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
  [2230] = 7,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(169), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(150), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(171), 26,
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
      sym_spel_matches,
      sym_exp,
  [2281] = 19,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      aux_sym_number_literal_token1,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(167), 1,
      sym_standard_url,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    STATE(407), 1,
      sym__fragment_std_expression,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(141), 3,
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
  [2356] = 7,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(173), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(136), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(175), 26,
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
      sym_spel_matches,
      sym_exp,
  [2407] = 19,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      aux_sym_number_literal_token1,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(167), 1,
      sym_standard_url,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    STATE(443), 1,
      sym__fragment_std_expression,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(141), 3,
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
  [2482] = 7,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(177), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(138), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(179), 26,
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
      sym_spel_matches,
      sym_exp,
  [2533] = 7,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(181), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(152), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(183), 26,
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
      sym_spel_matches,
      sym_exp,
  [2583] = 7,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(160), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(187), 26,
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
      sym_spel_matches,
      sym_exp,
  [2633] = 15,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(195), 1,
      anon_sym_COLON,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    ACTIONS(203), 2,
      sym_and,
      sym_and_2,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(201), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(193), 9,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [2699] = 14,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(195), 1,
      anon_sym_COLON,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(201), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(193), 11,
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
  [2763] = 13,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(195), 1,
      anon_sym_COLON,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(193), 15,
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
  [2825] = 10,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(195), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(193), 21,
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
  [2881] = 18,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    STATE(385), 1,
      sym_fragment_call,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(213), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(107), 15,
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
  [2953] = 7,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(217), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(158), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(219), 26,
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
      sym_spel_matches,
      sym_exp,
  [3003] = 7,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(221), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(154), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(223), 26,
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
      sym_spel_matches,
      sym_exp,
  [3053] = 7,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(225), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(164), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(227), 26,
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
      sym_spel_matches,
      sym_exp,
  [3103] = 7,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(229), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(166), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(231), 26,
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
      sym_spel_matches,
      sym_exp,
  [3153] = 17,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(203), 2,
      sym_and,
      sym_and_2,
    ACTIONS(237), 2,
      sym_or,
      sym_or_2,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(201), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(233), 6,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [3223] = 18,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    STATE(407), 1,
      sym_th_attribute_value,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(241), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(151), 15,
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
  [3295] = 4,
    ACTIONS(247), 1,
      aux_sym_spel_object_literal_token2,
    STATE(51), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(243), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(245), 30,
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
      sym_spel_matches,
      sym_exp,
  [3339] = 5,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(195), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(193), 26,
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
  [3385] = 18,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(252), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(105), 15,
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
  [3457] = 7,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(254), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(159), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(256), 26,
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
      sym_spel_matches,
      sym_exp,
  [3507] = 7,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_null_operator,
    ACTIONS(258), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(165), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(260), 26,
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
      sym_spel_matches,
      sym_exp,
  [3557] = 18,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    STATE(443), 1,
      sym_th_attribute_value,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(241), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(151), 15,
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
  [3629] = 17,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(264), 1,
      anon_sym_COLON,
    ACTIONS(203), 2,
      sym_and,
      sym_and_2,
    ACTIONS(237), 2,
      sym_or,
      sym_or_2,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(201), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(262), 6,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [3699] = 5,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(266), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(268), 26,
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
  [3745] = 18,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(272), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(98), 15,
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
  [3817] = 8,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(195), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(193), 23,
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
  [3869] = 17,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(274), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(58), 15,
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
  [3938] = 17,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(276), 3,
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
  [4007] = 9,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(278), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(280), 22,
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
  [4060] = 4,
    ACTIONS(292), 1,
      aux_sym_spel_object_literal_token2,
    STATE(75), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(290), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(97), 29,
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
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_spel_matches,
      sym_exp,
  [4103] = 17,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(294), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(40), 15,
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
  [4172] = 18,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(280), 7,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [4243] = 17,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(316), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(111), 15,
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
  [4312] = 17,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(280), 9,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [4381] = 16,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(280), 13,
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
  [4448] = 14,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(278), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(280), 17,
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
  [4511] = 8,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(278), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(280), 23,
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
  [4562] = 2,
    ACTIONS(318), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(320), 31,
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
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_spel_matches,
      sym_exp,
  [4601] = 17,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(322), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(122), 15,
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
  [4670] = 5,
    ACTIONS(324), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(326), 26,
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
      sym_spel_matches,
      sym_exp,
  [4715] = 4,
    ACTIONS(77), 1,
      aux_sym_spel_object_literal_token2,
    STATE(51), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(328), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(69), 29,
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
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_spel_matches,
      sym_exp,
  [4758] = 17,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(330), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(52), 15,
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
  [4827] = 2,
    ACTIONS(332), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(334), 31,
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
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_spel_matches,
      sym_exp,
  [4866] = 12,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(278), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(280), 19,
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
  [4925] = 2,
    ACTIONS(336), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(338), 31,
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
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_spel_matches,
      sym_exp,
  [4964] = 17,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(340), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(117), 15,
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
  [5033] = 19,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(342), 5,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [5106] = 17,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(346), 3,
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
  [5175] = 17,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(348), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(101), 15,
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
  [5244] = 17,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(350), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(49), 15,
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
  [5313] = 17,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(352), 3,
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
  [5382] = 17,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(354), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(60), 15,
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
  [5451] = 17,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(356), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(130), 15,
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
  [5520] = 17,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(147), 1,
      aux_sym_token_literal_token2,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(159), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(161), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym_number_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(91), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(358), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(57), 15,
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
  [5589] = 22,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_array_content_repeat1,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [5667] = 6,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      aux_sym_array_creation_repeat1,
    STATE(169), 1,
      sym_array_content,
    ACTIONS(366), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 26,
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
      sym_spel_matches,
      sym_exp,
  [5712] = 5,
    ACTIONS(145), 1,
      aux_sym_token_literal_token1,
    ACTIONS(378), 1,
      aux_sym_token_literal_token2,
    STATE(95), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(374), 12,
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
    ACTIONS(376), 17,
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
  [5755] = 2,
    ACTIONS(380), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(382), 29,
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
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_spel_matches,
      sym_exp,
  [5792] = 2,
    ACTIONS(384), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(386), 29,
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
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_spel_matches,
      sym_exp,
  [5829] = 21,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    STATE(346), 1,
      aux_sym_inline_map_repeat1,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [5904] = 5,
    ACTIONS(396), 1,
      aux_sym_token_literal_token1,
    ACTIONS(399), 1,
      aux_sym_token_literal_token2,
    STATE(95), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(392), 12,
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
    ACTIONS(394), 17,
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
  [5947] = 2,
    ACTIONS(402), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(404), 29,
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
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_spel_matches,
      sym_exp,
  [5984] = 21,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      aux_sym_array_content_repeat1,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6059] = 18,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      aux_sym_fragment_call_repeat1,
    ACTIONS(203), 2,
      sym_and,
      sym_and_2,
    ACTIONS(237), 2,
      sym_or,
      sym_or_2,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(201), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [6127] = 19,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6197] = 4,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      aux_sym_array_creation_repeat1,
    ACTIONS(414), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 27,
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
      sym_spel_matches,
      sym_exp,
  [6237] = 18,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(421), 1,
      anon_sym_DQUOTE,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_th_assignation_sequence_repeat1,
    ACTIONS(203), 2,
      sym_and,
      sym_and_2,
    ACTIONS(237), 2,
      sym_or,
      sym_or_2,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(201), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [6305] = 2,
    ACTIONS(425), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(427), 29,
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
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_spel_instanceof,
      sym_spel_between,
      sym_spel_matches,
      sym_exp,
  [6341] = 17,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(431), 1,
      anon_sym_COLON_COLON,
    ACTIONS(203), 2,
      sym_and,
      sym_and_2,
    ACTIONS(237), 2,
      sym_or,
      sym_or_2,
    ACTIONS(429), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(201), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [6407] = 19,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6477] = 18,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_fragment_call_repeat1,
    ACTIONS(203), 2,
      sym_and,
      sym_and_2,
    ACTIONS(237), 2,
      sym_or,
      sym_or_2,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(201), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [6545] = 2,
    ACTIONS(392), 14,
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
    ACTIONS(394), 17,
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
  [6581] = 17,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 2,
      sym_and,
      sym_and_2,
    ACTIONS(237), 2,
      sym_or,
      sym_or_2,
    ACTIONS(437), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(201), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [6647] = 3,
    ACTIONS(445), 1,
      anon_sym_DOT,
    ACTIONS(441), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(443), 26,
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
  [6684] = 19,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(447), 1,
      anon_sym_RBRACK,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6753] = 19,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6822] = 16,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(203), 2,
      sym_and,
      sym_and_2,
    ACTIONS(237), 2,
      sym_or,
      sym_or_2,
    ACTIONS(451), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(201), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [6885] = 19,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6954] = 19,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7023] = 19,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7092] = 19,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7161] = 19,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7230] = 16,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(203), 2,
      sym_and,
      sym_and_2,
    ACTIONS(237), 2,
      sym_or,
      sym_or_2,
    ACTIONS(463), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(201), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [7293] = 2,
    ACTIONS(465), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(467), 28,
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
      sym_spel_matches,
      sym_exp,
  [7328] = 19,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7397] = 19,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7466] = 2,
    ACTIONS(414), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 28,
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
      sym_spel_matches,
      sym_exp,
  [7501] = 16,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(203), 2,
      sym_and,
      sym_and_2,
    ACTIONS(237), 2,
      sym_or,
      sym_or_2,
    ACTIONS(473), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(201), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [7564] = 19,
    ACTIONS(282), 1,
      sym_spel_instanceof,
    ACTIONS(284), 1,
      sym_spel_between,
    ACTIONS(286), 1,
      sym_spel_matches,
    ACTIONS(288), 1,
      sym_exp,
    ACTIONS(296), 1,
      anon_sym_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      anon_sym_PLUS,
    ACTIONS(310), 1,
      anon_sym_DASH,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    ACTIONS(314), 1,
      sym_modulo,
    ACTIONS(475), 1,
      anon_sym_COLON,
    ACTIONS(306), 2,
      sym_and,
      sym_and_2,
    ACTIONS(344), 2,
      sym_or,
      sym_or_2,
    STATE(16), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(23), 2,
      sym_multiply,
      sym_divide,
    STATE(25), 2,
      sym_add,
      sym_substract,
    ACTIONS(302), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(304), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7633] = 3,
    ACTIONS(481), 1,
      anon_sym_DOT,
    ACTIONS(477), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(479), 26,
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
      sym_spel_matches,
      sym_exp,
  [7669] = 2,
    ACTIONS(483), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(485), 26,
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
  [7703] = 2,
    ACTIONS(487), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(489), 26,
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
  [7737] = 2,
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
  [7771] = 3,
    ACTIONS(499), 1,
      anon_sym_f,
    ACTIONS(495), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(497), 26,
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
      sym_spel_matches,
      sym_exp,
  [7807] = 2,
    ACTIONS(501), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(503), 26,
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
  [7841] = 16,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    ACTIONS(203), 2,
      sym_and,
      sym_and_2,
    ACTIONS(237), 2,
      sym_or,
      sym_or_2,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(201), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [7903] = 2,
    ACTIONS(507), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(509), 26,
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
  [7937] = 2,
    ACTIONS(511), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(513), 26,
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
      sym_spel_matches,
      sym_exp,
  [7971] = 2,
    ACTIONS(177), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(179), 26,
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
      sym_spel_matches,
      sym_exp,
  [8005] = 2,
    ACTIONS(515), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(517), 26,
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
  [8039] = 2,
    ACTIONS(519), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(521), 26,
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
  [8073] = 2,
    ACTIONS(523), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(525), 26,
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
      sym_spel_matches,
      sym_exp,
  [8107] = 2,
    ACTIONS(527), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(529), 26,
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
      sym_spel_matches,
      sym_exp,
  [8141] = 2,
    ACTIONS(531), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(533), 26,
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
      sym_spel_matches,
      sym_exp,
  [8175] = 2,
    ACTIONS(535), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(537), 26,
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
  [8209] = 2,
    ACTIONS(539), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(541), 26,
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
  [8243] = 2,
    ACTIONS(543), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(545), 26,
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
      sym_spel_matches,
      sym_exp,
  [8277] = 2,
    ACTIONS(547), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(549), 26,
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
  [8311] = 3,
    ACTIONS(553), 1,
      anon_sym_EQ,
    ACTIONS(551), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(555), 26,
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
      sym_spel_matches,
      sym_exp,
  [8347] = 2,
    ACTIONS(557), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(559), 26,
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
  [8381] = 2,
    ACTIONS(561), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(563), 26,
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
  [8415] = 2,
    ACTIONS(565), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(567), 26,
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
  [8449] = 2,
    ACTIONS(569), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(571), 26,
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
      sym_spel_matches,
      sym_exp,
  [8483] = 2,
    ACTIONS(573), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(575), 26,
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
  [8517] = 2,
    ACTIONS(577), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(579), 26,
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
      sym_spel_matches,
      sym_exp,
  [8551] = 2,
    ACTIONS(581), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(583), 26,
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
      sym_spel_matches,
      sym_exp,
  [8585] = 16,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      sym_modulo,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(585), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 2,
      sym_and,
      sym_and_2,
    ACTIONS(237), 2,
      sym_or,
      sym_or_2,
    STATE(62), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(76), 2,
      sym_multiply,
      sym_divide,
    STATE(86), 2,
      sym_add,
      sym_substract,
    ACTIONS(201), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(199), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [8647] = 2,
    ACTIONS(587), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(589), 26,
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
      sym_spel_matches,
      sym_exp,
  [8680] = 2,
    ACTIONS(591), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(593), 26,
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
      sym_spel_matches,
      sym_exp,
  [8713] = 2,
    ACTIONS(595), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(597), 26,
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
      sym_spel_matches,
      sym_exp,
  [8746] = 2,
    ACTIONS(599), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(601), 26,
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
      sym_spel_matches,
      sym_exp,
  [8779] = 2,
    ACTIONS(603), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(605), 26,
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
      sym_spel_matches,
      sym_exp,
  [8812] = 2,
    ACTIONS(127), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 26,
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
      sym_spel_matches,
      sym_exp,
  [8845] = 2,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 26,
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
      sym_spel_matches,
      sym_exp,
  [8878] = 2,
    ACTIONS(221), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(223), 26,
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
      sym_spel_matches,
      sym_exp,
  [8911] = 2,
    ACTIONS(258), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 26,
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
      sym_spel_matches,
      sym_exp,
  [8944] = 2,
    ACTIONS(607), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(609), 26,
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
      sym_spel_matches,
      sym_exp,
  [8977] = 2,
    ACTIONS(611), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(613), 26,
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
      sym_spel_matches,
      sym_exp,
  [9010] = 2,
    ACTIONS(615), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(617), 26,
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
      sym_spel_matches,
      sym_exp,
  [9043] = 2,
    ACTIONS(619), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(621), 26,
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
      sym_spel_matches,
      sym_exp,
  [9076] = 2,
    ACTIONS(623), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(625), 26,
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
      sym_spel_matches,
      sym_exp,
  [9109] = 2,
    ACTIONS(627), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(629), 26,
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
      sym_spel_matches,
      sym_exp,
  [9142] = 2,
    ACTIONS(278), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(280), 26,
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
      sym_spel_matches,
      sym_exp,
  [9175] = 2,
    ACTIONS(631), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(633), 26,
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
      sym_spel_matches,
      sym_exp,
  [9208] = 2,
    ACTIONS(635), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(637), 26,
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
      sym_spel_matches,
      sym_exp,
  [9241] = 2,
    ACTIONS(639), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(641), 26,
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
      sym_spel_matches,
      sym_exp,
  [9274] = 2,
    ACTIONS(643), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(645), 26,
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
      sym_spel_matches,
      sym_exp,
  [9307] = 13,
    ACTIONS(647), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(651), 1,
      sym_th_each,
    ACTIONS(659), 1,
      sym_th_remove,
    ACTIONS(661), 1,
      sym_th_fragment,
    ACTIONS(663), 1,
      sym_th_inline,
    STATE(397), 1,
      sym__th_assignation_sequence,
    STATE(425), 1,
      sym__th_spel_only,
    STATE(426), 1,
      sym__th_fragments_insert,
    ACTIONS(649), 2,
      sym_th_insert,
      sym_th_replace,
    ACTIONS(655), 2,
      sym_th_object,
      sym_th_with,
    STATE(427), 2,
      sym__th_generic,
      sym_th_generic,
    ACTIONS(657), 3,
      sym_th_attr,
      sym_th_attrappend,
      sym_th_attrprepend,
    ACTIONS(653), 4,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
  [9355] = 13,
    ACTIONS(647), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(667), 1,
      sym_th_each,
    ACTIONS(675), 1,
      sym_th_remove,
    ACTIONS(677), 1,
      sym_th_fragment,
    ACTIONS(679), 1,
      sym_th_inline,
    STATE(493), 1,
      sym__th_fragments_insert,
    STATE(494), 1,
      sym__th_spel_only,
    STATE(495), 1,
      sym__th_assignation_sequence,
    ACTIONS(665), 2,
      sym_th_insert,
      sym_th_replace,
    ACTIONS(671), 2,
      sym_th_object,
      sym_th_with,
    STATE(492), 2,
      sym__th_generic,
      sym_th_generic,
    ACTIONS(673), 3,
      sym_th_attr,
      sym_th_attrappend,
      sym_th_attrprepend,
    ACTIONS(669), 4,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
  [9403] = 11,
    ACTIONS(681), 1,
      anon_sym_LT_BANG,
    ACTIONS(683), 1,
      anon_sym_LT,
    ACTIONS(685), 1,
      anon_sym_LT_SLASH,
    ACTIONS(689), 1,
      sym__implicit_end_tag,
    STATE(176), 1,
      sym_start_tag,
    STATE(234), 1,
      sym_self_closing_tag,
    STATE(243), 1,
      sym_end_tag,
    STATE(302), 1,
      sym_style_start_tag,
    STATE(303), 1,
      sym_script_start_tag,
    ACTIONS(687), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(180), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [9445] = 11,
    ACTIONS(681), 1,
      anon_sym_LT_BANG,
    ACTIONS(683), 1,
      anon_sym_LT,
    ACTIONS(691), 1,
      anon_sym_LT_SLASH,
    ACTIONS(693), 1,
      sym__implicit_end_tag,
    STATE(176), 1,
      sym_start_tag,
    STATE(234), 1,
      sym_self_closing_tag,
    STATE(258), 1,
      sym_end_tag,
    STATE(302), 1,
      sym_style_start_tag,
    STATE(303), 1,
      sym_script_start_tag,
    ACTIONS(687), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(180), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [9487] = 11,
    ACTIONS(681), 1,
      anon_sym_LT_BANG,
    ACTIONS(683), 1,
      anon_sym_LT,
    ACTIONS(691), 1,
      anon_sym_LT_SLASH,
    ACTIONS(697), 1,
      sym__implicit_end_tag,
    STATE(176), 1,
      sym_start_tag,
    STATE(234), 1,
      sym_self_closing_tag,
    STATE(235), 1,
      sym_end_tag,
    STATE(302), 1,
      sym_style_start_tag,
    STATE(303), 1,
      sym_script_start_tag,
    ACTIONS(695), 3,
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
  [9529] = 11,
    ACTIONS(681), 1,
      anon_sym_LT_BANG,
    ACTIONS(683), 1,
      anon_sym_LT,
    ACTIONS(685), 1,
      anon_sym_LT_SLASH,
    ACTIONS(701), 1,
      sym__implicit_end_tag,
    STATE(176), 1,
      sym_start_tag,
    STATE(234), 1,
      sym_self_closing_tag,
    STATE(253), 1,
      sym_end_tag,
    STATE(302), 1,
      sym_style_start_tag,
    STATE(303), 1,
      sym_script_start_tag,
    ACTIONS(699), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(174), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [9571] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LT_SLASH,
    ACTIONS(703), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      sym_start_tag,
    STATE(261), 1,
      sym_self_closing_tag,
    STATE(326), 1,
      sym_style_start_tag,
    STATE(340), 1,
      sym_script_start_tag,
    ACTIONS(705), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(179), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [9610] = 10,
    ACTIONS(707), 1,
      ts_builtin_sym_end,
    ACTIONS(709), 1,
      anon_sym_LT_BANG,
    ACTIONS(712), 1,
      anon_sym_LT,
    ACTIONS(715), 1,
      anon_sym_LT_SLASH,
    STATE(177), 1,
      sym_start_tag,
    STATE(261), 1,
      sym_self_closing_tag,
    STATE(326), 1,
      sym_style_start_tag,
    STATE(340), 1,
      sym_script_start_tag,
    ACTIONS(718), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(179), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [9649] = 10,
    ACTIONS(707), 1,
      sym__implicit_end_tag,
    ACTIONS(721), 1,
      anon_sym_LT_BANG,
    ACTIONS(724), 1,
      anon_sym_LT,
    ACTIONS(727), 1,
      anon_sym_LT_SLASH,
    STATE(176), 1,
      sym_start_tag,
    STATE(234), 1,
      sym_self_closing_tag,
    STATE(302), 1,
      sym_style_start_tag,
    STATE(303), 1,
      sym_script_start_tag,
    ACTIONS(730), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(180), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [9688] = 2,
    ACTIONS(735), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(733), 11,
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
  [9710] = 2,
    ACTIONS(739), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(737), 11,
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
  [9732] = 2,
    ACTIONS(743), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(741), 11,
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
  [9754] = 2,
    ACTIONS(747), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(745), 11,
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
  [9776] = 2,
    ACTIONS(751), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(749), 11,
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
  [9798] = 2,
    ACTIONS(739), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(737), 10,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
      anon_sym_T_LPAREN,
  [9820] = 2,
    ACTIONS(735), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(733), 10,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
      anon_sym_T_LPAREN,
  [9842] = 2,
    ACTIONS(751), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(749), 10,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
      anon_sym_T_LPAREN,
  [9864] = 2,
    ACTIONS(755), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(753), 10,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
      anon_sym_T_LPAREN,
  [9886] = 2,
    ACTIONS(743), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(741), 10,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
      anon_sym_T_LPAREN,
  [9908] = 2,
    ACTIONS(747), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(745), 10,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
      anon_sym_T_LPAREN,
  [9930] = 8,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    ACTIONS(759), 1,
      anon_sym_SQUOTE,
    ACTIONS(763), 1,
      anon_sym_POUND,
    ACTIONS(765), 1,
      aux_sym_spel_object_literal_token1,
    STATE(358), 1,
      sym__spel_name,
    ACTIONS(761), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(296), 8,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_spel_variable,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [9964] = 2,
    ACTIONS(755), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(753), 11,
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
  [9986] = 7,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(759), 1,
      anon_sym_SQUOTE,
    ACTIONS(763), 1,
      anon_sym_POUND,
    ACTIONS(765), 1,
      aux_sym_spel_object_literal_token1,
    STATE(358), 1,
      sym__spel_name,
    ACTIONS(767), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(366), 8,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_spel_variable,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [10017] = 8,
    ACTIONS(769), 1,
      anon_sym_PIPE,
    ACTIONS(774), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(777), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(780), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(783), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(786), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(771), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(195), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [10049] = 8,
    ACTIONS(789), 1,
      anon_sym_PIPE,
    ACTIONS(793), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(795), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(797), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(799), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(801), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(791), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(195), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [10081] = 8,
    ACTIONS(795), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(797), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(799), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(801), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(803), 1,
      anon_sym_PIPE,
    ACTIONS(807), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(805), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(196), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [10113] = 9,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    ACTIONS(813), 1,
      aux_sym_spel_object_literal_token2,
    STATE(223), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(475), 1,
      sym_null_operator,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(162), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10144] = 9,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    ACTIONS(813), 1,
      aux_sym_spel_object_literal_token2,
    STATE(223), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(475), 1,
      sym_null_operator,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(149), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10175] = 9,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    ACTIONS(815), 1,
      aux_sym_spel_object_literal_token2,
    STATE(201), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(475), 1,
      sym_null_operator,
    ACTIONS(95), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(133), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10206] = 9,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    ACTIONS(813), 1,
      aux_sym_spel_object_literal_token2,
    STATE(223), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(475), 1,
      sym_null_operator,
    ACTIONS(81), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(141), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10237] = 9,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    ACTIONS(817), 1,
      aux_sym_spel_object_literal_token2,
    STATE(199), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(475), 1,
      sym_null_operator,
    ACTIONS(113), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(132), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10268] = 5,
    ACTIONS(819), 1,
      sym_boolean_type,
    ACTIONS(825), 1,
      aux_sym_object_creation_expression_token1,
    ACTIONS(821), 2,
      anon_sym_float,
      anon_sym_double,
    STATE(391), 3,
      sym__type,
      sym_floating_point_type,
      sym_integral_type,
    ACTIONS(823), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [10291] = 9,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    ACTIONS(827), 1,
      aux_sym_spel_object_literal_token2,
    STATE(198), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(475), 1,
      sym_null_operator,
    ACTIONS(133), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(157), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10322] = 2,
    ACTIONS(503), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(501), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [10337] = 2,
    ACTIONS(517), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(515), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [10352] = 2,
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
  [10367] = 2,
    ACTIONS(489), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(487), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [10382] = 2,
    ACTIONS(537), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(535), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [10397] = 2,
    ACTIONS(575), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(573), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [10412] = 2,
    ACTIONS(485), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(483), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [10427] = 2,
    ACTIONS(563), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(561), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [10442] = 5,
    ACTIONS(831), 1,
      anon_sym_th_COLON,
    ACTIONS(834), 1,
      aux_sym_attribute_name_token1,
    STATE(265), 1,
      sym_attribute_name,
    ACTIONS(829), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(213), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10462] = 6,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    STATE(475), 1,
      sym_null_operator,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(136), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10484] = 6,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(839), 1,
      anon_sym_SLASH_GT,
    ACTIONS(841), 1,
      anon_sym_th_COLON,
    ACTIONS(843), 1,
      aux_sym_attribute_name_token1,
    STATE(265), 1,
      sym_attribute_name,
    STATE(218), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10506] = 6,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    STATE(475), 1,
      sym_null_operator,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(150), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10528] = 6,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    STATE(475), 1,
      sym_null_operator,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(154), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10550] = 6,
    ACTIONS(841), 1,
      anon_sym_th_COLON,
    ACTIONS(843), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(845), 1,
      anon_sym_GT,
    ACTIONS(847), 1,
      anon_sym_SLASH_GT,
    STATE(265), 1,
      sym_attribute_name,
    STATE(213), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10572] = 6,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    STATE(475), 1,
      sym_null_operator,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(138), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10594] = 6,
    ACTIONS(841), 1,
      anon_sym_th_COLON,
    ACTIONS(843), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(845), 1,
      anon_sym_GT,
    ACTIONS(849), 1,
      anon_sym_SLASH_GT,
    STATE(265), 1,
      sym_attribute_name,
    STATE(213), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10616] = 6,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(841), 1,
      anon_sym_th_COLON,
    ACTIONS(843), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(851), 1,
      anon_sym_SLASH_GT,
    STATE(265), 1,
      sym_attribute_name,
    STATE(220), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10638] = 6,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    STATE(475), 1,
      sym_null_operator,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(159), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10660] = 3,
    ACTIONS(853), 1,
      aux_sym_spel_object_literal_token2,
    STATE(223), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(245), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [10675] = 5,
    ACTIONS(829), 1,
      anon_sym_GT,
    ACTIONS(856), 1,
      anon_sym_th_COLON,
    ACTIONS(859), 1,
      aux_sym_attribute_name_token1,
    STATE(288), 1,
      sym_attribute_name,
    STATE(224), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10694] = 5,
    ACTIONS(862), 1,
      anon_sym_GT,
    ACTIONS(864), 1,
      anon_sym_th_COLON,
    ACTIONS(866), 1,
      aux_sym_attribute_name_token1,
    STATE(288), 1,
      sym_attribute_name,
    STATE(224), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10713] = 5,
    ACTIONS(864), 1,
      anon_sym_th_COLON,
    ACTIONS(866), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(868), 1,
      anon_sym_GT,
    STATE(288), 1,
      sym_attribute_name,
    STATE(224), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10732] = 5,
    ACTIONS(864), 1,
      anon_sym_th_COLON,
    ACTIONS(866), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(870), 1,
      anon_sym_GT,
    STATE(288), 1,
      sym_attribute_name,
    STATE(225), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10751] = 5,
    ACTIONS(864), 1,
      anon_sym_th_COLON,
    ACTIONS(866), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(872), 1,
      anon_sym_GT,
    STATE(288), 1,
      sym_attribute_name,
    STATE(226), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10770] = 2,
    ACTIONS(876), 1,
      anon_sym_LT,
    ACTIONS(874), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10782] = 4,
    ACTIONS(878), 1,
      sym_remove_all,
    ACTIONS(882), 1,
      anon_sym_none,
    STATE(407), 2,
      sym__th_remove_value,
      sym_remove_none,
    ACTIONS(880), 3,
      sym_remove_body,
      sym_remove_tag,
      sym_remove_abf,
  [10798] = 2,
    ACTIONS(886), 1,
      anon_sym_LT,
    ACTIONS(884), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10810] = 2,
    ACTIONS(890), 1,
      anon_sym_LT,
    ACTIONS(888), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10822] = 3,
    ACTIONS(813), 1,
      aux_sym_spel_object_literal_token2,
    STATE(223), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(69), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [10836] = 2,
    ACTIONS(894), 1,
      anon_sym_LT,
    ACTIONS(892), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10848] = 2,
    ACTIONS(898), 1,
      anon_sym_LT,
    ACTIONS(896), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10860] = 7,
    ACTIONS(900), 1,
      anon_sym_SLASH,
    ACTIONS(902), 1,
      anon_sym_RBRACE,
    ACTIONS(904), 1,
      sym_standard_url_fragment,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    STATE(266), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(331), 1,
      sym_parameterized_url_fragment,
    STATE(448), 1,
      sym__url_std_expression,
  [10882] = 2,
    ACTIONS(910), 1,
      anon_sym_LT,
    ACTIONS(908), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10894] = 2,
    ACTIONS(876), 1,
      anon_sym_LT,
    ACTIONS(874), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10906] = 2,
    ACTIONS(914), 1,
      anon_sym_LT,
    ACTIONS(912), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10918] = 2,
    ACTIONS(918), 1,
      anon_sym_LT,
    ACTIONS(916), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10930] = 2,
    ACTIONS(922), 1,
      anon_sym_LT,
    ACTIONS(920), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10942] = 2,
    ACTIONS(926), 1,
      anon_sym_LT,
    ACTIONS(924), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10954] = 2,
    ACTIONS(930), 1,
      anon_sym_LT,
    ACTIONS(928), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10966] = 5,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym_null_operator,
    STATE(168), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [10984] = 2,
    ACTIONS(934), 1,
      anon_sym_LT,
    ACTIONS(932), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10996] = 2,
    ACTIONS(938), 1,
      anon_sym_LT,
    ACTIONS(936), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [11008] = 3,
    ACTIONS(940), 1,
      aux_sym_spel_object_literal_token2,
    STATE(233), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(97), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [11022] = 2,
    ACTIONS(944), 1,
      anon_sym_LT,
    ACTIONS(942), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [11034] = 2,
    ACTIONS(938), 1,
      anon_sym_LT,
    ACTIONS(936), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [11046] = 2,
    ACTIONS(934), 1,
      anon_sym_LT,
    ACTIONS(932), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [11058] = 2,
    ACTIONS(886), 1,
      anon_sym_LT,
    ACTIONS(884), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [11070] = 4,
    ACTIONS(882), 1,
      anon_sym_none,
    ACTIONS(946), 1,
      sym_remove_all,
    STATE(443), 2,
      sym__th_remove_value,
      sym_remove_none,
    ACTIONS(948), 3,
      sym_remove_body,
      sym_remove_tag,
      sym_remove_abf,
  [11086] = 2,
    ACTIONS(898), 1,
      anon_sym_LT,
    ACTIONS(896), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [11098] = 2,
    ACTIONS(910), 1,
      anon_sym_LT,
    ACTIONS(908), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [11110] = 7,
    ACTIONS(900), 1,
      anon_sym_SLASH,
    ACTIONS(904), 1,
      sym_standard_url_fragment,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    ACTIONS(950), 1,
      anon_sym_RBRACE,
    STATE(266), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(331), 1,
      sym_parameterized_url_fragment,
    STATE(455), 1,
      sym__url_std_expression,
  [11132] = 2,
    ACTIONS(918), 1,
      anon_sym_LT,
    ACTIONS(916), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [11144] = 2,
    ACTIONS(926), 1,
      anon_sym_LT,
    ACTIONS(924), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [11156] = 2,
    ACTIONS(930), 1,
      anon_sym_LT,
    ACTIONS(928), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [11168] = 2,
    ACTIONS(944), 1,
      anon_sym_LT,
    ACTIONS(942), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [11180] = 2,
    ACTIONS(922), 1,
      anon_sym_LT,
    ACTIONS(920), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [11192] = 2,
    ACTIONS(894), 1,
      anon_sym_LT,
    ACTIONS(892), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [11204] = 4,
    ACTIONS(948), 1,
      sym_inline_javascript,
    ACTIONS(952), 1,
      anon_sym_none,
    ACTIONS(954), 1,
      anon_sym_text,
    STATE(443), 3,
      sym__th_inline_value,
      sym_inline_text,
      sym_inline_none,
  [11219] = 4,
    ACTIONS(880), 1,
      sym_inline_javascript,
    ACTIONS(952), 1,
      anon_sym_none,
    ACTIONS(954), 1,
      anon_sym_text,
    STATE(407), 3,
      sym__th_inline_value,
      sym_inline_text,
      sym_inline_none,
  [11234] = 2,
    ACTIONS(958), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(956), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
      anon_sym_EQ,
  [11244] = 3,
    ACTIONS(962), 1,
      anon_sym_EQ,
    ACTIONS(964), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(960), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [11256] = 4,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    ACTIONS(966), 1,
      sym_standard_url_fragment,
    STATE(278), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(341), 1,
      sym_parameterized_url_fragment,
  [11269] = 2,
    ACTIONS(970), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(968), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [11278] = 3,
    ACTIONS(972), 1,
      anon_sym_SQUOTE,
    STATE(270), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(974), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [11289] = 3,
    ACTIONS(976), 1,
      anon_sym_SQUOTE,
    STATE(276), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(978), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [11300] = 3,
    ACTIONS(980), 1,
      anon_sym_SQUOTE,
    STATE(270), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(982), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [11311] = 4,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    ACTIONS(985), 1,
      sym_standard_url_fragment,
    STATE(278), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(344), 1,
      sym_parameterized_url_fragment,
  [11324] = 4,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    ACTIONS(966), 1,
      sym_standard_url_fragment,
    STATE(271), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(341), 1,
      sym_parameterized_url_fragment,
  [11337] = 4,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    ACTIONS(989), 1,
      aux_sym_url_parameter_token1,
    STATE(329), 1,
      sym_url_parameter_assignement,
    STATE(474), 1,
      sym_url_parameter,
  [11350] = 4,
    ACTIONS(989), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    STATE(338), 1,
      sym_url_parameter_assignement,
    STATE(474), 1,
      sym_url_parameter,
  [11363] = 3,
    ACTIONS(993), 1,
      anon_sym_LPAREN,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
    ACTIONS(997), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [11374] = 3,
    ACTIONS(999), 1,
      anon_sym_SQUOTE,
    STATE(270), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(974), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [11385] = 4,
    ACTIONS(1001), 1,
      aux_sym_spel_object_literal_token1,
    STATE(295), 1,
      aux_sym__type_adress_repeat1,
    STATE(395), 1,
      sym__spel_name,
    STATE(414), 1,
      sym__type_adress,
  [11398] = 4,
    ACTIONS(1003), 1,
      sym_standard_url_fragment,
    ACTIONS(1006), 1,
      anon_sym_LBRACE,
    STATE(278), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(473), 1,
      sym_parameterized_url_fragment,
  [11411] = 2,
    ACTIONS(1011), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1009), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [11420] = 2,
    ACTIONS(1015), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1013), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [11429] = 3,
    ACTIONS(1017), 1,
      anon_sym_SQUOTE,
    STATE(284), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(1019), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [11440] = 3,
    ACTIONS(1021), 1,
      anon_sym_LPAREN,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
    ACTIONS(997), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [11451] = 4,
    ACTIONS(989), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym_url_parameter_assignement,
    STATE(474), 1,
      sym_url_parameter,
  [11464] = 3,
    ACTIONS(1027), 1,
      anon_sym_SQUOTE,
    STATE(270), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(974), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [11475] = 4,
    ACTIONS(1029), 1,
      anon_sym_RBRACE,
    ACTIONS(1031), 1,
      aux_sym_url_parameter_token1,
    STATE(369), 1,
      sym_message_name,
    STATE(461), 1,
      sym__message_std_expression,
  [11488] = 3,
    ACTIONS(1033), 1,
      anon_sym_SQUOTE,
    STATE(268), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(1035), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [11499] = 2,
    ACTIONS(958), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(956), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_EQ,
  [11508] = 3,
    ACTIONS(964), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1037), 1,
      anon_sym_EQ,
    ACTIONS(960), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [11519] = 2,
    ACTIONS(1041), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1039), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [11528] = 4,
    ACTIONS(989), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_url_parameter_assignement,
    STATE(474), 1,
      sym_url_parameter,
  [11541] = 3,
    ACTIONS(1045), 1,
      anon_sym_LPAREN,
    ACTIONS(1047), 1,
      anon_sym_RBRACE,
    ACTIONS(997), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [11552] = 4,
    ACTIONS(1031), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(1049), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      sym_message_name,
    STATE(449), 1,
      sym__message_std_expression,
  [11565] = 4,
    ACTIONS(1051), 1,
      anon_sym_DQUOTE,
    ACTIONS(1053), 1,
      sym_attribute_value,
    ACTIONS(1055), 1,
      anon_sym_SQUOTE,
    STATE(267), 1,
      sym_quoted_attribute_value,
  [11578] = 4,
    ACTIONS(1057), 1,
      anon_sym_DQUOTE,
    ACTIONS(1059), 1,
      sym_attribute_value,
    ACTIONS(1061), 1,
      anon_sym_SQUOTE,
    STATE(314), 1,
      sym_quoted_attribute_value,
  [11591] = 3,
    ACTIONS(1001), 1,
      aux_sym_spel_object_literal_token1,
    STATE(350), 1,
      aux_sym__type_adress_repeat1,
    STATE(355), 1,
      sym__spel_name,
  [11601] = 3,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      aux_sym_spel_method_args_repeat1,
  [11611] = 3,
    ACTIONS(1067), 1,
      aux_sym_spel_object_literal_token1,
    STATE(147), 1,
      sym_spel_method_literal,
    STATE(358), 1,
      sym__spel_name,
  [11621] = 3,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_th_fragment_declaration_repeat1,
  [11631] = 3,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    STATE(335), 1,
      aux_sym__url_std_expression_repeat2,
  [11641] = 3,
    ACTIONS(989), 1,
      aux_sym_url_parameter_token1,
    STATE(357), 1,
      sym_url_parameter_assignement,
    STATE(474), 1,
      sym_url_parameter,
  [11651] = 3,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym__url_std_expression_repeat2,
  [11661] = 3,
    ACTIONS(1076), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1078), 1,
      sym_raw_text,
    STATE(260), 1,
      sym_end_tag,
  [11671] = 3,
    ACTIONS(1076), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1080), 1,
      sym_raw_text,
    STATE(249), 1,
      sym_end_tag,
  [11681] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    STATE(343), 1,
      aux_sym_fragment_call_repeat1,
  [11691] = 3,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(167), 1,
      sym_string_literal,
  [11701] = 3,
    ACTIONS(1084), 1,
      aux_sym_iterStat_token1,
    STATE(396), 1,
      sym_each_element,
    STATE(407), 1,
      sym_th_each_value,
  [11711] = 3,
    ACTIONS(1086), 1,
      aux_sym_attribute_name_token1,
    STATE(407), 1,
      sym_th_assignation_sequence,
    STATE(429), 1,
      sym_attribute_name,
  [11721] = 3,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_RBRACE,
    STATE(311), 1,
      aux_sym_array_content_repeat1,
  [11731] = 3,
    ACTIONS(1090), 1,
      sym__start_tag_name,
    ACTIONS(1092), 1,
      sym__script_start_tag_name,
    ACTIONS(1094), 1,
      sym__style_start_tag_name,
  [11741] = 2,
    ACTIONS(1011), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1009), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [11749] = 3,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_array_content_repeat1,
  [11759] = 2,
    ACTIONS(1015), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1013), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [11767] = 2,
    ACTIONS(1041), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1039), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [11775] = 2,
    ACTIONS(970), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(968), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [11783] = 3,
    ACTIONS(1099), 1,
      anon_sym_DQUOTE,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_th_assignation_sequence_repeat1,
  [11793] = 3,
    ACTIONS(1103), 1,
      aux_sym_spel_object_literal_token1,
    STATE(147), 1,
      sym_spel_method_literal,
    STATE(363), 1,
      sym__spel_name,
  [11803] = 3,
    ACTIONS(1086), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1105), 1,
      anon_sym_DQUOTE,
    STATE(428), 1,
      sym_attribute_name,
  [11813] = 3,
    ACTIONS(1092), 1,
      sym__script_start_tag_name,
    ACTIONS(1094), 1,
      sym__style_start_tag_name,
    ACTIONS(1107), 1,
      sym__start_tag_name,
  [11823] = 3,
    ACTIONS(1084), 1,
      aux_sym_iterStat_token1,
    STATE(396), 1,
      sym_each_element,
    STATE(443), 1,
      sym_th_each_value,
  [11833] = 2,
    ACTIONS(431), 1,
      anon_sym_COLON_COLON,
    ACTIONS(429), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [11841] = 3,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_th_fragment_declaration_repeat1,
  [11851] = 3,
    ACTIONS(1113), 1,
      aux_sym_spel_object_literal_token1,
    STATE(137), 1,
      sym_spel_method_literal,
    STATE(358), 1,
      sym__spel_name,
  [11861] = 3,
    ACTIONS(1115), 1,
      aux_sym_spel_object_literal_token1,
    STATE(137), 1,
      sym_spel_method_literal,
    STATE(363), 1,
      sym__spel_name,
  [11871] = 3,
    ACTIONS(1086), 1,
      aux_sym_attribute_name_token1,
    STATE(429), 1,
      sym_attribute_name,
    STATE(443), 1,
      sym_th_assignation_sequence,
  [11881] = 3,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      aux_sym__url_std_expression_repeat2,
  [11891] = 3,
    ACTIONS(1119), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1121), 1,
      sym_raw_text,
    STATE(241), 1,
      sym_end_tag,
  [11901] = 3,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    STATE(342), 1,
      aux_sym_spel_method_args_repeat1,
  [11911] = 1,
    ACTIONS(1125), 3,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_RBRACE,
  [11917] = 3,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym__url_std_expression_repeat2,
  [11927] = 3,
    ACTIONS(1127), 1,
      aux_sym_number_literal_token1,
    ACTIONS(1129), 1,
      anon_sym_RBRACK,
    STATE(410), 1,
      sym_integer_literal,
  [11937] = 3,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    ACTIONS(1133), 1,
      anon_sym_SLASH,
    ACTIONS(1135), 1,
      anon_sym_RBRACE,
  [11947] = 3,
    ACTIONS(1086), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1137), 1,
      anon_sym_DQUOTE,
    STATE(428), 1,
      sym_attribute_name,
  [11957] = 3,
    ACTIONS(1139), 1,
      anon_sym_DQUOTE,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_th_assignation_sequence_repeat1,
  [11967] = 2,
    ACTIONS(1146), 1,
      anon_sym_DOT,
    ACTIONS(1144), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [11975] = 3,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym__url_std_expression_repeat2,
  [11985] = 3,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym__url_std_expression_repeat2,
  [11995] = 3,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_RBRACE,
    STATE(311), 1,
      aux_sym_array_content_repeat1,
  [12005] = 3,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym__url_std_expression_repeat2,
  [12015] = 3,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      aux_sym__url_std_expression_repeat2,
  [12025] = 3,
    ACTIONS(1119), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1155), 1,
      sym_raw_text,
    STATE(246), 1,
      sym_end_tag,
  [12035] = 3,
    ACTIONS(993), 1,
      anon_sym_LPAREN,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
    ACTIONS(1157), 1,
      anon_sym_SLASH,
  [12045] = 3,
    ACTIONS(1159), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    STATE(342), 1,
      aux_sym_spel_method_args_repeat1,
  [12055] = 3,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_fragment_call_repeat1,
  [12065] = 3,
    ACTIONS(1021), 1,
      anon_sym_LPAREN,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
    ACTIONS(1167), 1,
      anon_sym_SLASH,
  [12075] = 3,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      aux_sym_th_fragment_declaration_repeat1,
  [12085] = 3,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(1171), 1,
      anon_sym_RBRACE,
    STATE(349), 1,
      aux_sym_inline_map_repeat1,
  [12095] = 3,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    ACTIONS(1173), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      aux_sym__url_std_expression_repeat2,
  [12105] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(1175), 1,
      anon_sym_RPAREN,
    STATE(343), 1,
      aux_sym_fragment_call_repeat1,
  [12115] = 3,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
    ACTIONS(1180), 1,
      anon_sym_RBRACE,
    STATE(349), 1,
      aux_sym_inline_map_repeat1,
  [12125] = 3,
    ACTIONS(1182), 1,
      aux_sym_spel_object_literal_token1,
    STATE(350), 1,
      aux_sym__type_adress_repeat1,
    STATE(433), 1,
      sym__spel_name,
  [12135] = 2,
    ACTIONS(1185), 1,
      anon_sym_DQUOTE,
    ACTIONS(1187), 1,
      aux_sym_quoted_attribute_value_token2,
  [12142] = 2,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(407), 1,
      sym_spel_th_std_expression,
  [12149] = 1,
    ACTIONS(1189), 2,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [12154] = 1,
    ACTIONS(1191), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [12159] = 2,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
    ACTIONS(1195), 1,
      anon_sym_DOT,
  [12166] = 1,
    ACTIONS(1197), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [12171] = 1,
    ACTIONS(1153), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12176] = 2,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
    STATE(216), 1,
      sym_spel_method_args,
  [12183] = 2,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(443), 1,
      sym_spel_th_std_expression,
  [12190] = 2,
    ACTIONS(1201), 1,
      sym__end_tag_name,
    ACTIONS(1203), 1,
      sym_erroneous_end_tag_name,
  [12197] = 2,
    ACTIONS(1205), 1,
      sym_fragment_name,
    STATE(443), 1,
      sym_th_fragment_declaration,
  [12204] = 2,
    ACTIONS(1119), 1,
      anon_sym_LT_SLASH,
    STATE(242), 1,
      sym_end_tag,
  [12211] = 2,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_spel_method_args,
  [12218] = 2,
    ACTIONS(1203), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(1207), 1,
      sym__end_tag_name,
  [12225] = 2,
    ACTIONS(1209), 1,
      aux_sym_spel_object_literal_token1,
    STATE(35), 1,
      sym__spel_name,
  [12232] = 1,
    ACTIONS(1162), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12237] = 1,
    ACTIONS(1072), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12242] = 1,
    ACTIONS(1211), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [12247] = 2,
    ACTIONS(1213), 1,
      anon_sym_LPAREN,
    ACTIONS(1215), 1,
      anon_sym_RBRACE,
  [12254] = 2,
    ACTIONS(1086), 1,
      aux_sym_attribute_name_token1,
    STATE(428), 1,
      sym_attribute_name,
  [12261] = 2,
    ACTIONS(1119), 1,
      anon_sym_LT_SLASH,
    STATE(240), 1,
      sym_end_tag,
  [12268] = 1,
    ACTIONS(1217), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [12273] = 2,
    ACTIONS(989), 1,
      aux_sym_url_parameter_token1,
    STATE(424), 1,
      sym_url_parameter,
  [12280] = 1,
    ACTIONS(1219), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [12285] = 2,
    ACTIONS(1001), 1,
      aux_sym_spel_object_literal_token1,
    STATE(214), 1,
      sym__spel_name,
  [12292] = 1,
    ACTIONS(1221), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [12297] = 2,
    ACTIONS(1185), 1,
      anon_sym_SQUOTE,
    ACTIONS(1223), 1,
      aux_sym_quoted_attribute_value_token1,
  [12304] = 2,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(458), 1,
      sym_spel_th_std_expression,
  [12311] = 2,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
    ACTIONS(1227), 1,
      sym_fragment_arg,
  [12318] = 2,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(469), 1,
      sym_spel_th_std_expression,
  [12325] = 2,
    ACTIONS(1229), 1,
      aux_sym_iterStat_token1,
    STATE(466), 1,
      sym_iterStat,
  [12332] = 2,
    ACTIONS(1076), 1,
      anon_sym_LT_SLASH,
    STATE(256), 1,
      sym_end_tag,
  [12339] = 2,
    ACTIONS(1076), 1,
      anon_sym_LT_SLASH,
    STATE(257), 1,
      sym_end_tag,
  [12346] = 1,
    ACTIONS(997), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [12351] = 1,
    ACTIONS(1231), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [12356] = 1,
    ACTIONS(1233), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [12361] = 2,
    ACTIONS(1205), 1,
      sym_fragment_name,
    STATE(407), 1,
      sym_th_fragment_declaration,
  [12368] = 2,
    ACTIONS(35), 1,
      anon_sym_T_LPAREN,
    STATE(167), 1,
      sym_type,
  [12375] = 2,
    ACTIONS(1235), 1,
      anon_sym_SQUOTE,
    ACTIONS(1237), 1,
      aux_sym_quoted_attribute_value_token1,
  [12382] = 2,
    ACTIONS(1239), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_range,
  [12389] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    STATE(90), 1,
      aux_sym_array_creation_repeat1,
  [12396] = 2,
    ACTIONS(1235), 1,
      anon_sym_DQUOTE,
    ACTIONS(1241), 1,
      aux_sym_quoted_attribute_value_token2,
  [12403] = 1,
    ACTIONS(1243), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [12408] = 1,
    ACTIONS(1245), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [12413] = 2,
    ACTIONS(1195), 1,
      anon_sym_DOT,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
  [12420] = 2,
    ACTIONS(1249), 1,
      anon_sym_COMMA,
    ACTIONS(1251), 1,
      anon_sym_COLON,
  [12427] = 1,
    ACTIONS(1253), 1,
      anon_sym_EQ,
  [12431] = 1,
    ACTIONS(1255), 1,
      anon_sym_EQ,
  [12435] = 1,
    ACTIONS(1257), 1,
      aux_sym_number_literal_token1,
  [12439] = 1,
    ACTIONS(1259), 1,
      aux_sym_token_literal_token2,
  [12443] = 1,
    ACTIONS(1261), 1,
      anon_sym_LBRACK,
  [12447] = 1,
    ACTIONS(1263), 1,
      anon_sym_LBRACK,
  [12451] = 1,
    ACTIONS(1265), 1,
      anon_sym_DQUOTE,
  [12455] = 1,
    ACTIONS(1267), 1,
      anon_sym_DQUOTE,
  [12459] = 1,
    ACTIONS(1269), 1,
      anon_sym_LPAREN,
  [12463] = 1,
    ACTIONS(1271), 1,
      anon_sym_DQUOTE,
  [12467] = 1,
    ACTIONS(1273), 1,
      anon_sym_DQUOTE,
  [12471] = 1,
    ACTIONS(1275), 1,
      anon_sym_SQUOTE,
  [12475] = 1,
    ACTIONS(1277), 1,
      anon_sym_DOT,
  [12479] = 1,
    ACTIONS(1279), 1,
      anon_sym_RBRACK,
  [12483] = 1,
    ACTIONS(1281), 1,
      anon_sym_DOT,
  [12487] = 1,
    ACTIONS(479), 1,
      anon_sym_RBRACK,
  [12491] = 1,
    ACTIONS(1275), 1,
      anon_sym_DQUOTE,
  [12495] = 1,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
  [12499] = 1,
    ACTIONS(1285), 1,
      anon_sym_DQUOTE,
  [12503] = 1,
    ACTIONS(1287), 1,
      anon_sym_DQUOTE,
  [12507] = 1,
    ACTIONS(1289), 1,
      anon_sym_DQUOTE,
  [12511] = 1,
    ACTIONS(1291), 1,
      anon_sym_DQUOTE,
  [12515] = 1,
    ACTIONS(1293), 1,
      anon_sym_DQUOTE,
  [12519] = 1,
    ACTIONS(1295), 1,
      anon_sym_DQUOTE,
  [12523] = 1,
    ACTIONS(1297), 1,
      anon_sym_DQUOTE,
  [12527] = 1,
    ACTIONS(1299), 1,
      anon_sym_DQUOTE,
  [12531] = 1,
    ACTIONS(1301), 1,
      anon_sym_RBRACE,
  [12535] = 1,
    ACTIONS(1303), 1,
      anon_sym_RBRACE,
  [12539] = 1,
    ACTIONS(1305), 1,
      anon_sym_EQ,
  [12543] = 1,
    ACTIONS(1307), 1,
      anon_sym_EQ,
  [12547] = 1,
    ACTIONS(1309), 1,
      anon_sym_EQ,
  [12551] = 1,
    ACTIONS(1311), 1,
      anon_sym_EQ,
  [12555] = 1,
    ACTIONS(1313), 1,
      anon_sym_EQ,
  [12559] = 1,
    ACTIONS(1315), 1,
      anon_sym_EQ,
  [12563] = 1,
    ACTIONS(1317), 1,
      anon_sym_GT,
  [12567] = 1,
    ACTIONS(1319), 1,
      anon_sym_EQ,
  [12571] = 1,
    ACTIONS(1195), 1,
      anon_sym_DOT,
  [12575] = 1,
    ACTIONS(1321), 1,
      aux_sym_spel_object_literal_token1,
  [12579] = 1,
    ACTIONS(1323), 1,
      anon_sym_GT,
  [12583] = 1,
    ACTIONS(1325), 1,
      anon_sym_EQ,
  [12587] = 1,
    ACTIONS(1327), 1,
      anon_sym_GT,
  [12591] = 1,
    ACTIONS(1329), 1,
      anon_sym_RBRACE,
  [12595] = 1,
    ACTIONS(1331), 1,
      anon_sym_RBRACE,
  [12599] = 1,
    ACTIONS(1333), 1,
      anon_sym_RBRACE,
  [12603] = 1,
    ACTIONS(1335), 1,
      anon_sym_DQUOTE,
  [12607] = 1,
    ACTIONS(1335), 1,
      anon_sym_SQUOTE,
  [12611] = 1,
    ACTIONS(1337), 1,
      anon_sym_DQUOTE,
  [12615] = 1,
    ACTIONS(1339), 1,
      anon_sym_EQ,
  [12619] = 1,
    ACTIONS(1047), 1,
      anon_sym_RBRACE,
  [12623] = 1,
    ACTIONS(1341), 1,
      aux_sym_url_parameter_token1,
  [12627] = 1,
    ACTIONS(1343), 1,
      anon_sym_GT,
  [12631] = 1,
    ACTIONS(1345), 1,
      anon_sym_RBRACE,
  [12635] = 1,
    ACTIONS(1347), 1,
      anon_sym_RBRACE,
  [12639] = 1,
    ACTIONS(1349), 1,
      aux_sym_number_literal_token1,
  [12643] = 1,
    ACTIONS(1351), 1,
      anon_sym_RBRACE,
  [12647] = 1,
    ACTIONS(1353), 1,
      sym__doctype,
  [12651] = 1,
    ACTIONS(1355), 1,
      anon_sym_DQUOTE,
  [12655] = 1,
    ACTIONS(1357), 1,
      anon_sym_GT,
  [12659] = 1,
    ACTIONS(1359), 1,
      anon_sym_RBRACE,
  [12663] = 1,
    ACTIONS(1361), 1,
      anon_sym_RBRACE,
  [12667] = 1,
    ACTIONS(1201), 1,
      sym__end_tag_name,
  [12671] = 1,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
  [12675] = 1,
    ACTIONS(1203), 1,
      sym_erroneous_end_tag_name,
  [12679] = 1,
    ACTIONS(1365), 1,
      aux_sym_doctype_token1,
  [12683] = 1,
    ACTIONS(1367), 1,
      anon_sym_RBRACE,
  [12687] = 1,
    ACTIONS(1207), 1,
      sym__end_tag_name,
  [12691] = 1,
    ACTIONS(1369), 1,
      sym_fragment_arg,
  [12695] = 1,
    ACTIONS(1371), 1,
      aux_sym_object_creation_expression_token1,
  [12699] = 1,
    ACTIONS(1373), 1,
      anon_sym_COLON,
  [12703] = 1,
    ACTIONS(1375), 1,
      anon_sym_COLON,
  [12707] = 1,
    ACTIONS(1377), 1,
      anon_sym_GT,
  [12711] = 1,
    ACTIONS(1379), 1,
      aux_sym_doctype_token1,
  [12715] = 1,
    ACTIONS(1381), 1,
      anon_sym_DQUOTE,
  [12719] = 1,
    ACTIONS(1383), 1,
      anon_sym_DQUOTE,
  [12723] = 1,
    ACTIONS(1385), 1,
      anon_sym_DQUOTE,
  [12727] = 1,
    ACTIONS(1387), 1,
      anon_sym_RBRACE,
  [12731] = 1,
    ACTIONS(1389), 1,
      anon_sym_SLASH,
  [12735] = 1,
    ACTIONS(1391), 1,
      anon_sym_EQ,
  [12739] = 1,
    ACTIONS(1393), 1,
      anon_sym_DOT,
  [12743] = 1,
    ACTIONS(1395), 1,
      ts_builtin_sym_end,
  [12747] = 1,
    ACTIONS(1397), 1,
      sym__doctype,
  [12751] = 1,
    ACTIONS(1399), 1,
      anon_sym_DQUOTE,
  [12755] = 1,
    ACTIONS(1401), 1,
      anon_sym_DQUOTE,
  [12759] = 1,
    ACTIONS(1403), 1,
      anon_sym_DQUOTE,
  [12763] = 1,
    ACTIONS(1405), 1,
      anon_sym_DQUOTE,
  [12767] = 1,
    ACTIONS(1407), 1,
      anon_sym_DQUOTE,
  [12771] = 1,
    ACTIONS(1409), 1,
      anon_sym_DQUOTE,
  [12775] = 1,
    ACTIONS(1411), 1,
      anon_sym_DQUOTE,
  [12779] = 1,
    ACTIONS(1413), 1,
      anon_sym_DQUOTE,
  [12783] = 1,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
  [12787] = 1,
    ACTIONS(1415), 1,
      sym_erroneous_end_tag_name,
  [12791] = 1,
    ACTIONS(1417), 1,
      anon_sym_EQ,
  [12795] = 1,
    ACTIONS(1419), 1,
      anon_sym_EQ,
  [12799] = 1,
    ACTIONS(1421), 1,
      anon_sym_EQ,
  [12803] = 1,
    ACTIONS(1423), 1,
      anon_sym_EQ,
  [12807] = 1,
    ACTIONS(1425), 1,
      anon_sym_EQ,
  [12811] = 1,
    ACTIONS(1427), 1,
      anon_sym_EQ,
  [12815] = 1,
    ACTIONS(1429), 1,
      anon_sym_EQ,
  [12819] = 1,
    ACTIONS(1431), 1,
      anon_sym_EQ,
  [12823] = 1,
    ACTIONS(1433), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 308,
  [SMALL_STATE(7)] = 385,
  [SMALL_STATE(8)] = 462,
  [SMALL_STATE(9)] = 536,
  [SMALL_STATE(10)] = 610,
  [SMALL_STATE(11)] = 684,
  [SMALL_STATE(12)] = 744,
  [SMALL_STATE(13)] = 804,
  [SMALL_STATE(14)] = 878,
  [SMALL_STATE(15)] = 952,
  [SMALL_STATE(16)] = 1026,
  [SMALL_STATE(17)] = 1100,
  [SMALL_STATE(18)] = 1174,
  [SMALL_STATE(19)] = 1234,
  [SMALL_STATE(20)] = 1308,
  [SMALL_STATE(21)] = 1382,
  [SMALL_STATE(22)] = 1456,
  [SMALL_STATE(23)] = 1530,
  [SMALL_STATE(24)] = 1604,
  [SMALL_STATE(25)] = 1664,
  [SMALL_STATE(26)] = 1738,
  [SMALL_STATE(27)] = 1812,
  [SMALL_STATE(28)] = 1886,
  [SMALL_STATE(29)] = 1960,
  [SMALL_STATE(30)] = 2034,
  [SMALL_STATE(31)] = 2093,
  [SMALL_STATE(32)] = 2152,
  [SMALL_STATE(33)] = 2230,
  [SMALL_STATE(34)] = 2281,
  [SMALL_STATE(35)] = 2356,
  [SMALL_STATE(36)] = 2407,
  [SMALL_STATE(37)] = 2482,
  [SMALL_STATE(38)] = 2533,
  [SMALL_STATE(39)] = 2583,
  [SMALL_STATE(40)] = 2633,
  [SMALL_STATE(41)] = 2699,
  [SMALL_STATE(42)] = 2763,
  [SMALL_STATE(43)] = 2825,
  [SMALL_STATE(44)] = 2881,
  [SMALL_STATE(45)] = 2953,
  [SMALL_STATE(46)] = 3003,
  [SMALL_STATE(47)] = 3053,
  [SMALL_STATE(48)] = 3103,
  [SMALL_STATE(49)] = 3153,
  [SMALL_STATE(50)] = 3223,
  [SMALL_STATE(51)] = 3295,
  [SMALL_STATE(52)] = 3339,
  [SMALL_STATE(53)] = 3385,
  [SMALL_STATE(54)] = 3457,
  [SMALL_STATE(55)] = 3507,
  [SMALL_STATE(56)] = 3557,
  [SMALL_STATE(57)] = 3629,
  [SMALL_STATE(58)] = 3699,
  [SMALL_STATE(59)] = 3745,
  [SMALL_STATE(60)] = 3817,
  [SMALL_STATE(61)] = 3869,
  [SMALL_STATE(62)] = 3938,
  [SMALL_STATE(63)] = 4007,
  [SMALL_STATE(64)] = 4060,
  [SMALL_STATE(65)] = 4103,
  [SMALL_STATE(66)] = 4172,
  [SMALL_STATE(67)] = 4243,
  [SMALL_STATE(68)] = 4312,
  [SMALL_STATE(69)] = 4381,
  [SMALL_STATE(70)] = 4448,
  [SMALL_STATE(71)] = 4511,
  [SMALL_STATE(72)] = 4562,
  [SMALL_STATE(73)] = 4601,
  [SMALL_STATE(74)] = 4670,
  [SMALL_STATE(75)] = 4715,
  [SMALL_STATE(76)] = 4758,
  [SMALL_STATE(77)] = 4827,
  [SMALL_STATE(78)] = 4866,
  [SMALL_STATE(79)] = 4925,
  [SMALL_STATE(80)] = 4964,
  [SMALL_STATE(81)] = 5033,
  [SMALL_STATE(82)] = 5106,
  [SMALL_STATE(83)] = 5175,
  [SMALL_STATE(84)] = 5244,
  [SMALL_STATE(85)] = 5313,
  [SMALL_STATE(86)] = 5382,
  [SMALL_STATE(87)] = 5451,
  [SMALL_STATE(88)] = 5520,
  [SMALL_STATE(89)] = 5589,
  [SMALL_STATE(90)] = 5667,
  [SMALL_STATE(91)] = 5712,
  [SMALL_STATE(92)] = 5755,
  [SMALL_STATE(93)] = 5792,
  [SMALL_STATE(94)] = 5829,
  [SMALL_STATE(95)] = 5904,
  [SMALL_STATE(96)] = 5947,
  [SMALL_STATE(97)] = 5984,
  [SMALL_STATE(98)] = 6059,
  [SMALL_STATE(99)] = 6127,
  [SMALL_STATE(100)] = 6197,
  [SMALL_STATE(101)] = 6237,
  [SMALL_STATE(102)] = 6305,
  [SMALL_STATE(103)] = 6341,
  [SMALL_STATE(104)] = 6407,
  [SMALL_STATE(105)] = 6477,
  [SMALL_STATE(106)] = 6545,
  [SMALL_STATE(107)] = 6581,
  [SMALL_STATE(108)] = 6647,
  [SMALL_STATE(109)] = 6684,
  [SMALL_STATE(110)] = 6753,
  [SMALL_STATE(111)] = 6822,
  [SMALL_STATE(112)] = 6885,
  [SMALL_STATE(113)] = 6954,
  [SMALL_STATE(114)] = 7023,
  [SMALL_STATE(115)] = 7092,
  [SMALL_STATE(116)] = 7161,
  [SMALL_STATE(117)] = 7230,
  [SMALL_STATE(118)] = 7293,
  [SMALL_STATE(119)] = 7328,
  [SMALL_STATE(120)] = 7397,
  [SMALL_STATE(121)] = 7466,
  [SMALL_STATE(122)] = 7501,
  [SMALL_STATE(123)] = 7564,
  [SMALL_STATE(124)] = 7633,
  [SMALL_STATE(125)] = 7669,
  [SMALL_STATE(126)] = 7703,
  [SMALL_STATE(127)] = 7737,
  [SMALL_STATE(128)] = 7771,
  [SMALL_STATE(129)] = 7807,
  [SMALL_STATE(130)] = 7841,
  [SMALL_STATE(131)] = 7903,
  [SMALL_STATE(132)] = 7937,
  [SMALL_STATE(133)] = 7971,
  [SMALL_STATE(134)] = 8005,
  [SMALL_STATE(135)] = 8039,
  [SMALL_STATE(136)] = 8073,
  [SMALL_STATE(137)] = 8107,
  [SMALL_STATE(138)] = 8141,
  [SMALL_STATE(139)] = 8175,
  [SMALL_STATE(140)] = 8209,
  [SMALL_STATE(141)] = 8243,
  [SMALL_STATE(142)] = 8277,
  [SMALL_STATE(143)] = 8311,
  [SMALL_STATE(144)] = 8347,
  [SMALL_STATE(145)] = 8381,
  [SMALL_STATE(146)] = 8415,
  [SMALL_STATE(147)] = 8449,
  [SMALL_STATE(148)] = 8483,
  [SMALL_STATE(149)] = 8517,
  [SMALL_STATE(150)] = 8551,
  [SMALL_STATE(151)] = 8585,
  [SMALL_STATE(152)] = 8647,
  [SMALL_STATE(153)] = 8680,
  [SMALL_STATE(154)] = 8713,
  [SMALL_STATE(155)] = 8746,
  [SMALL_STATE(156)] = 8779,
  [SMALL_STATE(157)] = 8812,
  [SMALL_STATE(158)] = 8845,
  [SMALL_STATE(159)] = 8878,
  [SMALL_STATE(160)] = 8911,
  [SMALL_STATE(161)] = 8944,
  [SMALL_STATE(162)] = 8977,
  [SMALL_STATE(163)] = 9010,
  [SMALL_STATE(164)] = 9043,
  [SMALL_STATE(165)] = 9076,
  [SMALL_STATE(166)] = 9109,
  [SMALL_STATE(167)] = 9142,
  [SMALL_STATE(168)] = 9175,
  [SMALL_STATE(169)] = 9208,
  [SMALL_STATE(170)] = 9241,
  [SMALL_STATE(171)] = 9274,
  [SMALL_STATE(172)] = 9307,
  [SMALL_STATE(173)] = 9355,
  [SMALL_STATE(174)] = 9403,
  [SMALL_STATE(175)] = 9445,
  [SMALL_STATE(176)] = 9487,
  [SMALL_STATE(177)] = 9529,
  [SMALL_STATE(178)] = 9571,
  [SMALL_STATE(179)] = 9610,
  [SMALL_STATE(180)] = 9649,
  [SMALL_STATE(181)] = 9688,
  [SMALL_STATE(182)] = 9710,
  [SMALL_STATE(183)] = 9732,
  [SMALL_STATE(184)] = 9754,
  [SMALL_STATE(185)] = 9776,
  [SMALL_STATE(186)] = 9798,
  [SMALL_STATE(187)] = 9820,
  [SMALL_STATE(188)] = 9842,
  [SMALL_STATE(189)] = 9864,
  [SMALL_STATE(190)] = 9886,
  [SMALL_STATE(191)] = 9908,
  [SMALL_STATE(192)] = 9930,
  [SMALL_STATE(193)] = 9964,
  [SMALL_STATE(194)] = 9986,
  [SMALL_STATE(195)] = 10017,
  [SMALL_STATE(196)] = 10049,
  [SMALL_STATE(197)] = 10081,
  [SMALL_STATE(198)] = 10113,
  [SMALL_STATE(199)] = 10144,
  [SMALL_STATE(200)] = 10175,
  [SMALL_STATE(201)] = 10206,
  [SMALL_STATE(202)] = 10237,
  [SMALL_STATE(203)] = 10268,
  [SMALL_STATE(204)] = 10291,
  [SMALL_STATE(205)] = 10322,
  [SMALL_STATE(206)] = 10337,
  [SMALL_STATE(207)] = 10352,
  [SMALL_STATE(208)] = 10367,
  [SMALL_STATE(209)] = 10382,
  [SMALL_STATE(210)] = 10397,
  [SMALL_STATE(211)] = 10412,
  [SMALL_STATE(212)] = 10427,
  [SMALL_STATE(213)] = 10442,
  [SMALL_STATE(214)] = 10462,
  [SMALL_STATE(215)] = 10484,
  [SMALL_STATE(216)] = 10506,
  [SMALL_STATE(217)] = 10528,
  [SMALL_STATE(218)] = 10550,
  [SMALL_STATE(219)] = 10572,
  [SMALL_STATE(220)] = 10594,
  [SMALL_STATE(221)] = 10616,
  [SMALL_STATE(222)] = 10638,
  [SMALL_STATE(223)] = 10660,
  [SMALL_STATE(224)] = 10675,
  [SMALL_STATE(225)] = 10694,
  [SMALL_STATE(226)] = 10713,
  [SMALL_STATE(227)] = 10732,
  [SMALL_STATE(228)] = 10751,
  [SMALL_STATE(229)] = 10770,
  [SMALL_STATE(230)] = 10782,
  [SMALL_STATE(231)] = 10798,
  [SMALL_STATE(232)] = 10810,
  [SMALL_STATE(233)] = 10822,
  [SMALL_STATE(234)] = 10836,
  [SMALL_STATE(235)] = 10848,
  [SMALL_STATE(236)] = 10860,
  [SMALL_STATE(237)] = 10882,
  [SMALL_STATE(238)] = 10894,
  [SMALL_STATE(239)] = 10906,
  [SMALL_STATE(240)] = 10918,
  [SMALL_STATE(241)] = 10930,
  [SMALL_STATE(242)] = 10942,
  [SMALL_STATE(243)] = 10954,
  [SMALL_STATE(244)] = 10966,
  [SMALL_STATE(245)] = 10984,
  [SMALL_STATE(246)] = 10996,
  [SMALL_STATE(247)] = 11008,
  [SMALL_STATE(248)] = 11022,
  [SMALL_STATE(249)] = 11034,
  [SMALL_STATE(250)] = 11046,
  [SMALL_STATE(251)] = 11058,
  [SMALL_STATE(252)] = 11070,
  [SMALL_STATE(253)] = 11086,
  [SMALL_STATE(254)] = 11098,
  [SMALL_STATE(255)] = 11110,
  [SMALL_STATE(256)] = 11132,
  [SMALL_STATE(257)] = 11144,
  [SMALL_STATE(258)] = 11156,
  [SMALL_STATE(259)] = 11168,
  [SMALL_STATE(260)] = 11180,
  [SMALL_STATE(261)] = 11192,
  [SMALL_STATE(262)] = 11204,
  [SMALL_STATE(263)] = 11219,
  [SMALL_STATE(264)] = 11234,
  [SMALL_STATE(265)] = 11244,
  [SMALL_STATE(266)] = 11256,
  [SMALL_STATE(267)] = 11269,
  [SMALL_STATE(268)] = 11278,
  [SMALL_STATE(269)] = 11289,
  [SMALL_STATE(270)] = 11300,
  [SMALL_STATE(271)] = 11311,
  [SMALL_STATE(272)] = 11324,
  [SMALL_STATE(273)] = 11337,
  [SMALL_STATE(274)] = 11350,
  [SMALL_STATE(275)] = 11363,
  [SMALL_STATE(276)] = 11374,
  [SMALL_STATE(277)] = 11385,
  [SMALL_STATE(278)] = 11398,
  [SMALL_STATE(279)] = 11411,
  [SMALL_STATE(280)] = 11420,
  [SMALL_STATE(281)] = 11429,
  [SMALL_STATE(282)] = 11440,
  [SMALL_STATE(283)] = 11451,
  [SMALL_STATE(284)] = 11464,
  [SMALL_STATE(285)] = 11475,
  [SMALL_STATE(286)] = 11488,
  [SMALL_STATE(287)] = 11499,
  [SMALL_STATE(288)] = 11508,
  [SMALL_STATE(289)] = 11519,
  [SMALL_STATE(290)] = 11528,
  [SMALL_STATE(291)] = 11541,
  [SMALL_STATE(292)] = 11552,
  [SMALL_STATE(293)] = 11565,
  [SMALL_STATE(294)] = 11578,
  [SMALL_STATE(295)] = 11591,
  [SMALL_STATE(296)] = 11601,
  [SMALL_STATE(297)] = 11611,
  [SMALL_STATE(298)] = 11621,
  [SMALL_STATE(299)] = 11631,
  [SMALL_STATE(300)] = 11641,
  [SMALL_STATE(301)] = 11651,
  [SMALL_STATE(302)] = 11661,
  [SMALL_STATE(303)] = 11671,
  [SMALL_STATE(304)] = 11681,
  [SMALL_STATE(305)] = 11691,
  [SMALL_STATE(306)] = 11701,
  [SMALL_STATE(307)] = 11711,
  [SMALL_STATE(308)] = 11721,
  [SMALL_STATE(309)] = 11731,
  [SMALL_STATE(310)] = 11741,
  [SMALL_STATE(311)] = 11749,
  [SMALL_STATE(312)] = 11759,
  [SMALL_STATE(313)] = 11767,
  [SMALL_STATE(314)] = 11775,
  [SMALL_STATE(315)] = 11783,
  [SMALL_STATE(316)] = 11793,
  [SMALL_STATE(317)] = 11803,
  [SMALL_STATE(318)] = 11813,
  [SMALL_STATE(319)] = 11823,
  [SMALL_STATE(320)] = 11833,
  [SMALL_STATE(321)] = 11841,
  [SMALL_STATE(322)] = 11851,
  [SMALL_STATE(323)] = 11861,
  [SMALL_STATE(324)] = 11871,
  [SMALL_STATE(325)] = 11881,
  [SMALL_STATE(326)] = 11891,
  [SMALL_STATE(327)] = 11901,
  [SMALL_STATE(328)] = 11911,
  [SMALL_STATE(329)] = 11917,
  [SMALL_STATE(330)] = 11927,
  [SMALL_STATE(331)] = 11937,
  [SMALL_STATE(332)] = 11947,
  [SMALL_STATE(333)] = 11957,
  [SMALL_STATE(334)] = 11967,
  [SMALL_STATE(335)] = 11975,
  [SMALL_STATE(336)] = 11985,
  [SMALL_STATE(337)] = 11995,
  [SMALL_STATE(338)] = 12005,
  [SMALL_STATE(339)] = 12015,
  [SMALL_STATE(340)] = 12025,
  [SMALL_STATE(341)] = 12035,
  [SMALL_STATE(342)] = 12045,
  [SMALL_STATE(343)] = 12055,
  [SMALL_STATE(344)] = 12065,
  [SMALL_STATE(345)] = 12075,
  [SMALL_STATE(346)] = 12085,
  [SMALL_STATE(347)] = 12095,
  [SMALL_STATE(348)] = 12105,
  [SMALL_STATE(349)] = 12115,
  [SMALL_STATE(350)] = 12125,
  [SMALL_STATE(351)] = 12135,
  [SMALL_STATE(352)] = 12142,
  [SMALL_STATE(353)] = 12149,
  [SMALL_STATE(354)] = 12154,
  [SMALL_STATE(355)] = 12159,
  [SMALL_STATE(356)] = 12166,
  [SMALL_STATE(357)] = 12171,
  [SMALL_STATE(358)] = 12176,
  [SMALL_STATE(359)] = 12183,
  [SMALL_STATE(360)] = 12190,
  [SMALL_STATE(361)] = 12197,
  [SMALL_STATE(362)] = 12204,
  [SMALL_STATE(363)] = 12211,
  [SMALL_STATE(364)] = 12218,
  [SMALL_STATE(365)] = 12225,
  [SMALL_STATE(366)] = 12232,
  [SMALL_STATE(367)] = 12237,
  [SMALL_STATE(368)] = 12242,
  [SMALL_STATE(369)] = 12247,
  [SMALL_STATE(370)] = 12254,
  [SMALL_STATE(371)] = 12261,
  [SMALL_STATE(372)] = 12268,
  [SMALL_STATE(373)] = 12273,
  [SMALL_STATE(374)] = 12280,
  [SMALL_STATE(375)] = 12285,
  [SMALL_STATE(376)] = 12292,
  [SMALL_STATE(377)] = 12297,
  [SMALL_STATE(378)] = 12304,
  [SMALL_STATE(379)] = 12311,
  [SMALL_STATE(380)] = 12318,
  [SMALL_STATE(381)] = 12325,
  [SMALL_STATE(382)] = 12332,
  [SMALL_STATE(383)] = 12339,
  [SMALL_STATE(384)] = 12346,
  [SMALL_STATE(385)] = 12351,
  [SMALL_STATE(386)] = 12356,
  [SMALL_STATE(387)] = 12361,
  [SMALL_STATE(388)] = 12368,
  [SMALL_STATE(389)] = 12375,
  [SMALL_STATE(390)] = 12382,
  [SMALL_STATE(391)] = 12389,
  [SMALL_STATE(392)] = 12396,
  [SMALL_STATE(393)] = 12403,
  [SMALL_STATE(394)] = 12408,
  [SMALL_STATE(395)] = 12413,
  [SMALL_STATE(396)] = 12420,
  [SMALL_STATE(397)] = 12427,
  [SMALL_STATE(398)] = 12431,
  [SMALL_STATE(399)] = 12435,
  [SMALL_STATE(400)] = 12439,
  [SMALL_STATE(401)] = 12443,
  [SMALL_STATE(402)] = 12447,
  [SMALL_STATE(403)] = 12451,
  [SMALL_STATE(404)] = 12455,
  [SMALL_STATE(405)] = 12459,
  [SMALL_STATE(406)] = 12463,
  [SMALL_STATE(407)] = 12467,
  [SMALL_STATE(408)] = 12471,
  [SMALL_STATE(409)] = 12475,
  [SMALL_STATE(410)] = 12479,
  [SMALL_STATE(411)] = 12483,
  [SMALL_STATE(412)] = 12487,
  [SMALL_STATE(413)] = 12491,
  [SMALL_STATE(414)] = 12495,
  [SMALL_STATE(415)] = 12499,
  [SMALL_STATE(416)] = 12503,
  [SMALL_STATE(417)] = 12507,
  [SMALL_STATE(418)] = 12511,
  [SMALL_STATE(419)] = 12515,
  [SMALL_STATE(420)] = 12519,
  [SMALL_STATE(421)] = 12523,
  [SMALL_STATE(422)] = 12527,
  [SMALL_STATE(423)] = 12531,
  [SMALL_STATE(424)] = 12535,
  [SMALL_STATE(425)] = 12539,
  [SMALL_STATE(426)] = 12543,
  [SMALL_STATE(427)] = 12547,
  [SMALL_STATE(428)] = 12551,
  [SMALL_STATE(429)] = 12555,
  [SMALL_STATE(430)] = 12559,
  [SMALL_STATE(431)] = 12563,
  [SMALL_STATE(432)] = 12567,
  [SMALL_STATE(433)] = 12571,
  [SMALL_STATE(434)] = 12575,
  [SMALL_STATE(435)] = 12579,
  [SMALL_STATE(436)] = 12583,
  [SMALL_STATE(437)] = 12587,
  [SMALL_STATE(438)] = 12591,
  [SMALL_STATE(439)] = 12595,
  [SMALL_STATE(440)] = 12599,
  [SMALL_STATE(441)] = 12603,
  [SMALL_STATE(442)] = 12607,
  [SMALL_STATE(443)] = 12611,
  [SMALL_STATE(444)] = 12615,
  [SMALL_STATE(445)] = 12619,
  [SMALL_STATE(446)] = 12623,
  [SMALL_STATE(447)] = 12627,
  [SMALL_STATE(448)] = 12631,
  [SMALL_STATE(449)] = 12635,
  [SMALL_STATE(450)] = 12639,
  [SMALL_STATE(451)] = 12643,
  [SMALL_STATE(452)] = 12647,
  [SMALL_STATE(453)] = 12651,
  [SMALL_STATE(454)] = 12655,
  [SMALL_STATE(455)] = 12659,
  [SMALL_STATE(456)] = 12663,
  [SMALL_STATE(457)] = 12667,
  [SMALL_STATE(458)] = 12671,
  [SMALL_STATE(459)] = 12675,
  [SMALL_STATE(460)] = 12679,
  [SMALL_STATE(461)] = 12683,
  [SMALL_STATE(462)] = 12687,
  [SMALL_STATE(463)] = 12691,
  [SMALL_STATE(464)] = 12695,
  [SMALL_STATE(465)] = 12699,
  [SMALL_STATE(466)] = 12703,
  [SMALL_STATE(467)] = 12707,
  [SMALL_STATE(468)] = 12711,
  [SMALL_STATE(469)] = 12715,
  [SMALL_STATE(470)] = 12719,
  [SMALL_STATE(471)] = 12723,
  [SMALL_STATE(472)] = 12727,
  [SMALL_STATE(473)] = 12731,
  [SMALL_STATE(474)] = 12735,
  [SMALL_STATE(475)] = 12739,
  [SMALL_STATE(476)] = 12743,
  [SMALL_STATE(477)] = 12747,
  [SMALL_STATE(478)] = 12751,
  [SMALL_STATE(479)] = 12755,
  [SMALL_STATE(480)] = 12759,
  [SMALL_STATE(481)] = 12763,
  [SMALL_STATE(482)] = 12767,
  [SMALL_STATE(483)] = 12771,
  [SMALL_STATE(484)] = 12775,
  [SMALL_STATE(485)] = 12779,
  [SMALL_STATE(486)] = 12783,
  [SMALL_STATE(487)] = 12787,
  [SMALL_STATE(488)] = 12791,
  [SMALL_STATE(489)] = 12795,
  [SMALL_STATE(490)] = 12799,
  [SMALL_STATE(491)] = 12803,
  [SMALL_STATE(492)] = 12807,
  [SMALL_STATE(493)] = 12811,
  [SMALL_STATE(494)] = 12815,
  [SMALL_STATE(495)] = 12819,
  [SMALL_STATE(496)] = 12823,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 4, .production_id = 20),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 4, .production_id = 20),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spel_name, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 3, .production_id = 13),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 3, .production_id = 13),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 2, .production_id = 10),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 2, .production_id = 10),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spel_name, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 3, .production_id = 14),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 3, .production_id = 14),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_object_literal, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_object_literal, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_object_literal, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_object_literal, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_literal, 2, .production_id = 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_literal, 2, .production_id = 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_variable, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_variable, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 3, .production_id = 10),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 3, .production_id = 10),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 5, .production_id = 19),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 5, .production_id = 19),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 6),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_string_literal, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_string_literal, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 6, .production_id = 21),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 6, .production_id = 21),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 15),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 15),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2), SHIFT_REPEAT(51),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_string_literal, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_string_literal, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 3, .production_id = 7),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_spel_expression, 3, .production_id = 6),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_spel_expression, 3, .production_id = 6),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spel_name, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_spel_expression, 2, .production_id = 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_spel_expression, 2, .production_id = 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spel_name, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_assignement_expression, 3, .production_id = 6),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_creation, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_creation, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_literal, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_literal, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_args, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_args, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_args, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_args, 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(400),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(95),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_args, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_args, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_content_repeat1, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_creation_repeat1, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_creation_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_creation_repeat1, 2), SHIFT_REPEAT(330),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 3, .production_id = 8),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fragment_std_expression, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_map_repeat1, 4, .production_id = 19),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_th_assignation_sequence_repeat1, 4, .production_id = 23),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_parameter_assignement, 3, .production_id = 17),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_creation_repeat1, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_creation_repeat1, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_call_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_th_std_expression, 3, .production_id = 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_th_std_expression, 3, .production_id = 4),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varselect_th_std_expression, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varselect_th_std_expression, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_th_std_expression, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_th_std_expression, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_literal, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_literal, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_th_std_expression, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_th_std_expression, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment_th_std_expression, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_th_std_expression, 2),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 4, .production_id = 14),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 4, .production_id = 14),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varselect_th_std_expression, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varselect_th_std_expression, 2),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_variable, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_variable, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_access, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_access, 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 4, .production_id = 10),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 4, .production_id = 10),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_th_std_expression, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_th_std_expression, 3),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment_th_std_expression, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_th_std_expression, 3),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 4, .production_id = 13),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 4, .production_id = 13),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spel_literal, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spel_literal, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_th_std_expression, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_th_std_expression, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_access, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_access, 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_th_std_expression, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_th_std_expression, 3),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 5, .production_id = 20),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 5, .production_id = 20),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_literal, 3, .production_id = 5),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_literal, 3, .production_id = 5),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_value, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 6, .production_id = 19),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 6, .production_id = 19),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5, .production_id = 24),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, .production_id = 24),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_string_literal, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_string_literal, 4),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 4),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 4),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_content, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_content, 3),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_creation_expression, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_creation_expression, 2),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_object_literal, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_object_literal, 3),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_content, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_content, 2),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 5),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 5),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 7, .production_id = 21),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 7, .production_id = 21),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 2),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_creation, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_creation, 4),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_parenthesized_expression, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_parenthesized_expression, 3),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_content, 4),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_content, 4),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(452),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(309),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(487),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(179),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(477),
  [724] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(318),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(459),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(180),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_than, 1),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lesser_than, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substract, 1),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substract, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divide, 1),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divide, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply, 1),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply, 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 1),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2),
  [771] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(195),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(195),
  [777] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(236),
  [780] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(292),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(4),
  [786] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(5),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_new, 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(172),
  [834] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(264),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2), SHIFT_REPEAT(223),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(173),
  [859] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(287),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(270),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 2),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat1, 2),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat1, 2), SHIFT_REPEAT(473),
  [1006] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat1, 2), SHIFT_REPEAT(373),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 6, .production_id = 1),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_th_attribute, 6, .production_id = 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 3),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [1041] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 4),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1069] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_th_fragment_declaration_repeat1, 2), SHIFT_REPEAT(463),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_th_fragment_declaration_repeat1, 2),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1096] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_content_repeat1, 2), SHIFT_REPEAT(22),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 4, .production_id = 11),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 4, .production_id = 8),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterized_url_fragment, 3),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 1),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 5, .production_id = 11),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_th_assignation_sequence_repeat1, 2, .production_id = 16),
  [1141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_th_assignation_sequence_repeat1, 2, .production_id = 16), SHIFT_REPEAT(370),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat2, 2), SHIFT_REPEAT(300),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat2, 2),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spel_method_args_repeat1, 2), SHIFT_REPEAT(194),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spel_method_args_repeat1, 2),
  [1164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_call_repeat1, 2), SHIFT_REPEAT(73),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_map_repeat1, 2, .production_id = 22), SHIFT_REPEAT(29),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_map_repeat1, 2, .production_id = 22),
  [1182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_adress_repeat1, 2), SHIFT_REPEAT(247),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_parameter, 1),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 3),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_adress, 2),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 3),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 4),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 1, .production_id = 3),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 5),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fragment_std_expression, 3),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_element, 1),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_adress, 1),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_generic, 1),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_type, 1),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integral_type, 1),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_none, 1),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remove_none, 1),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_operator, 1),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 4, .production_id = 12),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_adress_repeat1, 2),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 8),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 3, .production_id = 9),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 7),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_fragment_declaration, 5),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 6),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_each_value, 5),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iterStat, 1),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_each_value, 3),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_fragment_declaration, 4),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_fragment_declaration, 3),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 5, .production_id = 18),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1395] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 5),
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
