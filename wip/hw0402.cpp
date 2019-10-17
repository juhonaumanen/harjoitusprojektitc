#include <iostream>
#include <string>

char *mystring = "This is a repeating function.";

int main()
{   // tässä on countteri
   static int counter = 0;
        
           // char *mystring = "This is a repeating function.";
            char myFunction(mystring);
            std::cout << "Function is called " << counter <<" times. " << std::endl; 
        return 0;
}
void myFunction(void)
    {
        static int counter = 0;
        counter ++;
        std::cout << mystring << std::endl;
    }
