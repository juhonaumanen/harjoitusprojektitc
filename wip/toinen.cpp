#include <iostream>
int main()
{
    int num; //first initialize the variable
    std::cout <<"Please input your number:" << "\n";
    std::cin >> num; // we read the number to variable "num"
    // here we can do stuff wit "num"
    num + 2;
    std::cout << "Your number is " << num << "\n";
    return 0;
}