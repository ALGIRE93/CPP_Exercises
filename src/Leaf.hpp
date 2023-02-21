#include <iostream>
#include "Node.hpp"

using namespace std;

class Leaf : public Node
{
    private :

    protected :
        Leaf(NodeKind nodeKind)
            : Node {nodeKind}
        {}

    public :

};