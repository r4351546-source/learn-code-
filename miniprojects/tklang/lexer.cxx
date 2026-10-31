#include "lexer.hxx"
#include <cctype>

char lexer::advance() {
    return src[current++];
}

char lexer::peek() {
    if(current >= src.size()) {
        return '\0';
    }

    return src[current];
}

void lexer::skipWhitespace() {
    while(current < src.size() && 
    std::isspace(static_cast<unsigned char>(src[current]))) {
        current++;
    }
}

void lexer::skipcomment() {
    if(src[current] == '/' && src[current + 1] == '/') {
        current++;
    }
}

token lexer::readOperator() {

    char c = advance();

    switch(c) {

        // Assignment operators
        case '=':
            if(peek() == '=') {
                advance();
                return {tokenType::EQUAL, 
                    std::string_view(src.data() + start, current - start)};
            }
            return {tokenType::ASSIGN,
                std::string_view(src.data() + start, current - start)};

        case '+':
            if(peek() == '=') {
                advance();
                return {tokenType::PLUSASSIGN,
                    std::string_view(src.data() + start, current - start)};
            }
            return {tokenType::PLUS,
                std::string_view(src.data() + start, current - start)};

        case '-':
            if(peek() == '=') {
                advance();
                return {tokenType::MINUSASSIGN,
                    std::string_view(src.data() + start, current - start)};
            }
            return {tokenType::MINUS,
                std::string_view(src.data() + start, current - start)};

        case '*':
            if(peek() == '=') {
                advance();
                return {tokenType::MULTIPLYASSIGN,
                    std::string_view(src.data() + start, current - start)};
            }
            return {tokenType::MULTIPLY,
                std::string_view(src.data() + start, current - start)};

        case '/':
            if(peek() == '=') {
                advance();
                return {tokenType::DIVIDEASSIGN,
                    std::string_view(src.data() + start, current - start)};
            }
            return {tokenType::DIVIDE,
                std::string_view(src.data() + start, current - start)};

        // Comparison operators
        case '!':
            if(peek() == '=') {
                advance();
                return {tokenType::NOTEQUAL,
                    std::string_view(src.data() + start, current - start)};
            }
            break;

        case '<':
            if(peek() == '=') {
                advance();
                return {tokenType::LESSEQUAL,
                    std::string_view(src.data() + start, current - start)};
            }
            return {tokenType::LESS,
                std::string_view(src.data() + start, current - start)};

        case '>':
            if(peek() == '=') {
                advance();
                return {tokenType::GREATEREQUAL,
                    std::string_view(src.data() + start, current - start)};
            }
            return {tokenType::GREATER,
                std::string_view(src.data() + start, current - start)};

        // Punctuation
        case ';':
            return {tokenType::semicolon,
                std::string_view(src.data() + start, current - start)};

        case '(':
            return {tokenType::leftparen,
                std::string_view(src.data() + start, current - start)};

        case ')':
            return {tokenType::rightparen,
                std::string_view(src.data() + start, current - start)};

        case '{':
            return {tokenType::leftbrace,
                std::string_view(src.data() + start, current - start)};

        case '}':
            return {tokenType::rightbrace,
                std::string_view(src.data() + start, current - start)};
    }

    return {tokenType::invalid,
        std::string_view(src.data() + start, current - start)};
}

