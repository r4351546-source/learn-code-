#include <iostream>
#include <string>

template<typename T>
T add(T a, T s) {
    return a + s;
}

template<typename T>
T subst(T s, T q) {
    return s - q;
}

template<typename T> 
T divide(T x, T c) {
    if(c == 0) {
        return 1;
    }
    return x / c;

}

template<typename T>
T multiple(T s, T w) {
    return s * w;
}

using namespace std;

void calcInt(int a, int s) {
    char symbol;
    cin >> symbol;
    if(!cin.get()) {
        cout << "input crashed!" << endl;
        return;
    }

    if(symbol == '+') {
        cout << add(a, s) << endl;
    }
    else if(symbol == '-') {
        cout << subst(a, s) << endl;
    }
    else if(symbol == '/') {
        cout << divide(a, s) << endl;;
    }
    else if(symbol == '*') {
        cout << multiple(a, s) << endl;;
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    calcInt(x, y);

}