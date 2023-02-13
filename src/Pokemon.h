#pragma once

#include <string>
#include <memory>

using namespace std;

// A creature that is cute and can fight other ones.
class Pokemon
{
    private :
        string _name;
        unsigned int _id = 0;
        unsigned int incr_id = 0;
    
    public :
        Pokemon(const string& name)
            : _name {name}
            , _id { incr_id++ }
        {}

        Pokemon(const Pokemon& other)
            : _name {other._name}
            , _id { incr_id++ }
        {}

        const string name() const{
            return _name;
        }

        int id() const{
            return _id;
        }

        Pokemon& operator=(const Pokemon& other){
            if(this != &other){
                _name = other._name;
            }
            return *this;
        }

        

};

using PokemonPtr = unique_ptr<Pokemon>;