#include <conswitch.hpp>
#include <map>

using namespace std;
using namespace csw;

void realize::realization(const string& c) {
    auto str = addStr.find(c);
    auto chr = addChar.find(c);
    auto vd = addVoid.find(c);
    auto nt = AddInt.find(c);


    if(vd != addVoid.end()) {
        vd->second;
    }

    else if(str != addStr.end()) {
        str->second;
    }

    else if(nt != AddInt.end()) {
        nt->second;
    }
    
    else if(chr != addChar.end()) {
        chr->second;
    }
    else {
        int els = other();
    }

    
}