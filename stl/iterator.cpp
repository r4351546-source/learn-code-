#include <vector>
#include <string>
#include <iostream>

using namespace std;

void fu(vector<string> d) {
    while(true) {
    cout << "->> ";
    string s;
    cin >> s;
    auto iterator = d.begin();
        int x = 0;
    if(s == "push") {
        string q;
        cin >> q;
        d.push_back(q);
    }
    else if(s == "iterator") {
        char x;
        cin >> x;

        if(x == '+') {
            ++iterator;
        }
        else if(x == '-') {
            --iterator;
        }
    }
    else if(s == "list") {
        for(auto z : d) {
            cout << x << "." << z << endl;
            x++;
        }
    }
    else if(s == "itercur") {
        cout << "curent iterator: " << *iterator << endl;
    }

    }
}

int main() {
    vector<string> xl;
    fu(xl);
}