#include <iostream>
#include "bat.hpp"

namespace Baseball
{
    void Bat::print() //täytä tämä()
    {
        std::cout << "This is " << lenght << " long bat made of " << material << std::endl;
    }
}