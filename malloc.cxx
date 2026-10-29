#include <cstdlib>
#include <iostream>

int main() {
    int malloc;
    std::cout << "enter malloc size: ";
    std::cin >> malloc;
    if(malloc >= 300000) {
        std::cout << "very big malloc, return 0" << std::endl;
        return 0;
    }
    int* num = static_cast<int*>(std::malloc(malloc * (sizeof(int))));
    std::cout << "number for new malloc variable(int): ";
    std::cin >> *num;
    std::free(num);

    return 0;

}