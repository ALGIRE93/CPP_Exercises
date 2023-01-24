#pragma once

class Plush{
    private:
        unsigned int _cost = 10;

    public:
        Plush()
        {

        }

        Plush(unsigned int cost)
            : _cost { cost }
        {}
        

        unsigned int    get_cost() const {
            return _cost;
        }

        void            set_cost(unsigned int cost){
            _cost = cost;
        }

};
