#pragma once
#include <Card.hpp>

#include <string>
#include <iostream>

// using namespace std;

// enum Attribute {Dark, Divine, Earth, Fire, Light, Water, Wind};

// string to_symbol(Attribute attribute){
//     string res = "";
//     switch (attribute)
//     {
//     case Dark/* constant-expression */:
//         /* code */
//         res = u8"闇";
//         break;
    
//     case Divine:
//         res = u8"神";
//         break;
    
//     case Earth:
//         res = u8"地";
//         break;

//     case Fire:
//         res = u8"炎";
//         break;
    
//     case Light:
//         res = u8"光";
//         break;

//     case Water:
//         res = u8"水";
//         break;

//     case Wind:
//         res = u8"風";
//         break;
    
//     default:
//         break;
//     }
//     return res;
// }

// class Monster : public Card{
//     private :
//         Attribute _attribute = {};
//         string _category;
//         const unsigned int _atk;
//         const unsigned int _def;


//     public :
//         Monster(string id, string name, Attribute attribute, string category, const unsigned int atk, const unsigned int def)
//             :Card { id , CardType::Monster}
//             , _attribute {attribute}
//             , _category {category}
//             , _atk {atk}
//             , _def {def}
//         {
//             set_name(name);
//         }

//         Attribute get_attribute(){
//             return _attribute;
//         }

//         unsigned int get_atj(){
//             return _atk;
//         }

//         unsigned int get_def(){
//             return _def;
//         }
        
        

// };
