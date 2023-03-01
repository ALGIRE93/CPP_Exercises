#pragma once

#include <iostream>
#include <string>

#include "Node.hpp"
#include "Leaf.hpp"

using namespace std;

class StringLeaf : public Leaf{
    private :
        string _data;

    public :
        StringLeaf(string data)
            : Leaf { NodeKind::STRING }
            , _data { data }
        {}

        const string& data() const{
            return _data;
        }

        string print() const override; // regarder StringLeaf.cpp

        //static unique_ptr<StringLeaf> make_ptr(string data);
        
};
