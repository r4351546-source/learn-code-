#include <thread>
#include <iostream>
#include <string>

using namespace std;

void output(string output) {
    cout << output << endl;
}

int main() {
    string a;
    getline(cin,a);

    thread p(output, a);
    p.join();
}
//very easy project