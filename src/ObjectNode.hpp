#pragma once

#include <string>
#include "Node.hpp"

using namespace std;

class ObjectNode : public Node
{
    private :

    public :
        ObjectNode()
            : Node(NodeKind::OBJECT)
        {}

        string print() const override;

        //static NodePtr make_ptr();

};
