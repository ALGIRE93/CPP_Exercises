#pragma once
#include <string>
#include <iostream>

using namespace std;


enum CardType { Monster, Spell, Trap};

string to_string(CardType cardType){
    string res ="";
    switch (cardType)
    {
    case Monster/* constant-expression */:
        /* code */
        res = "Monster";
        break;
    case Spell:
        res = "Spell";
        break;
    
    default:
        res = "Trap";
        break;
    }
    return res;
};

class Card {
    private :
        string _id;
        CardType _cardType;
        string _name = "";
        string _description = "";

    public :
        Card(string id, CardType cardType)
        : _id { id }
        , _cardType { cardType }
        {}

        string get_id() const{
            return _id;
        }

        CardType get_type() const{
            return _cardType;
        }

        string get_name() const{
            return _name;
        }

        string get_description() const{
            return _description;
        }

        void set_name(string name){
            _name = name;
        }

        void set_description(string description){
            _description = description;
        }
};


