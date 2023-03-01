#include "ArrayNode.hpp"

string ArrayNode::print() const{
    std::string result = "[";
    // for (unsigned i = 0; i < _data.size(); ++i)
    // {
    //     if (i > 0)
    //         result += ",";
    //     result += _data[i]->print();
    // }
    result += ']';
    return result;
}

// NodePtr ArrayNode::make_ptr(){
//     return make_unique<ArrayNode>();
// }