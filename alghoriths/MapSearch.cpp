#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

void MSearch(map<int, int> x, int target) {
    auto it = x.find(target);
    if(it != x.end()) {
        cout << "Target found" << endl;
    }
    else {
        cout << "target lost" << endl;
    }
}

int main() {
    map<int, int> x {
        {22, 21},
        {16, 23}, 
        {15, 7},
        {11, 1}
    };
    MSearch(x, 22);
    MSearch(x, 11);
    MSearch(x, 24);
}