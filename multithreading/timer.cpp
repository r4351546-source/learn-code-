#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>
#include <cstdlib>

using namespace std;

atomic<int> minute = 0;
atomic<int> seconds = 0;
bool run = true;

void timer() {
    while(run) {
        this_thread::sleep_for(chrono::seconds(1));
        seconds++;
    

        if(seconds >= 60) {
            minute++;
        }
        
        std::system("clear");
        cout << "time(minutes and seconds):" << minute << "m, " << seconds << "s" << endl;
}
}

int main() {
    thread timr(timer);
    timr.join();
    return 0;
}