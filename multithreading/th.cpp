#include <iostream>
#include <thread>
#include <functional>

using namespace std;

void calculate(int num1, int num2, int num3, int& result) {
    result = num1 + num2 + num3;
    
    cout << "result:" << result << endl; 
}

int main() {
    int r1ft1;
    int r2ft2;
    int r3ft3;
    int mainresult;

    thread t1(calculate, 1, 2, 3, ref(r1ft1));
    thread t2(calculate, 5, 4, 6, ref(r2ft2));
    thread t3(calculate, 6, 7, 2, ref(r3ft3));
    thread t4(calculate, r1ft1, r2ft2, r3ft3, ref(mainresult));

    t1.join();
    t2.join();
    t3.join();
    t4.join();

}