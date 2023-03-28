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
        /*test0101*/
        array<array<P, W>, H> _data; 
    public :
        /*test0101*/
        Image(const P& pix) 
        {
            for(size_t j = 0; j < H; j++){
                for(size_t i = 0; i < W; i++){
                    _data[j][i] = pix;
                }
            }
        }
        /*test0101*/
        Image() = default; 

        /*test0102*/
        P& operator()(const size_t i, const size_t j){
            return _data[j][i];
        }

        /*test0102*/
        const P& operator()(const size_t i, const size_t j) const{
            return _data[j][i];
        }

        // Image<P, W, H>(const function<P(const size_t, const size_t)>& functor){
        //     for(size_t j = 0; j < H; j++){
        //         for(size_t i = 0; i < W; i++){
        //             (*this)(i,j) = functor(i,j);
        //         }
        //     }
        // }

};

template<typename P, size_t W, size_t H>
Image<P, W, H> operator+(const Image<P,W,H>& image1, const Image<P,W,H>& image2){
    Image<P,W,H> res = {};
    for(size_t j = 0; j < H; j++){
        for(size_t i = 0; i < W; i++){
            res(i,j) = image1(i,j) + image2(i,j);
        }
    }
    return res;
}