#include <iostream> 
#include <string>

int main(int argc, char* argv[])
{
    std::string str(argv[1]);
    int i = std::stoi(str);
    std::cout << i + 2 << std::endl;
    return 0;
}