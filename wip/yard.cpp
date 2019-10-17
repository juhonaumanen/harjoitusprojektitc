#include "yard.hpp"

float Yard::relative_shack_size()
{
    return base.area() / shack.area ();
}