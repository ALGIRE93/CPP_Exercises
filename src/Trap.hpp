#pragma once

#include <string>
#include "Card.hpp"

using namespace std;


enum class TrapType
{
    Normal,
    Continuous,
    Counter
};

string to_string(TrapType trapType)
{
    switch(trapType)
    {
        case TrapType::Normal:
            return "Normal";
        case TrapType::Continuous:
            return "Continuous";
        case TrapType::Counter:
            return "Counter";
        default:
            return "";
    };

}

class Trap : public Card
{
    private :
        TrapType _trapType;

    public :
        Trap( string id, string name, TrapType trapType)
            : Card { id, CardType::Trap }
            , _trapType { trapType }
        {
            set_name( name );
            _symbol = u8"罠";
        }

        TrapType get_trap_type(){
            return _trapType;
        }
};
