#pragma once

#include <iostream>
#include <string>

#include "Leaf.hpp"


using namespace std;

class StringLeaf : public Leaf
{
    private :
        string _data;

    protected :
        StringLeaf(string data)
        : Leaf { NodeKind::STRING }
        , _data { data }
        {}

        string print() const override;
        
};
