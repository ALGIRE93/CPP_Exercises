#pragma once

#include "../lib/Unit.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <optional>
#include <functional>


using namespace std;

class Kitchen
{
    private :
        vector<reference_wrapper<Unit>> units; // équivalent à un vecteur qui a des refs

    public :

        const Unit& register_unit(Unit unit);

        const Unit* find_unit(const string& name) const;
        
};
