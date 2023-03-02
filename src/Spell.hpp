#pragma once

#include <string>
#include "Card.hpp"

using namespace std;

enum class SpellType
{
    Normal,
    Equip,
    Continuous,
    QuickPlay,
    Field
};

string to_string(SpellType spellType)
{
    switch(spellType)
    {
        case SpellType::Normal:
            return "Normal";
        case SpellType::Equip:
            return "Equip";
        case SpellType::Continuous:
            return "Continuous";
        case SpellType::QuickPlay:
            return "Quick-Play";
        case SpellType::Field:
            return "Field";
        default:
            return "";
    };
}

class Spell : public Card
{
    private :
        SpellType _spellType;

    public :
        Spell(string id, string name, SpellType spellType)
            :Card { id, CardType::Spell}
            , _spellType { spellType }
        {
            set_name( name );
            _symbol = u8"魔";
        }

        SpellType get_spell_type(){
            return _spellType;
        }
};
