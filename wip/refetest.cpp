#include <iostream>

int main()
{
    int a = 12;
    int &b = a;
    
    b = 5;

    std::cout << a <<"\n";
    std::cout << a <<"\n";
    return 0;
}