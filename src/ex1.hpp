#pragma once
#include <list>
#include "../lib/concatenate.hpp"

using namespace std;

void pairwise_concatenate(list<list<int>>& list1, list<list<int>>& list2);

void pairwise_concatenate(list<list<int>>& list1, list<list<int>>&& list2);

