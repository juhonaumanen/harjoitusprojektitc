#include <array>
#include <iostream>

int main()
{
std::array<int, 3> arr = {1,2,3};

std::cout << arr.at(6) << std::endl;

return 0;

}