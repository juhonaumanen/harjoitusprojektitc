#include <iostream>
#include "rectangle.hpp"


float Rectangle::area()
{
    return width * height;
}
bool overlap(const Rectangle& r1, const Rectangle& r2)
{
    if ((r1.x > r2.x + r2.width)|| (r2.x + r1.width))
        return false;
    if ((r1.y > r2.y + r2.height) || (r2.y > r2.y + r2.height))
        return false;
    return true;}
