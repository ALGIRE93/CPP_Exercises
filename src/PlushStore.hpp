#pragma once
#include <iostream>

class PlushStore{
    private:
        std::string _name;
        unsigned int _money = 0;
        unsigned int _stockSize = 0;
        unsigned int _debt = 0;
    
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

        unsigned int       get_wealth_amount() const{
            return _money;
        }

        unsigned int        get_stock_size() const{
            return _stockSize;
        }

        void                loan(unsigned int cash){
            _money += cash;
            _debt += cash * 1.1;
        }

        unsigned int        get_debt_amount() const{
            return _debt;
        }

};