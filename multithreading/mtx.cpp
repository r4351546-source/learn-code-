#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

using namespace std;

mutex mt;

void bal() {
    mt.lock();
    static int balance = 0;

    for(int i = 0; i < 100000; i++) {
        balance++;
    }
    cout << "балік: " << balance << endl;
    mt.unlock();
}

int main() {
    thread ty(bal);
    thread tr(bal);
    thread tu(bal);
    thread tg(bal);

    ty.join();
    tr.join();
    tu.join();
    tg.join();
}