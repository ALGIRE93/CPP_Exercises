#pragma once
#include <iostream>

class PlushStore{
    private:
        std::string _name;
    
    public:
        // PlushStore(const std::string& name)
        //     : _name { name }
        // {

        // }
        PlushStore(const std::string name)
            : _name { name }
        {}

        const std::string& get_name() const{
            return _name;
        }

};