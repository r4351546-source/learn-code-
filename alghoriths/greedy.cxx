#include <iostream>
#include <vector>
#include <algorithm>

void func(int& amount){
    std::vector<int> coins = {5, 3, 8, 4};
    for(int coin : coins) {
        while(amount >= coin) {
            amount -= coin;
            std::cout << coin << "  ";
        }
    }
}

int main() {
    int x;
    std::cin >> x;
    func(x);
}