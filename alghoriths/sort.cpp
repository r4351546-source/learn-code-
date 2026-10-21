#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;



int main() {
    vector<int> nums = {
        21,
        2, 
        33,
        8,
        12,
        49,
    };
        cout << "no sort:" << endl;
        for(auto x : nums) {
            cout << x << endl;
        }
        sort(nums.begin(), nums.end());

        cout << "with sort: " << endl;
        for(auto x : nums) {
            cout << x << endl;
        }
        
        cout << "with reverse sort:" << endl;
        sort(nums.begin(), nums.end(), greater<>());
        for(auto x : nums) {
            cout << x << endl;
        }

    return 0;
}