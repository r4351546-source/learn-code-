#pragma once
#include <string_view>
#include <vector>
#include <string>

enum class tokenType {
    IDENTIFIER,
    PRINT,

    //awarding
    ASSIGN,     //=
    PLUSASSIGN, //+=
    MINUSASSIGN,//-=
    MULTIPLYASSIGN,//*=
    DIVIDEASSIGN,  // /=

    //arithmetic
    PLUS,
    MINUS,
    MULTIPLY,
    DIVIDE,


    //simile
    EQUAL,      //==
    NOTEQUAL,   //!=
    LESS,       //<
    GREATER,    //>
    LESSEQUAL,  //<=
    GREATEREQUAL,//>=  

    //variables
    INTEGER,
    FLOAT,
    STRING,
    CHAR,
    BOOL,
    
    //conditions
    IF,
    ELIF,
    ELSE,

    //other
    semicolon,   //semicolon — ;
    leftparen,   //leftparen — (
    rightparen,  //rightparen — )
    leftbrace,   //leftbrace — {
    rightbrace,   //rightbrace — }
    invalid
};

struct token {
    tokenType TokenType;
    std::string_view lexeme;
};

class lexer {
    private: 
    int line;
    int column;

    std::string src;
    std::vector<token> tokens;

    //private for functions
    private:
    char advance(); //переміщує на наступний символ
    char peek();    //дивиться на символ без переміщення
    void skipWhitespace(); 
    void skipcomment();
    void match();
    token readIdentifier();
    token readNumber();
    token readString();
    token readOperator();

    void addToken(tokenType type, std::string value);

    public:
    std::vector<token> mainlexer(const std::string& source);
    
};
