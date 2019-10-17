#include <iostream>
int main()
{
    int num; //first initialize the variable
    
    std::cout <<"How wide is your square in meters" << "\n";
    std::cin >> num; // we read the number to variable "num"
    // here we can do stuff wit "num"
    num = num * num;
    std::cout << "Your area is " << num  << "\n";
    return 0;
}