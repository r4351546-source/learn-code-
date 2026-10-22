#include <mutex>
#include <thread>
#include <iostream>
#include <string>

using namespace std;

mutex mt;

void nums(int endnum) {
    mt.lock();
        for(int x = 0; x < endnum; x++) {
            cout << x << '/' << endnum << endl;
        }
    mt.unlock();
}


int main() {
    int endnum;
    string args;

    while(cin >> args) {
        if(args == "num") {
            cin >> endnum;
            thread t(nums, endnum);
        }
    }
    return 0;
}