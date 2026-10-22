#include <iostream>
#include <thread>
#include <atomic>

using namespace std;

static atomic<int> counter = 0;

void add() {
    ++counter;
    cout << counter << endl;
}

int main() {
    thread t(add);
    thread t2(add);
    thread t3(add);
    t.join();
    t2.join();
    t3.join();
}
