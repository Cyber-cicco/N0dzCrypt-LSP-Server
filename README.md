# Thymeleaf grammar for tree-sitter (with SPEL integration)

Grammar for the base thymeleaf templating language used in Spring boot.

There are two possible versions of base thymeleaf : one using OGNL expression, and the other using SPEL expressions. The choice has been made to implement SPEL instead of OGNL, since Spring Boot uses SPEL, and this parser was made to act as the basis of an LSP for a meta-framework that implements Spring Boot and Thymeleaf.

Thymeleaf is extremely flexible, and might be personalised to have a syntax that differs from this tree-sitter implementation. So keep in mind that it will only parse correctly if you haven't messed too much with thymeleaf base configuration.
