#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

unsigned int balik = 1000;
int norm = 0;
mutex mt;


void operation() {
for(int i = 0; i < 100; i++) {
    mt.lock();

    if(balik >= 10) {
        ++norm;
        balik -= 10;
    }
    mt.unlock();
}
}

int main() {
    thread tt(operation);
    thread ff(operation);
    thread rr(operation);
    thread kk(operation);

    tt.join();
    ff.join();
    rr.join();
    kk.join();

    cout << "балік: " << balik << endl;
    cout << "нормально разів зроблено: " << norm << endl;

    return 0;
}