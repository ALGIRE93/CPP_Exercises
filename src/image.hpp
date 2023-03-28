#pragma once

#include "pixels.hpp"

#include "../lib/lib.hpp"

#include <stdint.h>
#include <cstddef>
#include <functional>
#include <string>
#include <array>
#include <iostream>

using namespace std;

template<typename P, size_t W, size_t H>
struct Image{
    private :
        array<array<P, W>, H> _data;
    public :
        Image(const P& pix)
        {
            for(size_t j = 0; j < H; j++){
                for(size_t i = 0; i < W; i++){
                    _data[j][i] = pix;
                }
            }
        }

        Image() = default;

};