#include "ex1.hpp"

void pairwise_concatenate(list<list<int>>& list1, list<list<int>>& list2){
    // List de concaténation de list
    auto it1 = list1.begin();
    for(auto it2 = list2.begin(); it2 != list2.end(); it2++){
        concatenate(*it1, *it2); //value de l'iterator 1 et 2 concate
        it1++;
    }
}

void pairwise_concatenate(list<list<int>>& list1, list<list<int>>&& list2){
    auto it1 = list1.begin();
    for(auto it2 = list2.begin(); it2 != list2.end(); it2++){
        concatenate(*it1, move(*it2)); //value de l'iterator 1 et move(*it2) concate (On bouge la valeur depuis une liste de liste R-value)
        it1++;
    }
}

