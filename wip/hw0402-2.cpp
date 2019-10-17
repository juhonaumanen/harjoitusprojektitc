#include <iostream>
#include <string>

// tässä on countteri
   static int counter = 0;
   ++counter;

   std::cout << "Function is called " << counter <<" times. " << std::endl; 

int main()
{   
        counter();
        counter();
        counter();
        counter();
          
            
        return 0;
}
