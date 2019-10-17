#include <iostream>
int main()
{
    int num; //first initialize the variable
    
    std::cout <<"What is your birth year?" << "\n";
    std::cin >> num; // we read the number to variable "num"
    // here we can do stuff wit "num"
    2019 - num;
    std::cout << "Your number is " << 2019 - num   << "\n";
    return 0;
}