/*
 * This file will contain the definition of all the tokens and their corresponding values used in our lexer.
*/


// Keywords start from 1
enum keywords {
    INT=1,
    SHORT,
    LONG,
    LONG_LONG,
    SIGNED,
    UNSIGNED,
    CHAR,
    IF,
    ELSE,
    WHILE,
    CONTINUE,
    BREAK,
    RETURN,
};

// Operators start from 50
enum operators {
    // Relational
    EQUAL = 50,
    NEQUAL,
    GE,
    LE,
    GEQ,
    LEQ,
    EQEQ,
    // Arithmetic
    PLUS,
    MINUS,
    MUL,
    DIV,
    MODULO,
    INC,
    DEC,
    // Bitwise 
    AND,
    OR,
    XOR,
    NOT,
    LSHIFT,
    RSHIFT,
    // Assignment
    PLUSEQ,
    MINUSEQ,
    MULEQ,
    DIVEQ,
    MODEQ
};

// Special Characters start at 100
enum special_chars {
    COMMA =100,
    FORWARD_SLASH,
    OPEN_PARANTHESIS,
    CLOSE_PARANTHESIS,
    OPEN_BRACE,
    CLOSE_BRACE,
    OPEN_SQR_BKT,
    CLOSE_SQR_BKT
};

enum identifier {
    IDENTIFIER = 200
};
 