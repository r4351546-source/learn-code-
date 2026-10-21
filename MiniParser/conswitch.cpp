#include <conswitch.hpp>
#include <map>

using namespace std;
using namespace csw;

void realize::realization(const string& c) {
    auto vd = addVoid.find(c);
    if(vd != addVoid.end()) {
        vd->second;
    }
    else {
        other();
    }

    auto str = addStr.find(c);
    if(str != addStr.end()) {
        str->second;
    }
    else {
        other();
    }

    auto nt = AddInt.find(c);
    if(nt != AddInt.end()) {
        nt->second;
    }
    else {
        other();
    }

    auto chr = addChar.find(c);
    if(chr != addChar.end()) {
        chr->second;
    }
    else {
        other();
    }

    
}