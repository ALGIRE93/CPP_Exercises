#pragma once

#include <iostream>
#include "InstanceCounter.hpp"
#include "NodeKind.hpp"
#include <memory>

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

        virtual ~Node() = default; // déconstructeur

        virtual string print() const = 0;


};

using NodePtr = unique_ptr<Node>;

