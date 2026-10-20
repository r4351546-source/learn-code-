#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void search(int target) {
    int array[] = {2, 3, 1, 8, 13, 4};
    target = 12;
    int size = 6; 

    for(int x = 0; x < size; x++) {
        if(array[x] == target) {
            cout << "(found)target: " << x << endl;
            break; 
        }
        else if(array[x] != target) {
            cout << "(not found)target: " << x << endl;
        }
    }
}

int main() {
    int target;
    search(target);
}