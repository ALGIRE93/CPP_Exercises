#pragma once

#include <string>
#include <memory>

class Trainer; //PUTIN DE MERDE pas de include

using namespace std;


// A creature that is cute and can fight other ones.
class Pokemon
{
    private :
        string _name;
        int _id = 0;
        static inline int next_id = 0;
        const Trainer* _trainer = nullptr;

    public :
        //Constructeur
        Pokemon(const string& name)
            : _name {name}
            , _id { next_id++ }
        {}

        //Constructeur de copies
        Pokemon(const Pokemon& other)
            : _name {other._name}
            , _id { next_id++ }
        {}

        //Redéfinition du operator =
        Pokemon& operator=(const Pokemon& other){
            if(this != &other){
                _name = other._name;
            }
            return *this;
        }

        const string& name() const{
            return _name;
        }

        int id() const{
            return _id;
        }

        //Test 9, obtenir le dresseur d'un Pokemon et le placer
        const Trainer* trainer() const{
            return _trainer;
        }

        void set_trainer(const Trainer& trainer){
            _trainer = &trainer;
        }

};

using PokemonPtr = unique_ptr<Pokemon>;
