#include <iostream>
int main()
{
   float num; //first initialize the variable
    
    std::cout <<"How long is the side of the triangle?" << "\n";
    std::cin >> num; // we read the number to variable "num"
    // here we can do stuff wit "num"
    num = num * num /2 ;
    std::cout << "Your area is " << num  << "\n";
    return 0;
}