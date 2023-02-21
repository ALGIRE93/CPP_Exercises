#pragma once

#include <iostream>
#include "InstanceCounter.hpp"
#include "NodeKind.hpp"

using namespace std;

class Node : public InstanceCounter
{
    private :
        NodeKind _nodeKind;

    protected :
        Node(NodeKind nodeKind)
        : _nodeKind { nodeKind }
        {}

    public :
        NodeKind kind(){
            return _nodeKind;
        }

        virtual string print() const = 0;


};

