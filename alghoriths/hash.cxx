#include <iostream>
#include <string>


void hash(const std::string& text) {
        std::cout << "hash(" << text << "): " << text.size() << std::endl;
}

int main() {
    hash("declarate");
    hash("function");
    
return 0;
}

