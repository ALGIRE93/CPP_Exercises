#pragma once

#include "Node.hpp"
#include <string>
#include <vector>


using namespace std;

class ArrayNode : public Node
{
    private :
        //vector<NodePtr> _data; //besoin d'un unique_ptr dans Node
    public :
        ArrayNode()
            : Node(NodeKind::ARRAY)
        {}

        string print() const override;

        static unique_ptr<ArrayNode> make_ptr();
};
