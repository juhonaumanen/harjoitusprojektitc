#include <iostream>
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

    if (overlap(rect1, rect2))
        std::cout << "Rectangles overlap!\n";
    
    else
        std::cout << "Rectangles do not overlap!\n";

    return 0;


}