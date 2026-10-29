#include <conswitch.hpp>
#include <map>

using namespace std;
using namespace csw;

void realize::realization(const string& c) {
    auto vd = addVoid.find(c);
    if(vd != addVoid.end()) {
        vd->second;
    }

    auto str = addStr.find(c);
    if(str != addStr.end()) {
        str->second;
    }

    auto nt = AddInt.find(c);
    if(nt != AddInt.end()) {
        nt->second;
    }

    auto chr = addChar.find(c);
    if(chr != addChar.end()) {
        chr->second;
    }
    if(vd == addVoid.end() &&
    str == addStr.end() &&
    nt == AddInt.end() &&
    chr == addChar.end()
) {
    other();
}
    
}