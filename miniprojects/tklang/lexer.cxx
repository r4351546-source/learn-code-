#include "lexer.hxx"
#include <cctype>

char lexer::advance() {
    return src[current]++;
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

}