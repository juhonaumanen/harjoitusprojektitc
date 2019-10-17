//etsi toimiva koodi discordista jonka teemu postasi
#include <iostream>

struct Point{
    static int z; 
    int x;
    int y;
};

int Point::z = 0;

int main(){

    Point a;
    Point b;
    Point c;

    a.x = 3;
    a.y = 5;
    int Point::z = 5;


    b.x = 4;
    b.y = 2;

    c.x = 1;
    c.y = 3;

    std::cout << Point::z << std::endl;
}