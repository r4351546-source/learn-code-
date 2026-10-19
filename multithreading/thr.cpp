#include <iostream>
#include <thread>
#include <string>

using namespace std;

void wk(int start, int end) {
    while(start < end) {
        ++start;
        cout << start << endl;
    }
}

int main() {
    thread t1(wk, 1, 5);
    thread t2(wk, 10, 15);
    thread t3(wk, 100, 105);
    t1.join();
    t2.join();
    t3.join();

}