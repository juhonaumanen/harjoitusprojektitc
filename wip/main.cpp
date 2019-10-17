#include <iostream>
#include "yard.hpp"
#include "rectangle.hpp"
int main()
{
    Rectangle rect1;
    Rectangle rect2;

    rect1.x = 5.2;
    rect1.y = 1.5;
    rect1.width = 10.0;
    rect1.height = 18.0;

    rect2.x = 10.0;
    rect2.y = 11.0;
    rect2.width = 12.0;
    rect2.height = 10.0;

    Yard yard;
    yard.base = rect2;
    yard.shack = rect1;
    std::cout << yard.relative_shack_size() << "\n";
    return 0;


}