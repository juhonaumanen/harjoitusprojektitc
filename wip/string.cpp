#include <iostream>
#include <string>

int main()
{
    std::string first;
    std::string second;

    std::cout << "type something first:";
    std::getline(std::cin, first);
    std::cout << "type something else:";
    std::getline(std::cin, second);

    std::cout << "\n";
    std::cout << "First: " << first << ", second: " << second <<"\n";

    return 0;
}

//toimii