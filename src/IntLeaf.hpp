#pragma once

#include <iostream>
#include <string>

#include "Node.hpp"
#include "Leaf.hpp"

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

};
