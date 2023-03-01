#include "IntLeaf.hpp"

using namespace std;

unique_ptr<IntLeaf> IntLeaf::make_ptr(int data){
    return make_unique<IntLeaf>(data);
}
