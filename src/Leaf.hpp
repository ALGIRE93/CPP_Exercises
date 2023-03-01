#include <iostream>
#include "Node.hpp"


using namespace std;

class Leaf : public Node
{

    protected :
        Leaf(NodeKind nodeKind)
            : Node {nodeKind}
        {}



};