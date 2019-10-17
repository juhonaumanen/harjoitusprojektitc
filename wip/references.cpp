#include <iostream>
struct Rectangle {
    
    float area()
    {
        return width * height;
    }
    float width = 0.0;
    float height = 0.0;

    float x = 0.0;
    float y = 0.0;
};
bool overlap(Rectangle r1, Rectangle r2);

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
bool overlap(Rectangle r1, Rectangle r2)
    {
        if ((r1.x > r2.x + r2.width) || (r2.x > r1.x + r1.width))
            return false;
        if ((r1.y > r2.y + r2.height) ||(r2.y > r1.y + r1.height))
            return false;
    
        return true;

    }