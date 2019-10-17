#include <string>
#include <algorithm>
#include <iostream>

int main()
{
    std::string myStr = "juho";
    myStr [0] = toupper(myStr[0]);

    std::cout << myStr << std::endl;
}