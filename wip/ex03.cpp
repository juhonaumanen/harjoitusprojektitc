#include <iostream>
int main()
{
   int a_value = 3;
   int b_value = 9;
   int c_value = 2;

    if (a_value > b_value && a_value > c_value) // Check if a is smaller than b and c
        std::cout << "Largest value is A";

    else if (b_value > a_value && b_value > c_value)
        std::cout << "Largest value is B";
    else 
        std::cout << "Largest value is C";


    return 0;
}