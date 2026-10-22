#include <iostream>

using namespace std;

template<typename... Args>
void printT(Args... args) {
    (std::cout << ... << args);
}

int main() {
    char x = 'c';
    int s = 9900;
    printT("hi", x, s);
}