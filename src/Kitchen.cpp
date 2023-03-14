#include "Kitchen.hpp"

#include <utility>

//auto it = units.emplace(units.end(), move(unit));
//return *it; // avant la ref wrap *it

const Unit& Kitchen::register_unit(Unit unit)
{
    units.emplace_back(unit);
    return units.back();
}

const Unit* Kitchen::find_unit(const string& name) const{
    for(auto it = units.begin(); it != units.end(); it++){
        if(it->get().name == name){ // it->name
            return &(it->get()); // &(*it)
        }
    }
    return nullptr;
}
