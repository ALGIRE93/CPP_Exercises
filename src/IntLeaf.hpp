#pragma once

#include <iostream>
#include <string>

#include "Node.hpp"
#include "Leaf.hpp"

using namespace std;

class IntLeaf : public Leaf {
    private :
        int _data;

    public :
        IntLeaf(int data)
            :  Leaf { NodeKind::INT }
            , _data { data }   
        {}

        inline const int& data() const {
            return _data;
        }

        string  print() const override {
            return to_string(_data);
        }

        static unique_ptr<IntLeaf> make_ptr(int data); // cette ligne place leaf en redéfinition

};
