#ifndef YARD_HPP
#define YARD_HPP
#include "rectangle.hpp"


struct Yard
{
    float relative_shack_size();

    Rectangle shack;
    Rectangle base;

};
#endif