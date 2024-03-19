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
#define STATE_COUNT 447
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 231
#define ALIAS_COUNT 0
#define TOKEN_COUNT 128
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 19

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
  anon_sym_not = 95,
  aux_sym_object_creation_expression_token1 = 96,
  sym_spel_greater_or_equal = 97,
  sym_spel_lower_or_equal = 98,
  sym_spel_in = 99,
  sym_spel_not_in = 100,
  sym_spel_new = 101,
  sym_spel_instanceof = 102,
  sym_spel_bit_shift_left = 103,
  sym_spel_bit_shift_left_2 = 104,
  sym_spel_bit_shift_right = 105,
  sym_spel_bit_shift_right_2 = 106,
  sym_spel_logical_shift_right = 107,
  sym_spel_logical_shift_right_2 = 108,
  sym_bitwise_and = 109,
  sym_bitwise_and_2 = 110,
  sym_bor = 111,
  sym_xor = 112,
  sym_xor_2 = 113,
  anon_sym_AT = 114,
  aux_sym_spel_object_literal_token1 = 115,
  aux_sym_spel_object_literal_token2 = 116,
  anon_sym_DOT_LBRACE = 117,
  anon_sym_LBRACK = 118,
  anon_sym_RBRACK = 119,
  sym__start_tag_name = 120,
  sym__script_start_tag_name = 121,
  sym__style_start_tag_name = 122,
  sym__end_tag_name = 123,
  sym_erroneous_end_tag_name = 124,
  sym__implicit_end_tag = 125,
  sym_raw_text = 126,
  sym_comment = 127,
  sym_document = 128,
  sym_doctype = 129,
  sym__node = 130,
  sym_element = 131,
  sym_script_element = 132,
  sym_style_element = 133,
  sym_start_tag = 134,
  sym__attributes = 135,
  sym_th_attribute_value = 136,
  sym_script_start_tag = 137,
  sym_style_start_tag = 138,
  sym_self_closing_tag = 139,
  sym_end_tag = 140,
  sym_erroneous_end_tag = 141,
  sym_th_attribute = 142,
  sym_attribute = 143,
  sym_attribute_name = 144,
  sym__th_inline_value = 145,
  sym_th_each_value = 146,
  sym_iterStat = 147,
  sym_each_element = 148,
  sym__th_remove_value = 149,
  sym_remove_none = 150,
  sym_inline_text = 151,
  sym_inline_none = 152,
  sym_th_fragment_declaration = 153,
  sym_th_assignation_sequence = 154,
  sym__th_generic = 155,
  sym__th_fragments_insert = 156,
  sym__th_spel_only = 157,
  sym__th_assignation_sequence = 158,
  sym_th_generic = 159,
  sym_quoted_attribute_value = 160,
  sym__literal = 161,
  sym_number_literal = 162,
  sym_integer_literal = 163,
  sym_float_literal = 164,
  sym_double_literal = 165,
  sym_token_literal = 166,
  sym_string_literal = 167,
  sym_interpolated_string_literal = 168,
  sym__interpreted_string_literal = 169,
  sym_greater_than = 170,
  sym_lesser_than = 171,
  sym_add = 172,
  sym_substract = 173,
  sym_multiply = 174,
  sym_divide = 175,
  sym__th_std_expression = 176,
  sym_fragment_th_std_expression = 177,
  sym_url_th_std_expression = 178,
  sym_message_th_std_expression = 179,
  sym_varselect_th_std_expression = 180,
  sym_spel_th_std_expression = 181,
  sym__url_std_expression = 182,
  sym__fragment_std_expression = 183,
  sym_fragment_call = 184,
  sym_url_parameter_assignement = 185,
  sym_url_parameter = 186,
  sym_parameterized_url_fragment = 187,
  sym_message_name = 188,
  sym__message_std_expression = 189,
  sym_ternary_th_std_expression = 190,
  sym_unary_th_std_expression = 191,
  sym_parenthesized_th_std_expression = 192,
  sym_binary_th_std_expression = 193,
  sym__spel_std_expression = 194,
  sym_spel_parenthesized_expression = 195,
  sym_unary_spel_expression = 196,
  sym__spel_primary_expression = 197,
  sym__spel_literal = 198,
  sym_inline_list = 199,
  sym_object_creation_expression = 200,
  sym_spel_assignement_expression = 201,
  sym_bor_2 = 202,
  sym_binary_spel_expression = 203,
  sym_spel_variable = 204,
  sym__spel_post_accessor = 205,
  sym_spel_java_class = 206,
  sym__spel_post_java_class = 207,
  sym_spel_java_method = 208,
  sym_spel_java_field = 209,
  sym_spel_object_literal = 210,
  sym_spel_projection = 211,
  sym_spel_property_access = 212,
  sym_spel_method_access = 213,
  sym_spel_method_literal = 214,
  sym_spel_method_name = 215,
  sym_spel_method_args = 216,
  aux_sym_document_repeat1 = 217,
  aux_sym_start_tag_repeat1 = 218,
  aux_sym_th_fragment_declaration_repeat1 = 219,
  aux_sym_th_assignation_sequence_repeat1 = 220,
  aux_sym_token_literal_repeat1 = 221,
  aux_sym_interpolated_string_literal_repeat1 = 222,
  aux_sym__interpreted_string_literal_repeat1 = 223,
  aux_sym__url_std_expression_repeat1 = 224,
  aux_sym__url_std_expression_repeat2 = 225,
  aux_sym_fragment_call_repeat1 = 226,
  aux_sym_inline_list_repeat1 = 227,
  aux_sym_spel_java_class_repeat1 = 228,
  aux_sym_spel_object_literal_repeat1 = 229,
  aux_sym_spel_method_args_repeat1 = 230,
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
  [anon_sym_not] = "not",
  [aux_sym_object_creation_expression_token1] = "object_creation_expression_token1",
  [sym_spel_greater_or_equal] = "spel_greater_or_equal",
  [sym_spel_lower_or_equal] = "spel_lower_or_equal",
  [sym_spel_in] = "spel_in",
  [sym_spel_not_in] = "spel_not_in",
  [sym_spel_new] = "spel_new",
  [sym_spel_instanceof] = "spel_instanceof",
  [sym_spel_bit_shift_left] = "spel_bit_shift_left",
  [sym_spel_bit_shift_left_2] = "spel_bit_shift_left_2",
  [sym_spel_bit_shift_right] = "spel_bit_shift_right",
  [sym_spel_bit_shift_right_2] = "spel_bit_shift_right_2",
  [sym_spel_logical_shift_right] = "spel_logical_shift_right",
  [sym_spel_logical_shift_right_2] = "spel_logical_shift_right_2",
  [sym_bitwise_and] = "bitwise_and",
  [sym_bitwise_and_2] = "bitwise_and_2",
  [sym_bor] = "bor",
  [sym_xor] = "xor",
  [sym_xor_2] = "xor_2",
  [anon_sym_AT] = "@",
  [aux_sym_spel_object_literal_token1] = "spel_object_literal_token1",
  [aux_sym_spel_object_literal_token2] = "spel_object_literal_token2",
  [anon_sym_DOT_LBRACE] = ".{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_spel_parenthesized_expression] = "spel_parenthesized_expression",
  [sym_unary_spel_expression] = "unary_spel_expression",
  [sym__spel_primary_expression] = "_spel_primary_expression",
  [sym__spel_literal] = "_spel_literal",
  [sym_inline_list] = "inline_list",
  [sym_object_creation_expression] = "object_creation_expression",
  [sym_spel_assignement_expression] = "spel_assignement_expression",
  [sym_bor_2] = "bor_2",
  [sym_binary_spel_expression] = "binary_spel_expression",
  [sym_spel_variable] = "spel_variable",
  [sym__spel_post_accessor] = "_spel_post_accessor",
  [sym_spel_java_class] = "spel_java_class",
  [sym__spel_post_java_class] = "_spel_post_java_class",
  [sym_spel_java_method] = "spel_java_method",
  [sym_spel_java_field] = "spel_java_field",
  [sym_spel_object_literal] = "spel_object_literal",
  [sym_spel_projection] = "spel_projection",
  [sym_spel_property_access] = "spel_property_access",
  [sym_spel_method_access] = "spel_method_access",
  [sym_spel_method_literal] = "spel_method_literal",
  [sym_spel_method_name] = "spel_method_name",
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
  [aux_sym_inline_list_repeat1] = "inline_list_repeat1",
  [aux_sym_spel_java_class_repeat1] = "spel_java_class_repeat1",
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
  [anon_sym_not] = anon_sym_not,
  [aux_sym_object_creation_expression_token1] = aux_sym_object_creation_expression_token1,
  [sym_spel_greater_or_equal] = sym_spel_greater_or_equal,
  [sym_spel_lower_or_equal] = sym_spel_lower_or_equal,
  [sym_spel_in] = sym_spel_in,
  [sym_spel_not_in] = sym_spel_not_in,
  [sym_spel_new] = sym_spel_new,
  [sym_spel_instanceof] = sym_spel_instanceof,
  [sym_spel_bit_shift_left] = sym_spel_bit_shift_left,
  [sym_spel_bit_shift_left_2] = sym_spel_bit_shift_left_2,
  [sym_spel_bit_shift_right] = sym_spel_bit_shift_right,
  [sym_spel_bit_shift_right_2] = sym_spel_bit_shift_right_2,
  [sym_spel_logical_shift_right] = sym_spel_logical_shift_right,
  [sym_spel_logical_shift_right_2] = sym_spel_logical_shift_right_2,
  [sym_bitwise_and] = sym_bitwise_and,
  [sym_bitwise_and_2] = sym_bitwise_and_2,
  [sym_bor] = sym_bor,
  [sym_xor] = sym_xor,
  [sym_xor_2] = sym_xor_2,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_spel_object_literal_token1] = aux_sym_spel_object_literal_token1,
  [aux_sym_spel_object_literal_token2] = aux_sym_spel_object_literal_token2,
  [anon_sym_DOT_LBRACE] = anon_sym_DOT_LBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_spel_parenthesized_expression] = sym_spel_parenthesized_expression,
  [sym_unary_spel_expression] = sym_unary_spel_expression,
  [sym__spel_primary_expression] = sym__spel_primary_expression,
  [sym__spel_literal] = sym__spel_literal,
  [sym_inline_list] = sym_inline_list,
  [sym_object_creation_expression] = sym_object_creation_expression,
  [sym_spel_assignement_expression] = sym_spel_assignement_expression,
  [sym_bor_2] = sym_bor_2,
  [sym_binary_spel_expression] = sym_binary_spel_expression,
  [sym_spel_variable] = sym_spel_variable,
  [sym__spel_post_accessor] = sym__spel_post_accessor,
  [sym_spel_java_class] = sym_spel_java_class,
  [sym__spel_post_java_class] = sym__spel_post_java_class,
  [sym_spel_java_method] = sym_spel_java_method,
  [sym_spel_java_field] = sym_spel_java_field,
  [sym_spel_object_literal] = sym_spel_object_literal,
  [sym_spel_projection] = sym_spel_projection,
  [sym_spel_property_access] = sym_spel_property_access,
  [sym_spel_method_access] = sym_spel_method_access,
  [sym_spel_method_literal] = sym_spel_method_literal,
  [sym_spel_method_name] = sym_spel_method_name,
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
  [aux_sym_inline_list_repeat1] = aux_sym_inline_list_repeat1,
  [aux_sym_spel_java_class_repeat1] = aux_sym_spel_java_class_repeat1,
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
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_creation_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_spel_greater_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_lower_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_in] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_not_in] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_new] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_instanceof] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_bit_shift_left] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_bit_shift_left_2] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_bit_shift_right] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_bit_shift_right_2] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_logical_shift_right] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_logical_shift_right_2] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_and] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_and_2] = {
    .visible = true,
    .named = true,
  },
  [sym_bor] = {
    .visible = true,
    .named = true,
  },
  [sym_xor] = {
    .visible = true,
    .named = true,
  },
  [sym_xor_2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
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
  [anon_sym_DOT_LBRACE] = {
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
  [sym_inline_list] = {
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
  [sym_bor_2] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_spel_expression] = {
    .visible = true,
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
  [sym_spel_java_class] = {
    .visible = true,
    .named = true,
  },
  [sym__spel_post_java_class] = {
    .visible = false,
    .named = true,
  },
  [sym_spel_java_method] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_java_field] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_object_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_projection] = {
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
  [sym_spel_method_name] = {
    .visible = true,
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
  [aux_sym_inline_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_spel_java_class_repeat1] = {
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
  field_condition = 5,
  field_consequence = 6,
  field_left = 7,
  field_message = 8,
  field_name = 9,
  field_operand = 10,
  field_operator = 11,
  field_param = 12,
  field_right = 13,
  field_value = 14,
  field_var = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_args] = "args",
  [field_attribute_name] = "attribute_name",
  [field_attribute_value] = "attribute_value",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
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
  [14] = {.index = 27, .length = 3},
  [15] = {.index = 30, .length = 2},
  [16] = {.index = 32, .length = 2},
  [17] = {.index = 34, .length = 5},
  [18] = {.index = 39, .length = 1},
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
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [30] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [32] =
    {field_param, 0},
    {field_value, 2},
  [34] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_args, 4},
    {field_message, 0},
  [39] =
    {field_value, 3},
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
  [9] = 9,
  [10] = 10,
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
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 27,
  [34] = 29,
  [35] = 35,
  [36] = 28,
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
  [67] = 63,
  [68] = 64,
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
  [79] = 69,
  [80] = 80,
  [81] = 81,
  [82] = 70,
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
  [99] = 90,
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
  [128] = 59,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 51,
  [136] = 136,
  [137] = 137,
  [138] = 54,
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
  [149] = 147,
  [150] = 150,
  [151] = 151,
  [152] = 151,
  [153] = 153,
  [154] = 153,
  [155] = 155,
  [156] = 156,
  [157] = 155,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 164,
  [166] = 162,
  [167] = 161,
  [168] = 160,
  [169] = 158,
  [170] = 163,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 3,
  [175] = 2,
  [176] = 130,
  [177] = 140,
  [178] = 178,
  [179] = 136,
  [180] = 133,
  [181] = 129,
  [182] = 131,
  [183] = 5,
  [184] = 139,
  [185] = 6,
  [186] = 186,
  [187] = 132,
  [188] = 188,
  [189] = 189,
  [190] = 189,
  [191] = 17,
  [192] = 4,
  [193] = 188,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 194,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 201,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 202,
  [209] = 209,
  [210] = 210,
  [211] = 209,
  [212] = 212,
  [213] = 212,
  [214] = 214,
  [215] = 215,
  [216] = 214,
  [217] = 210,
  [218] = 206,
  [219] = 219,
  [220] = 220,
  [221] = 215,
  [222] = 222,
  [223] = 223,
  [224] = 205,
  [225] = 200,
  [226] = 220,
  [227] = 204,
  [228] = 222,
  [229] = 223,
  [230] = 230,
  [231] = 230,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 235,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 242,
  [245] = 243,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 233,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 239,
  [255] = 255,
  [256] = 238,
  [257] = 232,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 234,
  [266] = 258,
  [267] = 259,
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
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 246,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 272,
  [301] = 288,
  [302] = 293,
  [303] = 303,
  [304] = 292,
  [305] = 287,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 308,
  [314] = 314,
  [315] = 311,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 314,
  [325] = 312,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 323,
  [332] = 332,
  [333] = 321,
  [334] = 334,
  [335] = 310,
  [336] = 336,
  [337] = 337,
  [338] = 338,
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
  [349] = 320,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
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
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
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
  [398] = 374,
  [399] = 373,
  [400] = 371,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 357,
  [408] = 355,
  [409] = 409,
  [410] = 410,
  [411] = 394,
  [412] = 412,
  [413] = 413,
  [414] = 392,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 418,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 388,
  [425] = 425,
  [426] = 416,
  [427] = 412,
  [428] = 428,
  [429] = 354,
  [430] = 386,
  [431] = 385,
  [432] = 384,
  [433] = 383,
  [434] = 382,
  [435] = 381,
  [436] = 380,
  [437] = 379,
  [438] = 406,
  [439] = 405,
  [440] = 404,
  [441] = 403,
  [442] = 402,
  [443] = 401,
  [444] = 395,
  [445] = 393,
  [446] = 415,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(112);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(110)
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '$') ADVANCE(322);
      if (lookahead == '%') ADVANCE(366);
      if (lookahead == '&') ADVANCE(431);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '*') ADVANCE(324);
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '/') ADVANCE(365);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == '[') ADVANCE(477);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead == ']') ADVANCE(478);
      if (lookahead == '^') ADVANCE(438);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == 'b') ADVANCE(465);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'f') ADVANCE(287);
      if (lookahead == 'g') ADVANCE(474);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead == 's') ADVANCE(467);
      if (lookahead == 'u') ADVANCE(473);
      if (lookahead == 'x') ADVANCE(470);
      if (lookahead == '{') ADVANCE(377);
      if (lookahead == '|') ADVANCE(318);
      if (lookahead == '}') ADVANCE(368);
      if (lookahead == '~') ADVANCE(321);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(110)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(355);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(345);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(344);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(124);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(432);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(419);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(200);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'q') ADVANCE(346);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 65:
      if (lookahead == 'x') ADVANCE(59);
      END_STATE();
    case 66:
      if (lookahead == 'y') ADVANCE(199);
      END_STATE();
    case 67:
      if (lookahead == '{') ADVANCE(370);
      END_STATE();
    case 68:
      if (lookahead == '{') ADVANCE(372);
      END_STATE();
    case 69:
      if (lookahead == '{') ADVANCE(371);
      END_STATE();
    case 70:
      if (lookahead == '{') ADVANCE(369);
      END_STATE();
    case 71:
      if (lookahead == '{') ADVANCE(367);
      END_STATE();
    case 72:
      if (lookahead == '|') ADVANCE(359);
      END_STATE();
    case 73:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(73)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(366);
      if (lookahead == '&') ADVANCE(431);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '/') ADVANCE(364);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == '[') ADVANCE(477);
      if (lookahead == ']') ADVANCE(478);
      if (lookahead == '^') ADVANCE(438);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == 'b') ADVANCE(465);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'g') ADVANCE(474);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead == 's') ADVANCE(467);
      if (lookahead == 'u') ADVANCE(473);
      if (lookahead == 'x') ADVANCE(470);
      if (lookahead == '|') ADVANCE(318);
      if (lookahead == '}') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 74:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(74)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(366);
      if (lookahead == '&') ADVANCE(431);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '/') ADVANCE(364);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == ']') ADVANCE(478);
      if (lookahead == '^') ADVANCE(438);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'b') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == 'g') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(395);
      if (lookahead == 'l') ADVANCE(407);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead == 'u') ADVANCE(405);
      if (lookahead == 'x') ADVANCE(399);
      if (lookahead == '|') ADVANCE(318);
      if (lookahead == '}') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 75:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(75)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(366);
      if (lookahead == '&') ADVANCE(431);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '/') ADVANCE(364);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == ']') ADVANCE(478);
      if (lookahead == '^') ADVANCE(438);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(287);
      if (lookahead == 'g') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'j') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(43);
      if (lookahead == '|') ADVANCE(318);
      if (lookahead == '}') ADVANCE(368);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(75)
      END_STATE();
    case 76:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(76)
      if (lookahead == '!') ADVANCE(379);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == 'f') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead == 't') ADVANCE(456);
      if (lookahead == '{') ADVANCE(377);
      if (lookahead == '}') ADVANCE(368);
      if (lookahead == '~') ADVANCE(321);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 77:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(77)
      if (lookahead == '!') ADVANCE(379);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == '-') ADVANCE(362);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead == '|') ADVANCE(317);
      if (lookahead == '}') ADVANCE(368);
      if (lookahead == '~') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(77)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 78:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(78)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '%') ADVANCE(366);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(364);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead == '<') ADVANCE(123);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(117);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'g') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '}') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(78)
      END_STATE();
    case 79:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(79)
      if (lookahead == '!') ADVANCE(379);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead == '|') ADVANCE(317);
      if (lookahead == '~') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 80:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(80)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '%') ADVANCE(366);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == '/') ADVANCE(364);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead == '<') ADVANCE(123);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(117);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'g') ADVANCE(295);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '}') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(80)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 81:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(81)
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == 'f') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 'n') ADVANCE(445);
      if (lookahead == 't') ADVANCE(456);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 82:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(82)
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == 'w') ADVANCE(161);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(82)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 83:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(327);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '$') ADVANCE(322);
      if (lookahead == '*') ADVANCE(324);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '|') ADVANCE(317);
      if (lookahead == '~') ADVANCE(321);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 84:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(84)
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '[') ADVANCE(477);
      if (lookahead == '}') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(84)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 85:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(85)
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead == 't') ADVANCE(159);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(194);
      END_STATE();
    case 86:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(86)
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == '/') ADVANCE(364);
      if (lookahead == '{') ADVANCE(377);
      if (lookahead == '}') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(86)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 87:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(325);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 88:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(88)
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '}') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 89:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(89)
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(89)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(226);
      END_STATE();
    case 90:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(90)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(90)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 91:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(91)
      if (lookahead == '"') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(91)
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 92:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(92)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(92)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 93:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(207);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(208);
      END_STATE();
    case 94:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 95:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(270);
      if (lookahead == '"') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 96:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(209);
      if (lookahead == ')') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(210);
      END_STATE();
    case 97:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(97)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(97)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 98:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(115);
      END_STATE();
    case 99:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(99)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(99)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 102:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 103:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 104:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 105:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 106:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 107:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(272);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 109:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(329);
      END_STATE();
    case 110:
      if (eof) ADVANCE(112);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(110)
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '$') ADVANCE(322);
      if (lookahead == '%') ADVANCE(366);
      if (lookahead == '&') ADVANCE(431);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '*') ADVANCE(324);
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '/') ADVANCE(365);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == '[') ADVANCE(477);
      if (lookahead == ']') ADVANCE(478);
      if (lookahead == '^') ADVANCE(438);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == 'b') ADVANCE(465);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'f') ADVANCE(287);
      if (lookahead == 'g') ADVANCE(474);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead == 's') ADVANCE(467);
      if (lookahead == 'u') ADVANCE(473);
      if (lookahead == 'x') ADVANCE(470);
      if (lookahead == '{') ADVANCE(377);
      if (lookahead == '|') ADVANCE(318);
      if (lookahead == '}') ADVANCE(368);
      if (lookahead == '~') ADVANCE(321);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(110)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 111:
      if (eof) ADVANCE(112);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(111)
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '<') ADVANCE(120);
      if (lookahead == '>') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(111)
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(338);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '>') ADVANCE(425);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '<') ADVANCE(422);
      if (lookahead == '=') ADVANCE(341);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(422);
      if (lookahead == '=') ADVANCE(341);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(341);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_th_COLON);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(344);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'b') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'g') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'j') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'p') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'p') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'p') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'v') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'w') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(373);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_iterStat_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_remove_all);
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_remove_body);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_remove_tag);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_remove_abf);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_inline_javascript);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_fragment_name);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(207);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_fragment_name);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_fragment_arg);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_fragment_arg);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_th_insert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_th_replace);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_th_each);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_th_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_th_unless);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_th_switch);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_th_case);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_th_object);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_th_with);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_th_attr);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_th_attrappend);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_th_attrprepend);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_th_remove);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_th_fragment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_th_inline);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(194);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(268);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_true_literal);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_true_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_true_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_false_literal);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_false_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_false_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_null_literal);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_null_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '{') ADVANCE(476);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(298);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'd') ADVANCE(354);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(273);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(276);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(309);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(279);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(281);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(299);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'q') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(311);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(312);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(292);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(291);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(293);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(302);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(359);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(370);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(372);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '{') ADVANCE(371);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(325);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(327);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == 'e') ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == 'e') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_equal_2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_not_equal_2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_not_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_and);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_and);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_and_2);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_or);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_or);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_or_2);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '>') ADVANCE(124);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_TILDE_LBRACE);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_STAR_LBRACE);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_standard_url);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_standard_url_fragment);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_url_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(345);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_not);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == ' ') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'a') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'c') ADVANCE(389);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'd') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'd') ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'o') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'e') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'f') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'h') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'h') ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'l') ADVANCE(424);
      if (lookahead == 'r') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'n') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'n') ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'n') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'n') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'q') ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'r') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'r') ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'r') ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'r') ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 's') ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_spel_greater_or_equal);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_spel_greater_or_equal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_spel_lower_or_equal);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_spel_lower_or_equal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_spel_in);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_spel_in);
      if (lookahead == 's') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_spel_not_in);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_spel_new);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_spel_instanceof);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_spel_instanceof);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_spel_instanceof);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_spel_bit_shift_left);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_spel_bit_shift_left_2);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_spel_bit_shift_left_2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_spel_bit_shift_right);
      if (lookahead == '>') ADVANCE(428);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_spel_bit_shift_right_2);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_spel_bit_shift_right_2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_spel_logical_shift_right);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_spel_logical_shift_right_2);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_spel_logical_shift_right_2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_bitwise_and);
      if (lookahead == '&') ADVANCE(355);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_bitwise_and_2);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_bitwise_and_2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_bor);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_bor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_xor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_xor_2);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '{') ADVANCE(369);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'a') ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'a') ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'c') ADVANCE(448);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(459);
      if (lookahead == 'u') ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'u') ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'e') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'e') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'e') ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'f') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'l') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'l') ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'l') ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'n') ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'n') ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'o') ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'r') ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 's') ADVANCE(460);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 's') ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 't') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 't') ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'u') ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'w') ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'q') ADVANCE(346);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_DOT_LBRACE);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 111, .external_lex_state = 2},
  [2] = {.lex_state = 73},
  [3] = {.lex_state = 73},
  [4] = {.lex_state = 73},
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 73},
  [7] = {.lex_state = 73},
  [8] = {.lex_state = 73},
  [9] = {.lex_state = 73},
  [10] = {.lex_state = 73},
  [11] = {.lex_state = 73},
  [12] = {.lex_state = 73},
  [13] = {.lex_state = 73},
  [14] = {.lex_state = 73},
  [15] = {.lex_state = 73},
  [16] = {.lex_state = 73},
  [17] = {.lex_state = 73},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 73},
  [20] = {.lex_state = 73},
  [21] = {.lex_state = 73},
  [22] = {.lex_state = 73},
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 73},
  [25] = {.lex_state = 73},
  [26] = {.lex_state = 73},
  [27] = {.lex_state = 73},
  [28] = {.lex_state = 73},
  [29] = {.lex_state = 73},
  [30] = {.lex_state = 73},
  [31] = {.lex_state = 73},
  [32] = {.lex_state = 73},
  [33] = {.lex_state = 73},
  [34] = {.lex_state = 73},
  [35] = {.lex_state = 73},
  [36] = {.lex_state = 73},
  [37] = {.lex_state = 73},
  [38] = {.lex_state = 74},
  [39] = {.lex_state = 73},
  [40] = {.lex_state = 73},
  [41] = {.lex_state = 73},
  [42] = {.lex_state = 75},
  [43] = {.lex_state = 73},
  [44] = {.lex_state = 73},
  [45] = {.lex_state = 73},
  [46] = {.lex_state = 73},
  [47] = {.lex_state = 73},
  [48] = {.lex_state = 73},
  [49] = {.lex_state = 73},
  [50] = {.lex_state = 73},
  [51] = {.lex_state = 73},
  [52] = {.lex_state = 73},
  [53] = {.lex_state = 73},
  [54] = {.lex_state = 73},
  [55] = {.lex_state = 73},
  [56] = {.lex_state = 73},
  [57] = {.lex_state = 73},
  [58] = {.lex_state = 73},
  [59] = {.lex_state = 73},
  [60] = {.lex_state = 73},
  [61] = {.lex_state = 73},
  [62] = {.lex_state = 73},
  [63] = {.lex_state = 76},
  [64] = {.lex_state = 76},
  [65] = {.lex_state = 76},
  [66] = {.lex_state = 77},
  [67] = {.lex_state = 76},
  [68] = {.lex_state = 76},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 77},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 76},
  [73] = {.lex_state = 76},
  [74] = {.lex_state = 76},
  [75] = {.lex_state = 76},
  [76] = {.lex_state = 76},
  [77] = {.lex_state = 76},
  [78] = {.lex_state = 76},
  [79] = {.lex_state = 76},
  [80] = {.lex_state = 76},
  [81] = {.lex_state = 76},
  [82] = {.lex_state = 77},
  [83] = {.lex_state = 76},
  [84] = {.lex_state = 76},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 76},
  [87] = {.lex_state = 78},
  [88] = {.lex_state = 78},
  [89] = {.lex_state = 78},
  [90] = {.lex_state = 79},
  [91] = {.lex_state = 78},
  [92] = {.lex_state = 78},
  [93] = {.lex_state = 78},
  [94] = {.lex_state = 78},
  [95] = {.lex_state = 79},
  [96] = {.lex_state = 78},
  [97] = {.lex_state = 78},
  [98] = {.lex_state = 79},
  [99] = {.lex_state = 79},
  [100] = {.lex_state = 79},
  [101] = {.lex_state = 79},
  [102] = {.lex_state = 79},
  [103] = {.lex_state = 79},
  [104] = {.lex_state = 79},
  [105] = {.lex_state = 79},
  [106] = {.lex_state = 79},
  [107] = {.lex_state = 79},
  [108] = {.lex_state = 79},
  [109] = {.lex_state = 79},
  [110] = {.lex_state = 79},
  [111] = {.lex_state = 79},
  [112] = {.lex_state = 79},
  [113] = {.lex_state = 79},
  [114] = {.lex_state = 79},
  [115] = {.lex_state = 80},
  [116] = {.lex_state = 80},
  [117] = {.lex_state = 78},
  [118] = {.lex_state = 80},
  [119] = {.lex_state = 78},
  [120] = {.lex_state = 78},
  [121] = {.lex_state = 78},
  [122] = {.lex_state = 78},
  [123] = {.lex_state = 78},
  [124] = {.lex_state = 78},
  [125] = {.lex_state = 78},
  [126] = {.lex_state = 78},
  [127] = {.lex_state = 78},
  [128] = {.lex_state = 78},
  [129] = {.lex_state = 78},
  [130] = {.lex_state = 78},
  [131] = {.lex_state = 78},
  [132] = {.lex_state = 78},
  [133] = {.lex_state = 78},
  [134] = {.lex_state = 78},
  [135] = {.lex_state = 78},
  [136] = {.lex_state = 78},
  [137] = {.lex_state = 78},
  [138] = {.lex_state = 78},
  [139] = {.lex_state = 78},
  [140] = {.lex_state = 78},
  [141] = {.lex_state = 78},
  [142] = {.lex_state = 78},
  [143] = {.lex_state = 78},
  [144] = {.lex_state = 78},
  [145] = {.lex_state = 78},
  [146] = {.lex_state = 81},
  [147] = {.lex_state = 82},
  [148] = {.lex_state = 81},
  [149] = {.lex_state = 82},
  [150] = {.lex_state = 81},
  [151] = {.lex_state = 111, .external_lex_state = 3},
  [152] = {.lex_state = 111, .external_lex_state = 3},
  [153] = {.lex_state = 111, .external_lex_state = 3},
  [154] = {.lex_state = 111, .external_lex_state = 3},
  [155] = {.lex_state = 111, .external_lex_state = 2},
  [156] = {.lex_state = 111, .external_lex_state = 2},
  [157] = {.lex_state = 111, .external_lex_state = 3},
  [158] = {.lex_state = 76},
  [159] = {.lex_state = 76},
  [160] = {.lex_state = 76},
  [161] = {.lex_state = 76},
  [162] = {.lex_state = 76},
  [163] = {.lex_state = 79},
  [164] = {.lex_state = 79},
  [165] = {.lex_state = 76},
  [166] = {.lex_state = 79},
  [167] = {.lex_state = 79},
  [168] = {.lex_state = 79},
  [169] = {.lex_state = 79},
  [170] = {.lex_state = 76},
  [171] = {.lex_state = 83},
  [172] = {.lex_state = 83},
  [173] = {.lex_state = 83},
  [174] = {.lex_state = 84},
  [175] = {.lex_state = 84},
  [176] = {.lex_state = 83},
  [177] = {.lex_state = 83},
  [178] = {.lex_state = 84},
  [179] = {.lex_state = 83},
  [180] = {.lex_state = 83},
  [181] = {.lex_state = 83},
  [182] = {.lex_state = 83},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 83},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 84},
  [187] = {.lex_state = 83},
  [188] = {.lex_state = 85, .external_lex_state = 4},
  [189] = {.lex_state = 85, .external_lex_state = 4},
  [190] = {.lex_state = 85, .external_lex_state = 4},
  [191] = {.lex_state = 84},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 85, .external_lex_state = 4},
  [194] = {.lex_state = 85, .external_lex_state = 4},
  [195] = {.lex_state = 85},
  [196] = {.lex_state = 85},
  [197] = {.lex_state = 85},
  [198] = {.lex_state = 85},
  [199] = {.lex_state = 85},
  [200] = {.lex_state = 111, .external_lex_state = 2},
  [201] = {.lex_state = 86},
  [202] = {.lex_state = 111, .external_lex_state = 3},
  [203] = {.lex_state = 86},
  [204] = {.lex_state = 111, .external_lex_state = 2},
  [205] = {.lex_state = 111, .external_lex_state = 2},
  [206] = {.lex_state = 111, .external_lex_state = 3},
  [207] = {.lex_state = 111, .external_lex_state = 3},
  [208] = {.lex_state = 111, .external_lex_state = 2},
  [209] = {.lex_state = 111, .external_lex_state = 3},
  [210] = {.lex_state = 111, .external_lex_state = 2},
  [211] = {.lex_state = 111, .external_lex_state = 2},
  [212] = {.lex_state = 111, .external_lex_state = 2},
  [213] = {.lex_state = 111, .external_lex_state = 3},
  [214] = {.lex_state = 111, .external_lex_state = 3},
  [215] = {.lex_state = 111, .external_lex_state = 3},
  [216] = {.lex_state = 111, .external_lex_state = 2},
  [217] = {.lex_state = 111, .external_lex_state = 3},
  [218] = {.lex_state = 111, .external_lex_state = 2},
  [219] = {.lex_state = 111, .external_lex_state = 3},
  [220] = {.lex_state = 111, .external_lex_state = 3},
  [221] = {.lex_state = 111, .external_lex_state = 2},
  [222] = {.lex_state = 111, .external_lex_state = 2},
  [223] = {.lex_state = 75},
  [224] = {.lex_state = 111, .external_lex_state = 3},
  [225] = {.lex_state = 111, .external_lex_state = 3},
  [226] = {.lex_state = 111, .external_lex_state = 2},
  [227] = {.lex_state = 111, .external_lex_state = 3},
  [228] = {.lex_state = 111, .external_lex_state = 3},
  [229] = {.lex_state = 75},
  [230] = {.lex_state = 75},
  [231] = {.lex_state = 75},
  [232] = {.lex_state = 85, .external_lex_state = 4},
  [233] = {.lex_state = 85, .external_lex_state = 4},
  [234] = {.lex_state = 85, .external_lex_state = 4},
  [235] = {.lex_state = 87},
  [236] = {.lex_state = 86},
  [237] = {.lex_state = 87},
  [238] = {.lex_state = 88},
  [239] = {.lex_state = 87},
  [240] = {.lex_state = 88},
  [241] = {.lex_state = 86},
  [242] = {.lex_state = 89},
  [243] = {.lex_state = 90},
  [244] = {.lex_state = 89},
  [245] = {.lex_state = 90},
  [246] = {.lex_state = 85, .external_lex_state = 4},
  [247] = {.lex_state = 86},
  [248] = {.lex_state = 88},
  [249] = {.lex_state = 88},
  [250] = {.lex_state = 85},
  [251] = {.lex_state = 86},
  [252] = {.lex_state = 88},
  [253] = {.lex_state = 86},
  [254] = {.lex_state = 87},
  [255] = {.lex_state = 87},
  [256] = {.lex_state = 88},
  [257] = {.lex_state = 85},
  [258] = {.lex_state = 85, .external_lex_state = 4},
  [259] = {.lex_state = 85, .external_lex_state = 4},
  [260] = {.lex_state = 86},
  [261] = {.lex_state = 86},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 88},
  [264] = {.lex_state = 73},
  [265] = {.lex_state = 85},
  [266] = {.lex_state = 85},
  [267] = {.lex_state = 85},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0, .external_lex_state = 5},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 91},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 73},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 73},
  [285] = {.lex_state = 85},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 91},
  [288] = {.lex_state = 92},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0, .external_lex_state = 6},
  [293] = {.lex_state = 0, .external_lex_state = 6},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 73},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0, .external_lex_state = 5},
  [301] = {.lex_state = 92},
  [302] = {.lex_state = 0, .external_lex_state = 6},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0, .external_lex_state = 6},
  [305] = {.lex_state = 91},
  [306] = {.lex_state = 91},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 93},
  [309] = {.lex_state = 86},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0, .external_lex_state = 7},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 93},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0, .external_lex_state = 7},
  [316] = {.lex_state = 0, .external_lex_state = 6},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0, .external_lex_state = 6},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 94},
  [322] = {.lex_state = 99},
  [323] = {.lex_state = 95},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0, .external_lex_state = 6},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0, .external_lex_state = 6},
  [331] = {.lex_state = 95},
  [332] = {.lex_state = 91},
  [333] = {.lex_state = 94},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 92},
  [341] = {.lex_state = 90},
  [342] = {.lex_state = 99},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 96},
  [345] = {.lex_state = 88},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 99},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 75},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 88},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 74},
  [361] = {.lex_state = 74},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 97},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 96},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 73},
  [388] = {.lex_state = 111},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 99},
  [392] = {.lex_state = 111},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 111},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 99},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
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
  [411] = {.lex_state = 111},
  [412] = {.lex_state = 99},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 111},
  [415] = {.lex_state = 0, .external_lex_state = 8},
  [416] = {.lex_state = 98},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0, .external_lex_state = 9},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0, .external_lex_state = 9},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 111},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 98},
  [427] = {.lex_state = 99},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 75},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0, .external_lex_state = 8},
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
    [sym_greater_than_2] = ACTIONS(1),
    [sym_lesser_than_2] = ACTIONS(1),
    [sym_greater_or_equal] = ACTIONS(1),
    [sym_lesser_or_equal] = ACTIONS(1),
    [sym_equal] = ACTIONS(1),
    [sym_not_equal] = ACTIONS(1),
    [sym_equal_2] = ACTIONS(1),
    [sym_not_equal_2] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_and_2] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [sym_or_2] = ACTIONS(1),
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
    [sym_spel_greater_or_equal] = ACTIONS(1),
    [sym_spel_lower_or_equal] = ACTIONS(1),
    [sym_spel_in] = ACTIONS(1),
    [sym_spel_not_in] = ACTIONS(1),
    [sym_spel_instanceof] = ACTIONS(1),
    [sym_spel_bit_shift_left] = ACTIONS(1),
    [sym_spel_bit_shift_left_2] = ACTIONS(1),
    [sym_spel_bit_shift_right] = ACTIONS(1),
    [sym_spel_bit_shift_right_2] = ACTIONS(1),
    [sym_spel_logical_shift_right] = ACTIONS(1),
    [sym_spel_logical_shift_right_2] = ACTIONS(1),
    [sym_bitwise_and] = ACTIONS(1),
    [sym_bitwise_and_2] = ACTIONS(1),
    [sym_bor] = ACTIONS(1),
    [sym_xor] = ACTIONS(1),
    [sym_xor_2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_spel_object_literal_token2] = ACTIONS(1),
    [anon_sym_DOT_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [sym_document] = STATE(428),
    [sym_doctype] = STATE(156),
    [sym__node] = STATE(156),
    [sym_element] = STATE(156),
    [sym_script_element] = STATE(156),
    [sym_style_element] = STATE(156),
    [sym_start_tag] = STATE(151),
    [sym_script_start_tag] = STATE(304),
    [sym_style_start_tag] = STATE(302),
    [sym_self_closing_tag] = STATE(216),
    [sym_erroneous_end_tag] = STATE(156),
    [aux_sym_document_repeat1] = STATE(156),
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
  [0] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      aux_sym_spel_object_literal_token2,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(44), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(13), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(15), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [70] = 9,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_spel_object_literal_token2,
    STATE(2), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(49), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(27), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(29), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [140] = 6,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    STATE(41), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(35), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(37), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [201] = 6,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    STATE(43), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(39), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(41), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [262] = 6,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    STATE(48), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(43), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(45), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [323] = 6,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    STATE(55), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(47), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(49), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [383] = 6,
    STATE(86), 1,
      sym_bor_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(51), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(53), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [443] = 19,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    STATE(86), 1,
      sym_bor_2,
    ACTIONS(51), 2,
      anon_sym_PIPE,
      sym_bitwise_and,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(65), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
    ACTIONS(53), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [529] = 6,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    STATE(53), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(81), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(83), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [589] = 22,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    ACTIONS(85), 1,
      sym_bitwise_and,
    ACTIONS(87), 1,
      sym_bitwise_and_2,
    STATE(86), 1,
      sym_bor_2,
    ACTIONS(89), 2,
      sym_xor,
      sym_xor_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(65), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
    ACTIONS(53), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      sym_bor,
      anon_sym_RBRACK,
  [681] = 6,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    STATE(57), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(91), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(93), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [741] = 21,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    ACTIONS(85), 1,
      sym_bitwise_and,
    ACTIONS(87), 1,
      sym_bitwise_and_2,
    STATE(86), 1,
      sym_bor_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(65), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
    ACTIONS(53), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [831] = 10,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    STATE(86), 1,
      sym_bor_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(51), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(53), 28,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [899] = 18,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    STATE(86), 1,
      sym_bor_2,
    ACTIONS(51), 2,
      anon_sym_PIPE,
      sym_bitwise_and,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
    ACTIONS(53), 16,
      anon_sym_COMMA,
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
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [983] = 12,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    STATE(86), 1,
      sym_bor_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(51), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(53), 26,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [1055] = 4,
    ACTIONS(99), 1,
      aux_sym_spel_object_literal_token2,
    STATE(17), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(95), 10,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(97), 35,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_DOT_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1111] = 14,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    STATE(86), 1,
      sym_bor_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
    ACTIONS(51), 7,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_bitwise_and,
    ACTIONS(53), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [1187] = 6,
    STATE(86), 1,
      sym_bor_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(102), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(104), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [1247] = 23,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    ACTIONS(85), 1,
      sym_bitwise_and,
    ACTIONS(87), 1,
      sym_bitwise_and_2,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      sym_bor,
    STATE(86), 1,
      sym_bor_2,
    ACTIONS(89), 2,
      sym_xor,
      sym_xor_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(65), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
    ACTIONS(53), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1341] = 24,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    ACTIONS(85), 1,
      sym_bitwise_and,
    ACTIONS(87), 1,
      sym_bitwise_and_2,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      sym_bor,
    STATE(86), 1,
      sym_bor_2,
    ACTIONS(89), 2,
      sym_xor,
      sym_xor_2,
    ACTIONS(110), 2,
      sym_and,
      sym_and_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(65), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
    ACTIONS(53), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1437] = 7,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    STATE(86), 1,
      sym_bor_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(51), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(53), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [1499] = 27,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    ACTIONS(85), 1,
      sym_bitwise_and,
    ACTIONS(87), 1,
      sym_bitwise_and_2,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      sym_bor,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_bor_2,
    STATE(296), 1,
      aux_sym_inline_list_repeat1,
    ACTIONS(89), 2,
      sym_xor,
      sym_xor_2,
    ACTIONS(110), 2,
      sym_and,
      sym_and_2,
    ACTIONS(114), 2,
      sym_or,
      sym_or_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(65), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
  [1600] = 25,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    ACTIONS(85), 1,
      sym_bitwise_and,
    ACTIONS(87), 1,
      sym_bitwise_and_2,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      sym_bor,
    STATE(86), 1,
      sym_bor_2,
    ACTIONS(89), 2,
      sym_xor,
      sym_xor_2,
    ACTIONS(110), 2,
      sym_and,
      sym_and_2,
    ACTIONS(114), 2,
      sym_or,
      sym_or_2,
    ACTIONS(118), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(65), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
  [1696] = 5,
    ACTIONS(124), 1,
      anon_sym_DOT,
    ACTIONS(126), 1,
      anon_sym_AT,
    STATE(58), 3,
      sym__spel_post_java_class,
      sym_spel_java_method,
      sym_spel_java_field,
    ACTIONS(120), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(122), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [1752] = 5,
    ACTIONS(124), 1,
      anon_sym_DOT,
    ACTIONS(126), 1,
      anon_sym_AT,
    STATE(50), 3,
      sym__spel_post_java_class,
      sym_spel_java_method,
      sym_spel_java_field,
    ACTIONS(128), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(130), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [1808] = 25,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    ACTIONS(85), 1,
      sym_bitwise_and,
    ACTIONS(87), 1,
      sym_bitwise_and_2,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      sym_bor,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_bor_2,
    ACTIONS(89), 2,
      sym_xor,
      sym_xor_2,
    ACTIONS(110), 2,
      sym_and,
      sym_and_2,
    ACTIONS(114), 2,
      sym_or,
      sym_or_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(65), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
  [1903] = 25,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    ACTIONS(85), 1,
      sym_bitwise_and,
    ACTIONS(87), 1,
      sym_bitwise_and_2,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      sym_bor,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_bor_2,
    ACTIONS(89), 2,
      sym_xor,
      sym_xor_2,
    ACTIONS(110), 2,
      sym_and,
      sym_and_2,
    ACTIONS(114), 2,
      sym_or,
      sym_or_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(65), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
  [1998] = 25,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    ACTIONS(85), 1,
      sym_bitwise_and,
    ACTIONS(87), 1,
      sym_bitwise_and_2,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      sym_bor,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_bor_2,
    ACTIONS(89), 2,
      sym_xor,
      sym_xor_2,
    ACTIONS(110), 2,
      sym_and,
      sym_and_2,
    ACTIONS(114), 2,
      sym_or,
      sym_or_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(65), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
  [2093] = 2,
    ACTIONS(138), 10,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(140), 34,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_DOT_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2142] = 2,
    ACTIONS(142), 10,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(144), 34,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_DOT_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2191] = 25,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    ACTIONS(85), 1,
      sym_bitwise_and,
    ACTIONS(87), 1,
      sym_bitwise_and_2,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      sym_bor,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_bor_2,
    ACTIONS(89), 2,
      sym_xor,
      sym_xor_2,
    ACTIONS(110), 2,
      sym_and,
      sym_and_2,
    ACTIONS(114), 2,
      sym_or,
      sym_or_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(65), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
  [2286] = 25,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    ACTIONS(85), 1,
      sym_bitwise_and,
    ACTIONS(87), 1,
      sym_bitwise_and_2,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      sym_bor,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_bor_2,
    ACTIONS(89), 2,
      sym_xor,
      sym_xor_2,
    ACTIONS(110), 2,
      sym_and,
      sym_and_2,
    ACTIONS(114), 2,
      sym_or,
      sym_or_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(65), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
  [2381] = 25,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    ACTIONS(85), 1,
      sym_bitwise_and,
    ACTIONS(87), 1,
      sym_bitwise_and_2,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      sym_bor,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_bor_2,
    ACTIONS(89), 2,
      sym_xor,
      sym_xor_2,
    ACTIONS(110), 2,
      sym_and,
      sym_and_2,
    ACTIONS(114), 2,
      sym_or,
      sym_or_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(65), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
  [2476] = 2,
    ACTIONS(152), 10,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(154), 34,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_DOT_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2525] = 25,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      sym_modulo,
    ACTIONS(75), 1,
      sym_spel_instanceof,
    ACTIONS(79), 1,
      sym_spel_bit_shift_right,
    ACTIONS(85), 1,
      sym_bitwise_and,
    ACTIONS(87), 1,
      sym_bitwise_and_2,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      sym_bor,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_bor_2,
    ACTIONS(89), 2,
      sym_xor,
      sym_xor_2,
    ACTIONS(110), 2,
      sym_and,
      sym_and_2,
    ACTIONS(114), 2,
      sym_or,
      sym_or_2,
    STATE(77), 2,
      sym_add,
      sym_substract,
    STATE(78), 2,
      sym_multiply,
      sym_divide,
    STATE(81), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(61), 3,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
    ACTIONS(65), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(63), 5,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
    ACTIONS(77), 5,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
  [2620] = 4,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_spel_method_args,
    ACTIONS(158), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(160), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [2671] = 3,
    ACTIONS(168), 1,
      aux_sym_object_creation_expression_token1,
    ACTIONS(166), 19,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_and_2,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      sym_spel_not_in,
      sym_spel_bit_shift_left,
      sym_spel_logical_shift_right,
      sym_xor_2,
      anon_sym_RBRACK,
    ACTIONS(164), 21,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
  [2719] = 2,
    ACTIONS(170), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(172), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [2765] = 3,
    ACTIONS(174), 1,
      anon_sym_EQ,
    ACTIONS(164), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(166), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [2813] = 2,
    ACTIONS(176), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(178), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [2859] = 3,
    ACTIONS(184), 1,
      anon_sym_f,
    ACTIONS(180), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(182), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [2907] = 2,
    ACTIONS(186), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(188), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [2953] = 2,
    ACTIONS(190), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(192), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [2999] = 2,
    ACTIONS(194), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(196), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3045] = 2,
    ACTIONS(198), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(200), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3091] = 3,
    ACTIONS(206), 1,
      anon_sym_DOT,
    ACTIONS(202), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(204), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3139] = 2,
    ACTIONS(208), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(210), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3185] = 2,
    ACTIONS(13), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(15), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3231] = 2,
    ACTIONS(212), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(214), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3276] = 2,
    ACTIONS(216), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(218), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3321] = 2,
    ACTIONS(220), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(222), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3366] = 2,
    ACTIONS(224), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(226), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3411] = 2,
    ACTIONS(228), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(230), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3456] = 2,
    ACTIONS(91), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(93), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3501] = 2,
    ACTIONS(232), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(234), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3546] = 2,
    ACTIONS(81), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(83), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3591] = 2,
    ACTIONS(128), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(130), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3636] = 2,
    ACTIONS(236), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(238), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3681] = 2,
    ACTIONS(240), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(242), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3726] = 2,
    ACTIONS(244), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(246), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3771] = 2,
    ACTIONS(248), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_spel_in,
      sym_spel_bit_shift_right,
      sym_bitwise_and,
    ACTIONS(250), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
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
      sym_spel_greater_or_equal,
      sym_spel_lower_or_equal,
      sym_spel_not_in,
      sym_spel_instanceof,
      sym_spel_bit_shift_left,
      sym_spel_bit_shift_left_2,
      sym_spel_bit_shift_right_2,
      sym_spel_logical_shift_right,
      sym_spel_logical_shift_right_2,
      sym_bitwise_and_2,
      sym_bor,
      sym_xor,
      sym_xor_2,
      anon_sym_RBRACK,
  [3816] = 16,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(256), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(27), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [3886] = 16,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(276), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(28), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [3956] = 16,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(280), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(23), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [4026] = 20,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(290), 1,
      aux_sym_number_literal_token1,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(314), 1,
      sym_standard_url,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    STATE(359), 1,
      sym__fragment_std_expression,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(288), 3,
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
  [4104] = 16,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(316), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(33), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [4174] = 16,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(320), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(36), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [4244] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(324), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(34), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [4311] = 19,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(290), 1,
      aux_sym_number_literal_token1,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(314), 1,
      sym_standard_url,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    STATE(371), 1,
      sym__fragment_std_expression,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(288), 3,
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
  [4386] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(326), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(21), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [4453] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(328), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(8), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [4520] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(330), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(32), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [4587] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(332), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(13), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [4654] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(334), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(19), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [4721] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(336), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(16), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [4788] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(338), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(14), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [4855] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(340), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(22), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [4922] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(342), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(29), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [4989] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(344), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(9), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [5056] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(346), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(18), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [5123] = 19,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(290), 1,
      aux_sym_number_literal_token1,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(314), 1,
      sym_standard_url,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    STATE(400), 1,
      sym__fragment_std_expression,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(288), 3,
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
  [5198] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(348), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(15), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [5265] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(350), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(24), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [5332] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(352), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(20), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [5399] = 15,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_not,
    ACTIONS(270), 1,
      sym_spel_new,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(40), 1,
      sym_spel_variable,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(262), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(354), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_instanceof,
    STATE(11), 16,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_std_expression,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_inline_list,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [5466] = 15,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    ACTIONS(370), 2,
      sym_and,
      sym_and_2,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(368), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(360), 9,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5532] = 14,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(368), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(360), 11,
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
  [5596] = 17,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(386), 1,
      anon_sym_QMARK,
    ACTIONS(370), 2,
      sym_and,
      sym_and_2,
    ACTIONS(384), 2,
      sym_or,
      sym_or_2,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(368), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(380), 6,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [5666] = 18,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    STATE(400), 1,
      sym_th_attribute_value,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(388), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(145), 15,
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
  [5738] = 8,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(362), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(360), 23,
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
  [5790] = 17,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    ACTIONS(386), 1,
      anon_sym_QMARK,
    ACTIONS(394), 1,
      anon_sym_COLON,
    ACTIONS(370), 2,
      sym_and,
      sym_and_2,
    ACTIONS(384), 2,
      sym_or,
      sym_or_2,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(368), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(392), 6,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [5860] = 5,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(362), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(360), 26,
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
  [5906] = 5,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(396), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(398), 26,
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
  [5952] = 18,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(402), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(121), 15,
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
  [6024] = 13,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(360), 15,
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
  [6086] = 10,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(362), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(360), 21,
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
  [6142] = 18,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    STATE(307), 1,
      sym_fragment_call,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(404), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(119), 15,
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
  [6214] = 18,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    STATE(371), 1,
      sym_th_attribute_value,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(388), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(145), 15,
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
  [6286] = 18,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(408), 3,
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
  [6358] = 17,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(410), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(124), 15,
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
  [6427] = 17,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(412), 3,
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
  [6496] = 17,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(414), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(125), 15,
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
  [6565] = 17,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(416), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(97), 15,
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
  [6634] = 17,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(418), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(120), 15,
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
  [6703] = 17,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(420), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(96), 15,
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
  [6772] = 17,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(422), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(123), 15,
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
  [6841] = 17,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(424), 3,
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
  [6910] = 17,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(426), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(92), 15,
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
  [6979] = 17,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(428), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(141), 15,
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
  [7048] = 17,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(430), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(87), 15,
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
  [7117] = 17,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(432), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(94), 15,
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
  [7186] = 17,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(434), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(88), 15,
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
  [7255] = 17,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(294), 1,
      aux_sym_token_literal_token2,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(310), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      aux_sym_number_literal_token1,
    STATE(116), 1,
      aux_sym_token_literal_repeat1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(436), 3,
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
  [7324] = 5,
    ACTIONS(442), 1,
      aux_sym_token_literal_token1,
    ACTIONS(445), 1,
      aux_sym_token_literal_token2,
    STATE(115), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(438), 12,
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
    ACTIONS(440), 17,
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
  [7367] = 5,
    ACTIONS(292), 1,
      aux_sym_token_literal_token1,
    ACTIONS(452), 1,
      aux_sym_token_literal_token2,
    STATE(115), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(448), 12,
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
    ACTIONS(450), 17,
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
  [7410] = 17,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    ACTIONS(386), 1,
      anon_sym_QMARK,
    ACTIONS(456), 1,
      anon_sym_COLON_COLON,
    ACTIONS(370), 2,
      sym_and,
      sym_and_2,
    ACTIONS(384), 2,
      sym_or,
      sym_or_2,
    ACTIONS(454), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(368), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [7476] = 2,
    ACTIONS(438), 14,
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
    ACTIONS(440), 17,
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
  [7512] = 17,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    ACTIONS(386), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 2,
      sym_and,
      sym_and_2,
    ACTIONS(384), 2,
      sym_or,
      sym_or_2,
    ACTIONS(458), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(368), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [7578] = 18,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    ACTIONS(386), 1,
      anon_sym_QMARK,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym_th_assignation_sequence_repeat1,
    ACTIONS(370), 2,
      sym_and,
      sym_and_2,
    ACTIONS(384), 2,
      sym_or,
      sym_or_2,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(368), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [7646] = 18,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    ACTIONS(386), 1,
      anon_sym_QMARK,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_fragment_call_repeat1,
    ACTIONS(370), 2,
      sym_and,
      sym_and_2,
    ACTIONS(384), 2,
      sym_or,
      sym_or_2,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(368), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [7714] = 18,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    ACTIONS(386), 1,
      anon_sym_QMARK,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym_fragment_call_repeat1,
    ACTIONS(370), 2,
      sym_and,
      sym_and_2,
    ACTIONS(384), 2,
      sym_or,
      sym_or_2,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(368), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [7782] = 16,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    ACTIONS(386), 1,
      anon_sym_QMARK,
    ACTIONS(370), 2,
      sym_and,
      sym_and_2,
    ACTIONS(384), 2,
      sym_or,
      sym_or_2,
    ACTIONS(472), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(368), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [7845] = 16,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    ACTIONS(386), 1,
      anon_sym_QMARK,
    ACTIONS(370), 2,
      sym_and,
      sym_and_2,
    ACTIONS(384), 2,
      sym_or,
      sym_or_2,
    ACTIONS(474), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(368), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [7908] = 16,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    ACTIONS(386), 1,
      anon_sym_QMARK,
    ACTIONS(370), 2,
      sym_and,
      sym_and_2,
    ACTIONS(384), 2,
      sym_or,
      sym_or_2,
    ACTIONS(476), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(368), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [7971] = 3,
    ACTIONS(482), 1,
      anon_sym_DOT,
    ACTIONS(478), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(480), 26,
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
  [8008] = 2,
    ACTIONS(484), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(486), 26,
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
  [8042] = 2,
    ACTIONS(236), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(238), 26,
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
  [8076] = 2,
    ACTIONS(488), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(490), 26,
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
  [8110] = 2,
    ACTIONS(492), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(494), 26,
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
  [8144] = 2,
    ACTIONS(496), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(498), 26,
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
  [8178] = 2,
    ACTIONS(500), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(502), 26,
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
  [8212] = 2,
    ACTIONS(504), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(506), 26,
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
  [8246] = 2,
    ACTIONS(508), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(510), 26,
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
  [8280] = 2,
    ACTIONS(216), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(218), 26,
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
  [8314] = 2,
    ACTIONS(512), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(514), 26,
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
  [8348] = 2,
    ACTIONS(516), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(518), 26,
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
  [8382] = 2,
    ACTIONS(228), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(230), 26,
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
  [8416] = 2,
    ACTIONS(520), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(522), 26,
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
  [8450] = 2,
    ACTIONS(524), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(526), 26,
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
  [8484] = 16,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    ACTIONS(386), 1,
      anon_sym_QMARK,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    ACTIONS(370), 2,
      sym_and,
      sym_and_2,
    ACTIONS(384), 2,
      sym_or,
      sym_or_2,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(368), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [8546] = 2,
    ACTIONS(530), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(532), 26,
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
  [8580] = 2,
    ACTIONS(534), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(536), 26,
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
  [8614] = 2,
    ACTIONS(538), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(540), 26,
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
  [8648] = 16,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      sym_modulo,
    ACTIONS(386), 1,
      anon_sym_QMARK,
    ACTIONS(542), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 2,
      sym_and,
      sym_and_2,
    ACTIONS(384), 2,
      sym_or,
      sym_or_2,
    STATE(102), 2,
      sym_multiply,
      sym_divide,
    STATE(104), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(108), 2,
      sym_add,
      sym_substract,
    ACTIONS(368), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(366), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [8710] = 10,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    ACTIONS(548), 1,
      anon_sym_POUND,
    ACTIONS(550), 1,
      aux_sym_spel_object_literal_token1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    STATE(320), 1,
      sym_spel_method_name,
    ACTIONS(546), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_new,
      sym_spel_instanceof,
    STATE(271), 9,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_literal,
      sym_spel_variable,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [8753] = 13,
    ACTIONS(552), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(556), 1,
      sym_th_each,
    ACTIONS(564), 1,
      sym_th_remove,
    ACTIONS(566), 1,
      sym_th_fragment,
    ACTIONS(568), 1,
      sym_th_inline,
    STATE(393), 1,
      sym__th_assignation_sequence,
    STATE(395), 1,
      sym__th_spel_only,
    STATE(401), 1,
      sym__th_fragments_insert,
    ACTIONS(554), 2,
      sym_th_insert,
      sym_th_replace,
    ACTIONS(560), 2,
      sym_th_object,
      sym_th_with,
    STATE(402), 2,
      sym__th_generic,
      sym_th_generic,
    ACTIONS(562), 3,
      sym_th_attr,
      sym_th_attrappend,
      sym_th_attrprepend,
    ACTIONS(558), 4,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
  [8801] = 9,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym_spel_object_literal_token1,
    STATE(59), 1,
      sym__interpreted_string_literal,
    STATE(349), 1,
      sym_spel_method_name,
    ACTIONS(570), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_new,
      sym_spel_instanceof,
    STATE(56), 9,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_literal,
      sym_spel_variable,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [8841] = 13,
    ACTIONS(552), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(574), 1,
      sym_th_each,
    ACTIONS(582), 1,
      sym_th_remove,
    ACTIONS(584), 1,
      sym_th_fragment,
    ACTIONS(586), 1,
      sym_th_inline,
    STATE(443), 1,
      sym__th_fragments_insert,
    STATE(444), 1,
      sym__th_spel_only,
    STATE(445), 1,
      sym__th_assignation_sequence,
    ACTIONS(572), 2,
      sym_th_insert,
      sym_th_replace,
    ACTIONS(578), 2,
      sym_th_object,
      sym_th_with,
    STATE(442), 2,
      sym__th_generic,
      sym_th_generic,
    ACTIONS(580), 3,
      sym_th_attr,
      sym_th_attrappend,
      sym_th_attrprepend,
    ACTIONS(576), 4,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
  [8889] = 9,
    ACTIONS(258), 1,
      aux_sym_number_literal_token1,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(548), 1,
      anon_sym_POUND,
    ACTIONS(550), 1,
      aux_sym_spel_object_literal_token1,
    STATE(128), 1,
      sym__interpreted_string_literal,
    STATE(320), 1,
      sym_spel_method_name,
    ACTIONS(588), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_spel_new,
      sym_spel_instanceof,
    STATE(326), 9,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym_string_literal,
      sym__spel_literal,
      sym_spel_variable,
      sym_spel_java_class,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [8929] = 11,
    ACTIONS(590), 1,
      anon_sym_LT_BANG,
    ACTIONS(592), 1,
      anon_sym_LT,
    ACTIONS(594), 1,
      anon_sym_LT_SLASH,
    ACTIONS(598), 1,
      sym__implicit_end_tag,
    STATE(152), 1,
      sym_start_tag,
    STATE(214), 1,
      sym_self_closing_tag,
    STATE(226), 1,
      sym_end_tag,
    STATE(292), 1,
      sym_script_start_tag,
    STATE(293), 1,
      sym_style_start_tag,
    ACTIONS(596), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(153), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [8971] = 11,
    ACTIONS(590), 1,
      anon_sym_LT_BANG,
    ACTIONS(592), 1,
      anon_sym_LT,
    ACTIONS(600), 1,
      anon_sym_LT_SLASH,
    ACTIONS(604), 1,
      sym__implicit_end_tag,
    STATE(152), 1,
      sym_start_tag,
    STATE(214), 1,
      sym_self_closing_tag,
    STATE(220), 1,
      sym_end_tag,
    STATE(292), 1,
      sym_script_start_tag,
    STATE(293), 1,
      sym_style_start_tag,
    ACTIONS(602), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(154), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [9013] = 11,
    ACTIONS(590), 1,
      anon_sym_LT_BANG,
    ACTIONS(592), 1,
      anon_sym_LT,
    ACTIONS(594), 1,
      anon_sym_LT_SLASH,
    ACTIONS(608), 1,
      sym__implicit_end_tag,
    STATE(152), 1,
      sym_start_tag,
    STATE(208), 1,
      sym_end_tag,
    STATE(214), 1,
      sym_self_closing_tag,
    STATE(292), 1,
      sym_script_start_tag,
    STATE(293), 1,
      sym_style_start_tag,
    ACTIONS(606), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(157), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [9055] = 11,
    ACTIONS(590), 1,
      anon_sym_LT_BANG,
    ACTIONS(592), 1,
      anon_sym_LT,
    ACTIONS(600), 1,
      anon_sym_LT_SLASH,
    ACTIONS(610), 1,
      sym__implicit_end_tag,
    STATE(152), 1,
      sym_start_tag,
    STATE(202), 1,
      sym_end_tag,
    STATE(214), 1,
      sym_self_closing_tag,
    STATE(292), 1,
      sym_script_start_tag,
    STATE(293), 1,
      sym_style_start_tag,
    ACTIONS(606), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(157), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [9097] = 10,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
    ACTIONS(614), 1,
      anon_sym_LT_BANG,
    ACTIONS(617), 1,
      anon_sym_LT,
    ACTIONS(620), 1,
      anon_sym_LT_SLASH,
    STATE(151), 1,
      sym_start_tag,
    STATE(216), 1,
      sym_self_closing_tag,
    STATE(302), 1,
      sym_style_start_tag,
    STATE(304), 1,
      sym_script_start_tag,
    ACTIONS(623), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(155), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [9136] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LT_SLASH,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
    STATE(151), 1,
      sym_start_tag,
    STATE(216), 1,
      sym_self_closing_tag,
    STATE(302), 1,
      sym_style_start_tag,
    STATE(304), 1,
      sym_script_start_tag,
    ACTIONS(628), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(155), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [9175] = 10,
    ACTIONS(612), 1,
      sym__implicit_end_tag,
    ACTIONS(630), 1,
      anon_sym_LT_BANG,
    ACTIONS(633), 1,
      anon_sym_LT,
    ACTIONS(636), 1,
      anon_sym_LT_SLASH,
    STATE(152), 1,
      sym_start_tag,
    STATE(214), 1,
      sym_self_closing_tag,
    STATE(292), 1,
      sym_script_start_tag,
    STATE(293), 1,
      sym_style_start_tag,
    ACTIONS(639), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(157), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [9214] = 2,
    ACTIONS(644), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_not,
      sym_spel_new,
      sym_spel_instanceof,
      aux_sym_spel_object_literal_token1,
    ACTIONS(642), 10,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_BANG,
      anon_sym_AT,
  [9236] = 2,
    ACTIONS(648), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_not,
      sym_spel_new,
      sym_spel_instanceof,
      aux_sym_spel_object_literal_token1,
    ACTIONS(646), 10,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_BANG,
      anon_sym_AT,
  [9258] = 2,
    ACTIONS(652), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_not,
      sym_spel_new,
      sym_spel_instanceof,
      aux_sym_spel_object_literal_token1,
    ACTIONS(650), 10,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_BANG,
      anon_sym_AT,
  [9280] = 2,
    ACTIONS(656), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_not,
      sym_spel_new,
      sym_spel_instanceof,
      aux_sym_spel_object_literal_token1,
    ACTIONS(654), 10,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_BANG,
      anon_sym_AT,
  [9302] = 2,
    ACTIONS(660), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_not,
      sym_spel_new,
      sym_spel_instanceof,
      aux_sym_spel_object_literal_token1,
    ACTIONS(658), 10,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_BANG,
      anon_sym_AT,
  [9324] = 2,
    ACTIONS(664), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(662), 11,
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
  [9346] = 2,
    ACTIONS(668), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(666), 11,
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
  [9368] = 2,
    ACTIONS(668), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_not,
      sym_spel_new,
      sym_spel_instanceof,
      aux_sym_spel_object_literal_token1,
    ACTIONS(666), 10,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_BANG,
      anon_sym_AT,
  [9390] = 2,
    ACTIONS(660), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(658), 11,
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
  [9412] = 2,
    ACTIONS(656), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(654), 11,
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
  [9434] = 2,
    ACTIONS(652), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(650), 11,
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
  [9456] = 2,
    ACTIONS(644), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(642), 11,
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
  [9478] = 2,
    ACTIONS(664), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_not,
      sym_spel_new,
      sym_spel_instanceof,
      aux_sym_spel_object_literal_token1,
    ACTIONS(662), 10,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_BANG,
      anon_sym_AT,
  [9500] = 8,
    ACTIONS(670), 1,
      anon_sym_PIPE,
    ACTIONS(674), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(676), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(678), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(680), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(682), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(672), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(173), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [9532] = 8,
    ACTIONS(684), 1,
      anon_sym_PIPE,
    ACTIONS(689), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(692), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(695), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(698), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(701), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(686), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(172), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [9564] = 8,
    ACTIONS(676), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(678), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(680), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(682), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(704), 1,
      anon_sym_PIPE,
    ACTIONS(708), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(706), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(172), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [9596] = 8,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(710), 1,
      anon_sym_DOT,
    ACTIONS(712), 1,
      aux_sym_spel_object_literal_token2,
    ACTIONS(714), 1,
      anon_sym_LBRACK,
    STATE(175), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(29), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    STATE(49), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
  [9626] = 8,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(710), 1,
      anon_sym_DOT,
    ACTIONS(714), 1,
      anon_sym_LBRACK,
    ACTIONS(716), 1,
      aux_sym_spel_object_literal_token2,
    STATE(191), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(15), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    STATE(44), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
  [9656] = 2,
    ACTIONS(494), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(492), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9671] = 2,
    ACTIONS(526), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(524), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9686] = 7,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(710), 1,
      anon_sym_DOT,
    ACTIONS(714), 1,
      anon_sym_LBRACK,
    ACTIONS(716), 1,
      aux_sym_spel_object_literal_token2,
    STATE(191), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(44), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
  [9711] = 2,
    ACTIONS(514), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(512), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9726] = 2,
    ACTIONS(506), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(504), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9741] = 2,
    ACTIONS(490), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(488), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9756] = 2,
    ACTIONS(498), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(496), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9771] = 5,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(710), 1,
      anon_sym_DOT,
    ACTIONS(714), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    STATE(43), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
  [9792] = 2,
    ACTIONS(522), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(520), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9807] = 5,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(710), 1,
      anon_sym_DOT,
    ACTIONS(714), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    STATE(48), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
  [9828] = 7,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym_DOT,
    ACTIONS(714), 1,
      anon_sym_LBRACK,
    ACTIONS(718), 1,
      aux_sym_spel_object_literal_token2,
    STATE(178), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(49), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
  [9853] = 2,
    ACTIONS(502), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(500), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9868] = 6,
    ACTIONS(720), 1,
      anon_sym_GT,
    ACTIONS(722), 1,
      anon_sym_SLASH_GT,
    ACTIONS(724), 1,
      anon_sym_th_COLON,
    ACTIONS(726), 1,
      aux_sym_attribute_name_token1,
    STATE(233), 1,
      sym_attribute_name,
    STATE(190), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9890] = 6,
    ACTIONS(724), 1,
      anon_sym_th_COLON,
    ACTIONS(726), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(728), 1,
      anon_sym_GT,
    ACTIONS(730), 1,
      anon_sym_SLASH_GT,
    STATE(233), 1,
      sym_attribute_name,
    STATE(194), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9912] = 6,
    ACTIONS(724), 1,
      anon_sym_th_COLON,
    ACTIONS(726), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(728), 1,
      anon_sym_GT,
    ACTIONS(732), 1,
      anon_sym_SLASH_GT,
    STATE(233), 1,
      sym_attribute_name,
    STATE(194), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9934] = 4,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(734), 1,
      aux_sym_spel_object_literal_token2,
    STATE(191), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(97), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT_LBRACE,
      anon_sym_LBRACK,
  [9952] = 5,
    ACTIONS(23), 1,
      anon_sym_DOT_LBRACE,
    ACTIONS(710), 1,
      anon_sym_DOT,
    ACTIONS(714), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(41), 4,
      sym__spel_post_accessor,
      sym_spel_projection,
      sym_spel_property_access,
      sym_spel_method_access,
  [9972] = 6,
    ACTIONS(720), 1,
      anon_sym_GT,
    ACTIONS(724), 1,
      anon_sym_th_COLON,
    ACTIONS(726), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(737), 1,
      anon_sym_SLASH_GT,
    STATE(233), 1,
      sym_attribute_name,
    STATE(189), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9994] = 5,
    ACTIONS(741), 1,
      anon_sym_th_COLON,
    ACTIONS(744), 1,
      aux_sym_attribute_name_token1,
    STATE(233), 1,
      sym_attribute_name,
    ACTIONS(739), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(194), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10014] = 5,
    ACTIONS(747), 1,
      anon_sym_GT,
    ACTIONS(749), 1,
      anon_sym_th_COLON,
    ACTIONS(751), 1,
      aux_sym_attribute_name_token1,
    STATE(250), 1,
      sym_attribute_name,
    STATE(196), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10033] = 5,
    ACTIONS(749), 1,
      anon_sym_th_COLON,
    ACTIONS(751), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(753), 1,
      anon_sym_GT,
    STATE(250), 1,
      sym_attribute_name,
    STATE(198), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10052] = 5,
    ACTIONS(749), 1,
      anon_sym_th_COLON,
    ACTIONS(751), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(755), 1,
      anon_sym_GT,
    STATE(250), 1,
      sym_attribute_name,
    STATE(198), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10071] = 5,
    ACTIONS(739), 1,
      anon_sym_GT,
    ACTIONS(757), 1,
      anon_sym_th_COLON,
    ACTIONS(760), 1,
      aux_sym_attribute_name_token1,
    STATE(250), 1,
      sym_attribute_name,
    STATE(198), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10090] = 5,
    ACTIONS(749), 1,
      anon_sym_th_COLON,
    ACTIONS(751), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(763), 1,
      anon_sym_GT,
    STATE(250), 1,
      sym_attribute_name,
    STATE(197), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [10109] = 2,
    ACTIONS(767), 1,
      anon_sym_LT,
    ACTIONS(765), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10121] = 7,
    ACTIONS(769), 1,
      anon_sym_SLASH,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    ACTIONS(773), 1,
      sym_standard_url_fragment,
    ACTIONS(775), 1,
      anon_sym_LBRACE,
    STATE(260), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(264), 1,
      sym_parameterized_url_fragment,
    STATE(357), 1,
      sym__url_std_expression,
  [10143] = 2,
    ACTIONS(779), 1,
      anon_sym_LT,
    ACTIONS(777), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10155] = 7,
    ACTIONS(769), 1,
      anon_sym_SLASH,
    ACTIONS(773), 1,
      sym_standard_url_fragment,
    ACTIONS(775), 1,
      anon_sym_LBRACE,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(264), 1,
      sym_parameterized_url_fragment,
    STATE(407), 1,
      sym__url_std_expression,
  [10177] = 2,
    ACTIONS(785), 1,
      anon_sym_LT,
    ACTIONS(783), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10189] = 2,
    ACTIONS(789), 1,
      anon_sym_LT,
    ACTIONS(787), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10201] = 2,
    ACTIONS(793), 1,
      anon_sym_LT,
    ACTIONS(791), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10213] = 2,
    ACTIONS(797), 1,
      anon_sym_LT,
    ACTIONS(795), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10225] = 2,
    ACTIONS(779), 1,
      anon_sym_LT,
    ACTIONS(777), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10237] = 2,
    ACTIONS(801), 1,
      anon_sym_LT,
    ACTIONS(799), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10249] = 2,
    ACTIONS(805), 1,
      anon_sym_LT,
    ACTIONS(803), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10261] = 2,
    ACTIONS(801), 1,
      anon_sym_LT,
    ACTIONS(799), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10273] = 2,
    ACTIONS(809), 1,
      anon_sym_LT,
    ACTIONS(807), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10285] = 2,
    ACTIONS(809), 1,
      anon_sym_LT,
    ACTIONS(807), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10297] = 2,
    ACTIONS(813), 1,
      anon_sym_LT,
    ACTIONS(811), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10309] = 2,
    ACTIONS(817), 1,
      anon_sym_LT,
    ACTIONS(815), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10321] = 2,
    ACTIONS(813), 1,
      anon_sym_LT,
    ACTIONS(811), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10333] = 2,
    ACTIONS(805), 1,
      anon_sym_LT,
    ACTIONS(803), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10345] = 2,
    ACTIONS(793), 1,
      anon_sym_LT,
    ACTIONS(791), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10357] = 2,
    ACTIONS(821), 1,
      anon_sym_LT,
    ACTIONS(819), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10369] = 2,
    ACTIONS(825), 1,
      anon_sym_LT,
    ACTIONS(823), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10381] = 2,
    ACTIONS(817), 1,
      anon_sym_LT,
    ACTIONS(815), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10393] = 2,
    ACTIONS(829), 1,
      anon_sym_LT,
    ACTIONS(827), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10405] = 4,
    ACTIONS(831), 1,
      sym_remove_all,
    ACTIONS(835), 1,
      anon_sym_none,
    STATE(400), 2,
      sym__th_remove_value,
      sym_remove_none,
    ACTIONS(833), 3,
      sym_remove_body,
      sym_remove_tag,
      sym_remove_abf,
  [10421] = 2,
    ACTIONS(789), 1,
      anon_sym_LT,
    ACTIONS(787), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10433] = 2,
    ACTIONS(767), 1,
      anon_sym_LT,
    ACTIONS(765), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10445] = 2,
    ACTIONS(825), 1,
      anon_sym_LT,
    ACTIONS(823), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10457] = 2,
    ACTIONS(785), 1,
      anon_sym_LT,
    ACTIONS(783), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10469] = 2,
    ACTIONS(829), 1,
      anon_sym_LT,
    ACTIONS(827), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [10481] = 4,
    ACTIONS(835), 1,
      anon_sym_none,
    ACTIONS(837), 1,
      sym_remove_all,
    STATE(371), 2,
      sym__th_remove_value,
      sym_remove_none,
    ACTIONS(839), 3,
      sym_remove_body,
      sym_remove_tag,
      sym_remove_abf,
  [10497] = 4,
    ACTIONS(833), 1,
      sym_inline_javascript,
    ACTIONS(841), 1,
      anon_sym_none,
    ACTIONS(843), 1,
      anon_sym_text,
    STATE(400), 3,
      sym__th_inline_value,
      sym_inline_text,
      sym_inline_none,
  [10512] = 4,
    ACTIONS(839), 1,
      sym_inline_javascript,
    ACTIONS(841), 1,
      anon_sym_none,
    ACTIONS(843), 1,
      anon_sym_text,
    STATE(371), 3,
      sym__th_inline_value,
      sym_inline_text,
      sym_inline_none,
  [10527] = 2,
    ACTIONS(847), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(845), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
      anon_sym_EQ,
  [10537] = 3,
    ACTIONS(851), 1,
      anon_sym_EQ,
    ACTIONS(853), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(849), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [10549] = 2,
    ACTIONS(857), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(855), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [10558] = 3,
    ACTIONS(859), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(861), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10569] = 4,
    ACTIONS(863), 1,
      sym_standard_url_fragment,
    ACTIONS(866), 1,
      anon_sym_LBRACE,
    STATE(236), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(387), 1,
      sym_parameterized_url_fragment,
  [10582] = 3,
    ACTIONS(869), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(861), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10593] = 4,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    ACTIONS(873), 1,
      aux_sym_url_parameter_token1,
    STATE(346), 1,
      sym_message_name,
    STATE(408), 1,
      sym__message_std_expression,
  [10606] = 3,
    ACTIONS(875), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(877), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10617] = 4,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
    ACTIONS(881), 1,
      aux_sym_url_parameter_token1,
    STATE(282), 1,
      sym_url_parameter_assignement,
    STATE(378), 1,
      sym_url_parameter,
  [10630] = 3,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    ACTIONS(887), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [10641] = 4,
    ACTIONS(889), 1,
      anon_sym_DQUOTE,
    ACTIONS(891), 1,
      sym_attribute_value,
    ACTIONS(893), 1,
      anon_sym_SQUOTE,
    STATE(285), 1,
      sym_quoted_attribute_value,
  [10654] = 4,
    ACTIONS(895), 1,
      aux_sym_spel_object_literal_token1,
    STATE(45), 1,
      sym_spel_method_literal,
    STATE(46), 1,
      sym_spel_object_literal,
    STATE(349), 1,
      sym_spel_method_name,
  [10667] = 4,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      sym_attribute_value,
    ACTIONS(901), 1,
      anon_sym_SQUOTE,
    STATE(246), 1,
      sym_quoted_attribute_value,
  [10680] = 4,
    ACTIONS(903), 1,
      aux_sym_spel_object_literal_token1,
    STATE(45), 1,
      sym_spel_method_literal,
    STATE(46), 1,
      sym_spel_object_literal,
    STATE(320), 1,
      sym_spel_method_name,
  [10693] = 2,
    ACTIONS(907), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(905), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [10702] = 3,
    ACTIONS(909), 1,
      anon_sym_LPAREN,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
    ACTIONS(887), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [10713] = 4,
    ACTIONS(881), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      sym_url_parameter_assignement,
    STATE(378), 1,
      sym_url_parameter,
  [10726] = 4,
    ACTIONS(881), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      sym_url_parameter_assignement,
    STATE(378), 1,
      sym_url_parameter,
  [10739] = 3,
    ACTIONS(853), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(917), 1,
      anon_sym_EQ,
    ACTIONS(849), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [10750] = 3,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
    ACTIONS(887), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [10761] = 4,
    ACTIONS(881), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      sym_url_parameter_assignement,
    STATE(378), 1,
      sym_url_parameter,
  [10774] = 4,
    ACTIONS(775), 1,
      anon_sym_LBRACE,
    ACTIONS(925), 1,
      sym_standard_url_fragment,
    STATE(236), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(297), 1,
      sym_parameterized_url_fragment,
  [10787] = 3,
    ACTIONS(927), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(929), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10798] = 3,
    ACTIONS(931), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(933), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10809] = 4,
    ACTIONS(873), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(936), 1,
      anon_sym_RBRACE,
    STATE(346), 1,
      sym_message_name,
    STATE(355), 1,
      sym__message_std_expression,
  [10822] = 2,
    ACTIONS(847), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(845), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_EQ,
  [10831] = 2,
    ACTIONS(940), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(938), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [10840] = 2,
    ACTIONS(944), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(942), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [10849] = 4,
    ACTIONS(775), 1,
      anon_sym_LBRACE,
    ACTIONS(946), 1,
      sym_standard_url_fragment,
    STATE(236), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(278), 1,
      sym_parameterized_url_fragment,
  [10862] = 4,
    ACTIONS(775), 1,
      anon_sym_LBRACE,
    ACTIONS(946), 1,
      sym_standard_url_fragment,
    STATE(253), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(278), 1,
      sym_parameterized_url_fragment,
  [10875] = 2,
    ACTIONS(456), 1,
      anon_sym_COLON_COLON,
    ACTIONS(454), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [10883] = 3,
    ACTIONS(881), 1,
      aux_sym_url_parameter_token1,
    STATE(317), 1,
      sym_url_parameter_assignement,
    STATE(378), 1,
      sym_url_parameter,
  [10893] = 3,
    ACTIONS(948), 1,
      anon_sym_LPAREN,
    ACTIONS(950), 1,
      anon_sym_SLASH,
    ACTIONS(952), 1,
      anon_sym_RBRACE,
  [10903] = 2,
    ACTIONS(857), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(855), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [10911] = 2,
    ACTIONS(940), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(938), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [10919] = 2,
    ACTIONS(944), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(942), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [10927] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym__url_std_expression_repeat2,
  [10937] = 2,
    ACTIONS(960), 1,
      anon_sym_DOT,
    ACTIONS(958), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [10945] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym__url_std_expression_repeat2,
  [10955] = 3,
    ACTIONS(964), 1,
      anon_sym_COMMA,
    ACTIONS(966), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      aux_sym_spel_method_args_repeat1,
  [10965] = 3,
    ACTIONS(968), 1,
      sym__start_tag_name,
    ACTIONS(970), 1,
      sym__script_start_tag_name,
    ACTIONS(972), 1,
      sym__style_start_tag_name,
  [10975] = 3,
    ACTIONS(974), 1,
      anon_sym_COMMA,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_th_fragment_declaration_repeat1,
  [10985] = 3,
    ACTIONS(978), 1,
      anon_sym_DQUOTE,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_th_assignation_sequence_repeat1,
  [10995] = 3,
    ACTIONS(983), 1,
      anon_sym_DQUOTE,
    ACTIONS(985), 1,
      aux_sym_attribute_name_token1,
    STATE(425), 1,
      sym_attribute_name,
  [11005] = 3,
    ACTIONS(987), 1,
      anon_sym_DQUOTE,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_th_assignation_sequence_repeat1,
  [11015] = 3,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym__url_std_expression_repeat2,
  [11025] = 3,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
    ACTIONS(996), 1,
      anon_sym_SLASH,
  [11035] = 3,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym__url_std_expression_repeat2,
  [11045] = 3,
    ACTIONS(998), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_th_fragment_declaration_repeat1,
  [11055] = 3,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym__url_std_expression_repeat2,
  [11065] = 3,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym__url_std_expression_repeat2,
  [11075] = 3,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_spel_method_args_repeat1,
  [11085] = 1,
    ACTIONS(1008), 3,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_RBRACE,
  [11091] = 2,
    ACTIONS(907), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(905), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [11099] = 3,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym__url_std_expression_repeat2,
  [11109] = 3,
    ACTIONS(985), 1,
      aux_sym_attribute_name_token1,
    STATE(364), 1,
      sym_attribute_name,
    STATE(371), 1,
      sym_th_assignation_sequence,
  [11119] = 3,
    ACTIONS(1010), 1,
      aux_sym_iterStat_token1,
    STATE(338), 1,
      sym_each_element,
    STATE(371), 1,
      sym_th_each_value,
  [11129] = 3,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      aux_sym_fragment_call_repeat1,
  [11139] = 3,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym_fragment_call_repeat1,
  [11149] = 3,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      aux_sym_fragment_call_repeat1,
  [11159] = 3,
    ACTIONS(1019), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1021), 1,
      sym_raw_text,
    STATE(228), 1,
      sym_end_tag,
  [11169] = 3,
    ACTIONS(1019), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1023), 1,
      sym_raw_text,
    STATE(215), 1,
      sym_end_tag,
  [11179] = 3,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_inline_list_repeat1,
  [11189] = 3,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym__url_std_expression_repeat2,
  [11199] = 3,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_RBRACE,
    STATE(294), 1,
      aux_sym_inline_list_repeat1,
  [11209] = 3,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    ACTIONS(1030), 1,
      anon_sym_SLASH,
  [11219] = 3,
    ACTIONS(974), 1,
      anon_sym_COMMA,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_th_fragment_declaration_repeat1,
  [11229] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym__url_std_expression_repeat2,
  [11239] = 3,
    ACTIONS(970), 1,
      sym__script_start_tag_name,
    ACTIONS(972), 1,
      sym__style_start_tag_name,
    ACTIONS(1034), 1,
      sym__start_tag_name,
  [11249] = 3,
    ACTIONS(1010), 1,
      aux_sym_iterStat_token1,
    STATE(338), 1,
      sym_each_element,
    STATE(400), 1,
      sym_th_each_value,
  [11259] = 3,
    ACTIONS(1036), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1038), 1,
      sym_raw_text,
    STATE(221), 1,
      sym_end_tag,
  [11269] = 3,
    ACTIONS(964), 1,
      anon_sym_COMMA,
    ACTIONS(1040), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_spel_method_args_repeat1,
  [11279] = 3,
    ACTIONS(1036), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1042), 1,
      sym_raw_text,
    STATE(222), 1,
      sym_end_tag,
  [11289] = 3,
    ACTIONS(985), 1,
      aux_sym_attribute_name_token1,
    STATE(364), 1,
      sym_attribute_name,
    STATE(400), 1,
      sym_th_assignation_sequence,
  [11299] = 3,
    ACTIONS(985), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1044), 1,
      anon_sym_DQUOTE,
    STATE(425), 1,
      sym_attribute_name,
  [11309] = 1,
    ACTIONS(1046), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [11314] = 2,
    ACTIONS(1048), 1,
      sym_fragment_name,
    STATE(371), 1,
      sym_th_fragment_declaration,
  [11321] = 1,
    ACTIONS(887), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [11326] = 2,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(400), 1,
      sym_spel_th_std_expression,
  [11333] = 2,
    ACTIONS(1050), 1,
      sym__end_tag_name,
    ACTIONS(1052), 1,
      sym_erroneous_end_tag_name,
  [11340] = 2,
    ACTIONS(1036), 1,
      anon_sym_LT_SLASH,
    STATE(205), 1,
      sym_end_tag,
  [11347] = 2,
    ACTIONS(1048), 1,
      sym_fragment_name,
    STATE(400), 1,
      sym_th_fragment_declaration,
  [11354] = 2,
    ACTIONS(1036), 1,
      anon_sym_LT_SLASH,
    STATE(200), 1,
      sym_end_tag,
  [11361] = 2,
    ACTIONS(1052), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(1054), 1,
      sym__end_tag_name,
  [11368] = 1,
    ACTIONS(1056), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [11373] = 1,
    ACTIONS(994), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11378] = 1,
    ACTIONS(1001), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11383] = 1,
    ACTIONS(1058), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [11388] = 2,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_spel_method_args,
  [11395] = 2,
    ACTIONS(1060), 1,
      anon_sym_SQUOTE,
    ACTIONS(1062), 1,
      aux_sym_quoted_attribute_value_token1,
  [11402] = 2,
    ACTIONS(1064), 1,
      aux_sym_object_creation_expression_token1,
    STATE(322), 1,
      aux_sym_spel_java_class_repeat1,
  [11409] = 2,
    ACTIONS(1060), 1,
      anon_sym_DQUOTE,
    ACTIONS(1067), 1,
      aux_sym_quoted_attribute_value_token2,
  [11416] = 2,
    ACTIONS(1019), 1,
      anon_sym_LT_SLASH,
    STATE(225), 1,
      sym_end_tag,
  [11423] = 2,
    ACTIONS(1019), 1,
      anon_sym_LT_SLASH,
    STATE(224), 1,
      sym_end_tag,
  [11430] = 1,
    ACTIONS(1006), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11435] = 1,
    ACTIONS(1069), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [11440] = 1,
    ACTIONS(1071), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [11445] = 1,
    ACTIONS(1073), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [11450] = 1,
    ACTIONS(1075), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [11455] = 2,
    ACTIONS(1077), 1,
      anon_sym_DQUOTE,
    ACTIONS(1079), 1,
      aux_sym_quoted_attribute_value_token2,
  [11462] = 2,
    ACTIONS(985), 1,
      aux_sym_attribute_name_token1,
    STATE(425), 1,
      sym_attribute_name,
  [11469] = 2,
    ACTIONS(1077), 1,
      anon_sym_SQUOTE,
    ACTIONS(1081), 1,
      aux_sym_quoted_attribute_value_token1,
  [11476] = 1,
    ACTIONS(1083), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [11481] = 2,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(371), 1,
      sym_spel_th_std_expression,
  [11488] = 1,
    ACTIONS(1085), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [11493] = 1,
    ACTIONS(1087), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [11498] = 2,
    ACTIONS(1089), 1,
      anon_sym_COMMA,
    ACTIONS(1091), 1,
      anon_sym_COLON,
  [11505] = 2,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(419), 1,
      sym_spel_th_std_expression,
  [11512] = 2,
    ACTIONS(1093), 1,
      aux_sym_iterStat_token1,
    STATE(350), 1,
      sym_iterStat,
  [11519] = 2,
    ACTIONS(1095), 1,
      aux_sym_spel_object_literal_token1,
    STATE(410), 1,
      sym_spel_object_literal,
  [11526] = 2,
    ACTIONS(1097), 1,
      aux_sym_object_creation_expression_token1,
    STATE(322), 1,
      aux_sym_spel_java_class_repeat1,
  [11533] = 2,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(352), 1,
      sym_spel_th_std_expression,
  [11540] = 2,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    ACTIONS(1101), 1,
      sym_fragment_arg,
  [11547] = 2,
    ACTIONS(881), 1,
      aux_sym_url_parameter_token1,
    STATE(356), 1,
      sym_url_parameter,
  [11554] = 2,
    ACTIONS(1103), 1,
      anon_sym_LPAREN,
    ACTIONS(1105), 1,
      anon_sym_RBRACE,
  [11561] = 1,
    ACTIONS(1107), 2,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [11566] = 2,
    ACTIONS(1109), 1,
      aux_sym_object_creation_expression_token1,
    STATE(342), 1,
      aux_sym_spel_java_class_repeat1,
  [11573] = 2,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_spel_method_args,
  [11580] = 1,
    ACTIONS(1111), 1,
      anon_sym_COLON,
  [11584] = 1,
    ACTIONS(1113), 1,
      anon_sym_COLON,
  [11588] = 1,
    ACTIONS(1115), 1,
      anon_sym_DQUOTE,
  [11592] = 1,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
  [11596] = 1,
    ACTIONS(1119), 1,
      sym__doctype,
  [11600] = 1,
    ACTIONS(1121), 1,
      anon_sym_RBRACE,
  [11604] = 1,
    ACTIONS(1123), 1,
      anon_sym_RBRACE,
  [11608] = 1,
    ACTIONS(1125), 1,
      anon_sym_RBRACE,
  [11612] = 1,
    ACTIONS(1127), 1,
      aux_sym_url_parameter_token1,
  [11616] = 1,
    ACTIONS(1129), 1,
      anon_sym_RBRACE,
  [11620] = 1,
    ACTIONS(1131), 1,
      aux_sym_number_literal_token1,
  [11624] = 1,
    ACTIONS(1133), 1,
      aux_sym_number_literal_token1,
  [11628] = 1,
    ACTIONS(1135), 1,
      anon_sym_LPAREN,
  [11632] = 1,
    ACTIONS(1137), 1,
      anon_sym_RBRACE,
  [11636] = 1,
    ACTIONS(1139), 1,
      anon_sym_EQ,
  [11640] = 1,
    ACTIONS(1141), 1,
      aux_sym_token_literal_token2,
  [11644] = 1,
    ACTIONS(1143), 1,
      anon_sym_DQUOTE,
  [11648] = 1,
    ACTIONS(1145), 1,
      anon_sym_DQUOTE,
  [11652] = 1,
    ACTIONS(1147), 1,
      anon_sym_LPAREN,
  [11656] = 1,
    ACTIONS(1149), 1,
      anon_sym_DQUOTE,
  [11660] = 1,
    ACTIONS(1151), 1,
      anon_sym_RBRACE,
  [11664] = 1,
    ACTIONS(1153), 1,
      anon_sym_DQUOTE,
  [11668] = 1,
    ACTIONS(1155), 1,
      sym_fragment_arg,
  [11672] = 1,
    ACTIONS(1157), 1,
      anon_sym_SQUOTE,
  [11676] = 1,
    ACTIONS(1157), 1,
      anon_sym_DQUOTE,
  [11680] = 1,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
  [11684] = 1,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
  [11688] = 1,
    ACTIONS(1161), 1,
      anon_sym_RBRACE,
  [11692] = 1,
    ACTIONS(1163), 1,
      anon_sym_EQ,
  [11696] = 1,
    ACTIONS(1165), 1,
      anon_sym_DQUOTE,
  [11700] = 1,
    ACTIONS(1167), 1,
      anon_sym_DQUOTE,
  [11704] = 1,
    ACTIONS(1169), 1,
      anon_sym_DQUOTE,
  [11708] = 1,
    ACTIONS(1171), 1,
      anon_sym_DQUOTE,
  [11712] = 1,
    ACTIONS(1173), 1,
      anon_sym_DQUOTE,
  [11716] = 1,
    ACTIONS(1175), 1,
      anon_sym_DQUOTE,
  [11720] = 1,
    ACTIONS(1177), 1,
      anon_sym_DQUOTE,
  [11724] = 1,
    ACTIONS(1179), 1,
      anon_sym_DQUOTE,
  [11728] = 1,
    ACTIONS(1181), 1,
      anon_sym_SLASH,
  [11732] = 1,
    ACTIONS(1183), 1,
      anon_sym_GT,
  [11736] = 1,
    ACTIONS(1185), 1,
      anon_sym_RBRACE,
  [11740] = 1,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
  [11744] = 1,
    ACTIONS(1189), 1,
      aux_sym_object_creation_expression_token1,
  [11748] = 1,
    ACTIONS(1191), 1,
      anon_sym_GT,
  [11752] = 1,
    ACTIONS(1193), 1,
      anon_sym_EQ,
  [11756] = 1,
    ACTIONS(1195), 1,
      anon_sym_GT,
  [11760] = 1,
    ACTIONS(1197), 1,
      anon_sym_EQ,
  [11764] = 1,
    ACTIONS(1199), 1,
      aux_sym_object_creation_expression_token1,
  [11768] = 1,
    ACTIONS(1201), 1,
      anon_sym_RBRACE,
  [11772] = 1,
    ACTIONS(1203), 1,
      anon_sym_DQUOTE,
  [11776] = 1,
    ACTIONS(1203), 1,
      anon_sym_SQUOTE,
  [11780] = 1,
    ACTIONS(1205), 1,
      anon_sym_DQUOTE,
  [11784] = 1,
    ACTIONS(1207), 1,
      anon_sym_EQ,
  [11788] = 1,
    ACTIONS(1209), 1,
      anon_sym_EQ,
  [11792] = 1,
    ACTIONS(1211), 1,
      anon_sym_EQ,
  [11796] = 1,
    ACTIONS(1213), 1,
      anon_sym_EQ,
  [11800] = 1,
    ACTIONS(1215), 1,
      anon_sym_EQ,
  [11804] = 1,
    ACTIONS(1217), 1,
      anon_sym_EQ,
  [11808] = 1,
    ACTIONS(1219), 1,
      anon_sym_RBRACE,
  [11812] = 1,
    ACTIONS(1221), 1,
      anon_sym_RBRACE,
  [11816] = 1,
    ACTIONS(1223), 1,
      anon_sym_EQ,
  [11820] = 1,
    ACTIONS(1225), 1,
      anon_sym_RBRACE,
  [11824] = 1,
    ACTIONS(1227), 1,
      anon_sym_GT,
  [11828] = 1,
    ACTIONS(1229), 1,
      aux_sym_object_creation_expression_token1,
  [11832] = 1,
    ACTIONS(1231), 1,
      anon_sym_DQUOTE,
  [11836] = 1,
    ACTIONS(1233), 1,
      anon_sym_GT,
  [11840] = 1,
    ACTIONS(1052), 1,
      sym_erroneous_end_tag_name,
  [11844] = 1,
    ACTIONS(1235), 1,
      aux_sym_doctype_token1,
  [11848] = 1,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
  [11852] = 1,
    ACTIONS(1054), 1,
      sym__end_tag_name,
  [11856] = 1,
    ACTIONS(1237), 1,
      anon_sym_DQUOTE,
  [11860] = 1,
    ACTIONS(1050), 1,
      sym__end_tag_name,
  [11864] = 1,
    ACTIONS(1239), 1,
      anon_sym_RBRACE,
  [11868] = 1,
    ACTIONS(1241), 1,
      anon_sym_RBRACE,
  [11872] = 1,
    ACTIONS(124), 1,
      anon_sym_DOT,
  [11876] = 1,
    ACTIONS(1243), 1,
      anon_sym_GT,
  [11880] = 1,
    ACTIONS(1245), 1,
      anon_sym_EQ,
  [11884] = 1,
    ACTIONS(1247), 1,
      aux_sym_doctype_token1,
  [11888] = 1,
    ACTIONS(1249), 1,
      aux_sym_object_creation_expression_token1,
  [11892] = 1,
    ACTIONS(1251), 1,
      ts_builtin_sym_end,
  [11896] = 1,
    ACTIONS(1253), 1,
      sym__doctype,
  [11900] = 1,
    ACTIONS(1255), 1,
      anon_sym_DQUOTE,
  [11904] = 1,
    ACTIONS(1257), 1,
      anon_sym_DQUOTE,
  [11908] = 1,
    ACTIONS(1259), 1,
      anon_sym_DQUOTE,
  [11912] = 1,
    ACTIONS(1261), 1,
      anon_sym_DQUOTE,
  [11916] = 1,
    ACTIONS(1263), 1,
      anon_sym_DQUOTE,
  [11920] = 1,
    ACTIONS(1265), 1,
      anon_sym_DQUOTE,
  [11924] = 1,
    ACTIONS(1267), 1,
      anon_sym_DQUOTE,
  [11928] = 1,
    ACTIONS(1269), 1,
      anon_sym_DQUOTE,
  [11932] = 1,
    ACTIONS(1271), 1,
      anon_sym_EQ,
  [11936] = 1,
    ACTIONS(1273), 1,
      anon_sym_EQ,
  [11940] = 1,
    ACTIONS(1275), 1,
      anon_sym_EQ,
  [11944] = 1,
    ACTIONS(1277), 1,
      anon_sym_EQ,
  [11948] = 1,
    ACTIONS(1279), 1,
      anon_sym_EQ,
  [11952] = 1,
    ACTIONS(1281), 1,
      anon_sym_EQ,
  [11956] = 1,
    ACTIONS(1283), 1,
      anon_sym_EQ,
  [11960] = 1,
    ACTIONS(1285), 1,
      anon_sym_EQ,
  [11964] = 1,
    ACTIONS(1287), 1,
      sym_erroneous_end_tag_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 262,
  [SMALL_STATE(7)] = 323,
  [SMALL_STATE(8)] = 383,
  [SMALL_STATE(9)] = 443,
  [SMALL_STATE(10)] = 529,
  [SMALL_STATE(11)] = 589,
  [SMALL_STATE(12)] = 681,
  [SMALL_STATE(13)] = 741,
  [SMALL_STATE(14)] = 831,
  [SMALL_STATE(15)] = 899,
  [SMALL_STATE(16)] = 983,
  [SMALL_STATE(17)] = 1055,
  [SMALL_STATE(18)] = 1111,
  [SMALL_STATE(19)] = 1187,
  [SMALL_STATE(20)] = 1247,
  [SMALL_STATE(21)] = 1341,
  [SMALL_STATE(22)] = 1437,
  [SMALL_STATE(23)] = 1499,
  [SMALL_STATE(24)] = 1600,
  [SMALL_STATE(25)] = 1696,
  [SMALL_STATE(26)] = 1752,
  [SMALL_STATE(27)] = 1808,
  [SMALL_STATE(28)] = 1903,
  [SMALL_STATE(29)] = 1998,
  [SMALL_STATE(30)] = 2093,
  [SMALL_STATE(31)] = 2142,
  [SMALL_STATE(32)] = 2191,
  [SMALL_STATE(33)] = 2286,
  [SMALL_STATE(34)] = 2381,
  [SMALL_STATE(35)] = 2476,
  [SMALL_STATE(36)] = 2525,
  [SMALL_STATE(37)] = 2620,
  [SMALL_STATE(38)] = 2671,
  [SMALL_STATE(39)] = 2719,
  [SMALL_STATE(40)] = 2765,
  [SMALL_STATE(41)] = 2813,
  [SMALL_STATE(42)] = 2859,
  [SMALL_STATE(43)] = 2907,
  [SMALL_STATE(44)] = 2953,
  [SMALL_STATE(45)] = 2999,
  [SMALL_STATE(46)] = 3045,
  [SMALL_STATE(47)] = 3091,
  [SMALL_STATE(48)] = 3139,
  [SMALL_STATE(49)] = 3185,
  [SMALL_STATE(50)] = 3231,
  [SMALL_STATE(51)] = 3276,
  [SMALL_STATE(52)] = 3321,
  [SMALL_STATE(53)] = 3366,
  [SMALL_STATE(54)] = 3411,
  [SMALL_STATE(55)] = 3456,
  [SMALL_STATE(56)] = 3501,
  [SMALL_STATE(57)] = 3546,
  [SMALL_STATE(58)] = 3591,
  [SMALL_STATE(59)] = 3636,
  [SMALL_STATE(60)] = 3681,
  [SMALL_STATE(61)] = 3726,
  [SMALL_STATE(62)] = 3771,
  [SMALL_STATE(63)] = 3816,
  [SMALL_STATE(64)] = 3886,
  [SMALL_STATE(65)] = 3956,
  [SMALL_STATE(66)] = 4026,
  [SMALL_STATE(67)] = 4104,
  [SMALL_STATE(68)] = 4174,
  [SMALL_STATE(69)] = 4244,
  [SMALL_STATE(70)] = 4311,
  [SMALL_STATE(71)] = 4386,
  [SMALL_STATE(72)] = 4453,
  [SMALL_STATE(73)] = 4520,
  [SMALL_STATE(74)] = 4587,
  [SMALL_STATE(75)] = 4654,
  [SMALL_STATE(76)] = 4721,
  [SMALL_STATE(77)] = 4788,
  [SMALL_STATE(78)] = 4855,
  [SMALL_STATE(79)] = 4922,
  [SMALL_STATE(80)] = 4989,
  [SMALL_STATE(81)] = 5056,
  [SMALL_STATE(82)] = 5123,
  [SMALL_STATE(83)] = 5198,
  [SMALL_STATE(84)] = 5265,
  [SMALL_STATE(85)] = 5332,
  [SMALL_STATE(86)] = 5399,
  [SMALL_STATE(87)] = 5466,
  [SMALL_STATE(88)] = 5532,
  [SMALL_STATE(89)] = 5596,
  [SMALL_STATE(90)] = 5666,
  [SMALL_STATE(91)] = 5738,
  [SMALL_STATE(92)] = 5790,
  [SMALL_STATE(93)] = 5860,
  [SMALL_STATE(94)] = 5906,
  [SMALL_STATE(95)] = 5952,
  [SMALL_STATE(96)] = 6024,
  [SMALL_STATE(97)] = 6086,
  [SMALL_STATE(98)] = 6142,
  [SMALL_STATE(99)] = 6214,
  [SMALL_STATE(100)] = 6286,
  [SMALL_STATE(101)] = 6358,
  [SMALL_STATE(102)] = 6427,
  [SMALL_STATE(103)] = 6496,
  [SMALL_STATE(104)] = 6565,
  [SMALL_STATE(105)] = 6634,
  [SMALL_STATE(106)] = 6703,
  [SMALL_STATE(107)] = 6772,
  [SMALL_STATE(108)] = 6841,
  [SMALL_STATE(109)] = 6910,
  [SMALL_STATE(110)] = 6979,
  [SMALL_STATE(111)] = 7048,
  [SMALL_STATE(112)] = 7117,
  [SMALL_STATE(113)] = 7186,
  [SMALL_STATE(114)] = 7255,
  [SMALL_STATE(115)] = 7324,
  [SMALL_STATE(116)] = 7367,
  [SMALL_STATE(117)] = 7410,
  [SMALL_STATE(118)] = 7476,
  [SMALL_STATE(119)] = 7512,
  [SMALL_STATE(120)] = 7578,
  [SMALL_STATE(121)] = 7646,
  [SMALL_STATE(122)] = 7714,
  [SMALL_STATE(123)] = 7782,
  [SMALL_STATE(124)] = 7845,
  [SMALL_STATE(125)] = 7908,
  [SMALL_STATE(126)] = 7971,
  [SMALL_STATE(127)] = 8008,
  [SMALL_STATE(128)] = 8042,
  [SMALL_STATE(129)] = 8076,
  [SMALL_STATE(130)] = 8110,
  [SMALL_STATE(131)] = 8144,
  [SMALL_STATE(132)] = 8178,
  [SMALL_STATE(133)] = 8212,
  [SMALL_STATE(134)] = 8246,
  [SMALL_STATE(135)] = 8280,
  [SMALL_STATE(136)] = 8314,
  [SMALL_STATE(137)] = 8348,
  [SMALL_STATE(138)] = 8382,
  [SMALL_STATE(139)] = 8416,
  [SMALL_STATE(140)] = 8450,
  [SMALL_STATE(141)] = 8484,
  [SMALL_STATE(142)] = 8546,
  [SMALL_STATE(143)] = 8580,
  [SMALL_STATE(144)] = 8614,
  [SMALL_STATE(145)] = 8648,
  [SMALL_STATE(146)] = 8710,
  [SMALL_STATE(147)] = 8753,
  [SMALL_STATE(148)] = 8801,
  [SMALL_STATE(149)] = 8841,
  [SMALL_STATE(150)] = 8889,
  [SMALL_STATE(151)] = 8929,
  [SMALL_STATE(152)] = 8971,
  [SMALL_STATE(153)] = 9013,
  [SMALL_STATE(154)] = 9055,
  [SMALL_STATE(155)] = 9097,
  [SMALL_STATE(156)] = 9136,
  [SMALL_STATE(157)] = 9175,
  [SMALL_STATE(158)] = 9214,
  [SMALL_STATE(159)] = 9236,
  [SMALL_STATE(160)] = 9258,
  [SMALL_STATE(161)] = 9280,
  [SMALL_STATE(162)] = 9302,
  [SMALL_STATE(163)] = 9324,
  [SMALL_STATE(164)] = 9346,
  [SMALL_STATE(165)] = 9368,
  [SMALL_STATE(166)] = 9390,
  [SMALL_STATE(167)] = 9412,
  [SMALL_STATE(168)] = 9434,
  [SMALL_STATE(169)] = 9456,
  [SMALL_STATE(170)] = 9478,
  [SMALL_STATE(171)] = 9500,
  [SMALL_STATE(172)] = 9532,
  [SMALL_STATE(173)] = 9564,
  [SMALL_STATE(174)] = 9596,
  [SMALL_STATE(175)] = 9626,
  [SMALL_STATE(176)] = 9656,
  [SMALL_STATE(177)] = 9671,
  [SMALL_STATE(178)] = 9686,
  [SMALL_STATE(179)] = 9711,
  [SMALL_STATE(180)] = 9726,
  [SMALL_STATE(181)] = 9741,
  [SMALL_STATE(182)] = 9756,
  [SMALL_STATE(183)] = 9771,
  [SMALL_STATE(184)] = 9792,
  [SMALL_STATE(185)] = 9807,
  [SMALL_STATE(186)] = 9828,
  [SMALL_STATE(187)] = 9853,
  [SMALL_STATE(188)] = 9868,
  [SMALL_STATE(189)] = 9890,
  [SMALL_STATE(190)] = 9912,
  [SMALL_STATE(191)] = 9934,
  [SMALL_STATE(192)] = 9952,
  [SMALL_STATE(193)] = 9972,
  [SMALL_STATE(194)] = 9994,
  [SMALL_STATE(195)] = 10014,
  [SMALL_STATE(196)] = 10033,
  [SMALL_STATE(197)] = 10052,
  [SMALL_STATE(198)] = 10071,
  [SMALL_STATE(199)] = 10090,
  [SMALL_STATE(200)] = 10109,
  [SMALL_STATE(201)] = 10121,
  [SMALL_STATE(202)] = 10143,
  [SMALL_STATE(203)] = 10155,
  [SMALL_STATE(204)] = 10177,
  [SMALL_STATE(205)] = 10189,
  [SMALL_STATE(206)] = 10201,
  [SMALL_STATE(207)] = 10213,
  [SMALL_STATE(208)] = 10225,
  [SMALL_STATE(209)] = 10237,
  [SMALL_STATE(210)] = 10249,
  [SMALL_STATE(211)] = 10261,
  [SMALL_STATE(212)] = 10273,
  [SMALL_STATE(213)] = 10285,
  [SMALL_STATE(214)] = 10297,
  [SMALL_STATE(215)] = 10309,
  [SMALL_STATE(216)] = 10321,
  [SMALL_STATE(217)] = 10333,
  [SMALL_STATE(218)] = 10345,
  [SMALL_STATE(219)] = 10357,
  [SMALL_STATE(220)] = 10369,
  [SMALL_STATE(221)] = 10381,
  [SMALL_STATE(222)] = 10393,
  [SMALL_STATE(223)] = 10405,
  [SMALL_STATE(224)] = 10421,
  [SMALL_STATE(225)] = 10433,
  [SMALL_STATE(226)] = 10445,
  [SMALL_STATE(227)] = 10457,
  [SMALL_STATE(228)] = 10469,
  [SMALL_STATE(229)] = 10481,
  [SMALL_STATE(230)] = 10497,
  [SMALL_STATE(231)] = 10512,
  [SMALL_STATE(232)] = 10527,
  [SMALL_STATE(233)] = 10537,
  [SMALL_STATE(234)] = 10549,
  [SMALL_STATE(235)] = 10558,
  [SMALL_STATE(236)] = 10569,
  [SMALL_STATE(237)] = 10582,
  [SMALL_STATE(238)] = 10593,
  [SMALL_STATE(239)] = 10606,
  [SMALL_STATE(240)] = 10617,
  [SMALL_STATE(241)] = 10630,
  [SMALL_STATE(242)] = 10641,
  [SMALL_STATE(243)] = 10654,
  [SMALL_STATE(244)] = 10667,
  [SMALL_STATE(245)] = 10680,
  [SMALL_STATE(246)] = 10693,
  [SMALL_STATE(247)] = 10702,
  [SMALL_STATE(248)] = 10713,
  [SMALL_STATE(249)] = 10726,
  [SMALL_STATE(250)] = 10739,
  [SMALL_STATE(251)] = 10750,
  [SMALL_STATE(252)] = 10761,
  [SMALL_STATE(253)] = 10774,
  [SMALL_STATE(254)] = 10787,
  [SMALL_STATE(255)] = 10798,
  [SMALL_STATE(256)] = 10809,
  [SMALL_STATE(257)] = 10822,
  [SMALL_STATE(258)] = 10831,
  [SMALL_STATE(259)] = 10840,
  [SMALL_STATE(260)] = 10849,
  [SMALL_STATE(261)] = 10862,
  [SMALL_STATE(262)] = 10875,
  [SMALL_STATE(263)] = 10883,
  [SMALL_STATE(264)] = 10893,
  [SMALL_STATE(265)] = 10903,
  [SMALL_STATE(266)] = 10911,
  [SMALL_STATE(267)] = 10919,
  [SMALL_STATE(268)] = 10927,
  [SMALL_STATE(269)] = 10937,
  [SMALL_STATE(270)] = 10945,
  [SMALL_STATE(271)] = 10955,
  [SMALL_STATE(272)] = 10965,
  [SMALL_STATE(273)] = 10975,
  [SMALL_STATE(274)] = 10985,
  [SMALL_STATE(275)] = 10995,
  [SMALL_STATE(276)] = 11005,
  [SMALL_STATE(277)] = 11015,
  [SMALL_STATE(278)] = 11025,
  [SMALL_STATE(279)] = 11035,
  [SMALL_STATE(280)] = 11045,
  [SMALL_STATE(281)] = 11055,
  [SMALL_STATE(282)] = 11065,
  [SMALL_STATE(283)] = 11075,
  [SMALL_STATE(284)] = 11085,
  [SMALL_STATE(285)] = 11091,
  [SMALL_STATE(286)] = 11099,
  [SMALL_STATE(287)] = 11109,
  [SMALL_STATE(288)] = 11119,
  [SMALL_STATE(289)] = 11129,
  [SMALL_STATE(290)] = 11139,
  [SMALL_STATE(291)] = 11149,
  [SMALL_STATE(292)] = 11159,
  [SMALL_STATE(293)] = 11169,
  [SMALL_STATE(294)] = 11179,
  [SMALL_STATE(295)] = 11189,
  [SMALL_STATE(296)] = 11199,
  [SMALL_STATE(297)] = 11209,
  [SMALL_STATE(298)] = 11219,
  [SMALL_STATE(299)] = 11229,
  [SMALL_STATE(300)] = 11239,
  [SMALL_STATE(301)] = 11249,
  [SMALL_STATE(302)] = 11259,
  [SMALL_STATE(303)] = 11269,
  [SMALL_STATE(304)] = 11279,
  [SMALL_STATE(305)] = 11289,
  [SMALL_STATE(306)] = 11299,
  [SMALL_STATE(307)] = 11309,
  [SMALL_STATE(308)] = 11314,
  [SMALL_STATE(309)] = 11321,
  [SMALL_STATE(310)] = 11326,
  [SMALL_STATE(311)] = 11333,
  [SMALL_STATE(312)] = 11340,
  [SMALL_STATE(313)] = 11347,
  [SMALL_STATE(314)] = 11354,
  [SMALL_STATE(315)] = 11361,
  [SMALL_STATE(316)] = 11368,
  [SMALL_STATE(317)] = 11373,
  [SMALL_STATE(318)] = 11378,
  [SMALL_STATE(319)] = 11383,
  [SMALL_STATE(320)] = 11388,
  [SMALL_STATE(321)] = 11395,
  [SMALL_STATE(322)] = 11402,
  [SMALL_STATE(323)] = 11409,
  [SMALL_STATE(324)] = 11416,
  [SMALL_STATE(325)] = 11423,
  [SMALL_STATE(326)] = 11430,
  [SMALL_STATE(327)] = 11435,
  [SMALL_STATE(328)] = 11440,
  [SMALL_STATE(329)] = 11445,
  [SMALL_STATE(330)] = 11450,
  [SMALL_STATE(331)] = 11455,
  [SMALL_STATE(332)] = 11462,
  [SMALL_STATE(333)] = 11469,
  [SMALL_STATE(334)] = 11476,
  [SMALL_STATE(335)] = 11481,
  [SMALL_STATE(336)] = 11488,
  [SMALL_STATE(337)] = 11493,
  [SMALL_STATE(338)] = 11498,
  [SMALL_STATE(339)] = 11505,
  [SMALL_STATE(340)] = 11512,
  [SMALL_STATE(341)] = 11519,
  [SMALL_STATE(342)] = 11526,
  [SMALL_STATE(343)] = 11533,
  [SMALL_STATE(344)] = 11540,
  [SMALL_STATE(345)] = 11547,
  [SMALL_STATE(346)] = 11554,
  [SMALL_STATE(347)] = 11561,
  [SMALL_STATE(348)] = 11566,
  [SMALL_STATE(349)] = 11573,
  [SMALL_STATE(350)] = 11580,
  [SMALL_STATE(351)] = 11584,
  [SMALL_STATE(352)] = 11588,
  [SMALL_STATE(353)] = 11592,
  [SMALL_STATE(354)] = 11596,
  [SMALL_STATE(355)] = 11600,
  [SMALL_STATE(356)] = 11604,
  [SMALL_STATE(357)] = 11608,
  [SMALL_STATE(358)] = 11612,
  [SMALL_STATE(359)] = 11616,
  [SMALL_STATE(360)] = 11620,
  [SMALL_STATE(361)] = 11624,
  [SMALL_STATE(362)] = 11628,
  [SMALL_STATE(363)] = 11632,
  [SMALL_STATE(364)] = 11636,
  [SMALL_STATE(365)] = 11640,
  [SMALL_STATE(366)] = 11644,
  [SMALL_STATE(367)] = 11648,
  [SMALL_STATE(368)] = 11652,
  [SMALL_STATE(369)] = 11656,
  [SMALL_STATE(370)] = 11660,
  [SMALL_STATE(371)] = 11664,
  [SMALL_STATE(372)] = 11668,
  [SMALL_STATE(373)] = 11672,
  [SMALL_STATE(374)] = 11676,
  [SMALL_STATE(375)] = 11680,
  [SMALL_STATE(376)] = 11684,
  [SMALL_STATE(377)] = 11688,
  [SMALL_STATE(378)] = 11692,
  [SMALL_STATE(379)] = 11696,
  [SMALL_STATE(380)] = 11700,
  [SMALL_STATE(381)] = 11704,
  [SMALL_STATE(382)] = 11708,
  [SMALL_STATE(383)] = 11712,
  [SMALL_STATE(384)] = 11716,
  [SMALL_STATE(385)] = 11720,
  [SMALL_STATE(386)] = 11724,
  [SMALL_STATE(387)] = 11728,
  [SMALL_STATE(388)] = 11732,
  [SMALL_STATE(389)] = 11736,
  [SMALL_STATE(390)] = 11740,
  [SMALL_STATE(391)] = 11744,
  [SMALL_STATE(392)] = 11748,
  [SMALL_STATE(393)] = 11752,
  [SMALL_STATE(394)] = 11756,
  [SMALL_STATE(395)] = 11760,
  [SMALL_STATE(396)] = 11764,
  [SMALL_STATE(397)] = 11768,
  [SMALL_STATE(398)] = 11772,
  [SMALL_STATE(399)] = 11776,
  [SMALL_STATE(400)] = 11780,
  [SMALL_STATE(401)] = 11784,
  [SMALL_STATE(402)] = 11788,
  [SMALL_STATE(403)] = 11792,
  [SMALL_STATE(404)] = 11796,
  [SMALL_STATE(405)] = 11800,
  [SMALL_STATE(406)] = 11804,
  [SMALL_STATE(407)] = 11808,
  [SMALL_STATE(408)] = 11812,
  [SMALL_STATE(409)] = 11816,
  [SMALL_STATE(410)] = 11820,
  [SMALL_STATE(411)] = 11824,
  [SMALL_STATE(412)] = 11828,
  [SMALL_STATE(413)] = 11832,
  [SMALL_STATE(414)] = 11836,
  [SMALL_STATE(415)] = 11840,
  [SMALL_STATE(416)] = 11844,
  [SMALL_STATE(417)] = 11848,
  [SMALL_STATE(418)] = 11852,
  [SMALL_STATE(419)] = 11856,
  [SMALL_STATE(420)] = 11860,
  [SMALL_STATE(421)] = 11864,
  [SMALL_STATE(422)] = 11868,
  [SMALL_STATE(423)] = 11872,
  [SMALL_STATE(424)] = 11876,
  [SMALL_STATE(425)] = 11880,
  [SMALL_STATE(426)] = 11884,
  [SMALL_STATE(427)] = 11888,
  [SMALL_STATE(428)] = 11892,
  [SMALL_STATE(429)] = 11896,
  [SMALL_STATE(430)] = 11900,
  [SMALL_STATE(431)] = 11904,
  [SMALL_STATE(432)] = 11908,
  [SMALL_STATE(433)] = 11912,
  [SMALL_STATE(434)] = 11916,
  [SMALL_STATE(435)] = 11920,
  [SMALL_STATE(436)] = 11924,
  [SMALL_STATE(437)] = 11928,
  [SMALL_STATE(438)] = 11932,
  [SMALL_STATE(439)] = 11936,
  [SMALL_STATE(440)] = 11940,
  [SMALL_STATE(441)] = 11944,
  [SMALL_STATE(442)] = 11948,
  [SMALL_STATE(443)] = 11952,
  [SMALL_STATE(444)] = 11956,
  [SMALL_STATE(445)] = 11960,
  [SMALL_STATE(446)] = 11964,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_object_literal, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_object_literal, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_name, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_object_literal, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_object_literal, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_name, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_variable, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_variable, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_literal, 2, .production_id = 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_literal, 2, .production_id = 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 3, .production_id = 10),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 3, .production_id = 10),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_spel_expression, 3, .production_id = 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_spel_expression, 3, .production_id = 6),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2), SHIFT_REPEAT(17),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_spel_expression, 2, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_spel_expression, 2, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_list_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_java_class, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_java_class, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_java_class, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_java_class, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_args, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_args, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_args, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_args, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_args, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_args, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_java_field, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_java_field, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spel_literal, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spel_literal, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_projection, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_projection, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_variable, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_variable, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_literal, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_literal, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_literal, 3, .production_id = 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_literal, 3, .production_id = 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_object_literal, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_object_literal, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_access, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_access, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 2, .production_id = 10),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 2, .production_id = 10),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 4, .production_id = 10),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 4, .production_id = 10),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_java_class, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_java_class, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_java_method, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_java_method, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 5),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_assignement_expression, 3, .production_id = 11),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_assignement_expression, 3, .production_id = 11),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_parenthesized_expression, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_parenthesized_expression, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_creation_expression, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_creation_expression, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 6),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 6),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 14),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 14),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 3, .production_id = 7),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(365),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(115),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_literal, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_literal, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fragment_std_expression, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 3, .production_id = 8),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_call_repeat1, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_parameter_assignement, 3, .production_id = 16),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_th_assignation_sequence_repeat1, 4, .production_id = 18),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment_th_std_expression, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_th_std_expression, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_th_std_expression, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_th_std_expression, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_th_std_expression, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_th_std_expression, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varselect_th_std_expression, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varselect_th_std_expression, 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varselect_th_std_expression, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varselect_th_std_expression, 2),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_th_std_expression, 3, .production_id = 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_th_std_expression, 3, .production_id = 4),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_th_std_expression, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_th_std_expression, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_th_std_expression, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_th_std_expression, 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_th_std_expression, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_th_std_expression, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment_th_std_expression, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_th_std_expression, 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 3),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_value, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(354),
  [617] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(272),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(446),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(155),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(429),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(300),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(415),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(157),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bor_2, 1),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bor_2, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_than, 1),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lesser_than, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply, 1),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 1),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divide, 1),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divide, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substract, 1),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substract, 1),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(172),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(172),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(203),
  [695] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(238),
  [698] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(68),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(67),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2), SHIFT_REPEAT(191),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(147),
  [744] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(232),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(149),
  [760] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(257),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [863] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat1, 2), SHIFT_REPEAT(387),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat1, 2), SHIFT_REPEAT(345),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 3),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat1, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 4),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 2),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(255),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 6, .production_id = 1),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_th_attribute, 6, .production_id = 1),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 1),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_th_assignation_sequence_repeat1, 2, .production_id = 15),
  [980] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_th_assignation_sequence_repeat1, 2, .production_id = 15), SHIFT_REPEAT(332),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 4, .production_id = 8),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 4, .production_id = 12),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat2, 2), SHIFT_REPEAT(263),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat2, 2),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [998] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_th_fragment_declaration_repeat1, 2), SHIFT_REPEAT(372),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_th_fragment_declaration_repeat1, 2),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spel_method_args_repeat1, 2), SHIFT_REPEAT(150),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spel_method_args_repeat1, 2),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterized_url_fragment, 3),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_call_repeat1, 2), SHIFT_REPEAT(107),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_list_repeat1, 2), SHIFT_REPEAT(84),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 5, .production_id = 12),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fragment_std_expression, 3),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1064] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spel_java_class_repeat1, 2), SHIFT_REPEAT(423),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 3),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 4),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 5),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_element, 1),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 1, .production_id = 3),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_parameter, 1),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iterStat, 1),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_each_value, 3),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_fragment_declaration, 3),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 8),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_none, 1),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remove_none, 1),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 7),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_fragment_declaration, 4),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 6),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 3, .production_id = 9),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spel_java_class_repeat1, 2),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 5, .production_id = 17),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_generic, 1),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_fragment_declaration, 5),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_each_value, 5),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 5),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 4, .production_id = 13),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1251] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
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
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
  },
  [6] = {
    [ts_external_token_raw_text] = true,
  },
  [7] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
  },
  [8] = {
    [ts_external_token_erroneous_end_tag_name] = true,
  },
  [9] = {
    [ts_external_token__end_tag_name] = true,
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
