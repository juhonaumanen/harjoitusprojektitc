#include <iostream>
using namespace std;

int main()
{
    int num;
        std::cout << "Enter your number please." << std::endl;
        std::cin >> num; // number entered
        // here we can do stuff wit "num"
       
    if ( num % 2 == 0) //if number is dividable by 2 it is even
        std::cout << num << "is even." << std::endl;
    
    else  //if number is not dividable by 2 it is odd
    
        std::cout << num << " is odd." << std::endl;
    
    return 0;
}