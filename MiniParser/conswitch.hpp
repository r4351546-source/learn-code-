#pragma once 
#include <functional>
#include <map>
#include <string>



namespace csw {
    std::map<std::string, std::function<void()>> addVoid;
    std::map<std::string, std::function<int()>> AddInt;
    std::map<std::string, std::function<std::string()>> addStr;
    std::map<std::string, std::function<char()>> addChar;
    std::function<int()> other; 
};

namespace realize {
    void realization(const std::string& c);
};