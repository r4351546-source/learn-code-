#include "lexer.hxx"
#include <cctype>
#include <string>

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