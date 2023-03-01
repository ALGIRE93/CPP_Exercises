#include "ObjectNode.hpp"

using namespace std;

string ObjectNode::print() const{
    string result = "{";

    result += "}";
    return result;
}

NodePtr ObjectNode::make_ptr(){
    return make_unique<ObjectNode>();
}