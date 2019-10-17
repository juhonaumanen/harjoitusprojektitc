#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    //construct and initialise at the same time!
    std::array<int, 3> a1{1, 2, 3}; //might need double braces for older standards

    //another way to do the same
    std::array<int, 3> a2 = {3, 1, 2};

    //we can use container operations
    std::sort(a2.begin(), a2.end());

    //print elements of a2
    for (int i = 0; i < a2.size(); i++)
    std::cout << a2[i] << "\n";

    a2[0] = 42; // we can access and change the elements how we like

    return a2[0];
}