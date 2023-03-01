#include "StringLeaf.hpp"

using namespace std;

//Fonction Doom pour un foutu printf

string StringLeaf::print() const{
    std::string result;
    // result.reserve(_data.size() + 2);
    // result += '"';
    // for (char c : _data)
    // {
    //     if (c == '\\' || c == '"')
    //         result += '\\';
    //     result += c;
    // }
    result += '"';
    return result;
}

// unique_ptr<StringLeaf> StringLeaf::make_ptr(string data){
//     return make_unique<StringLeaf>(data);
// }