
//make a program that checks if a string is a finnish register plate
//has to have 3 uppercase letters, a dash and 1to3 numbers

#include <iostream>
#include <string>
#include <cctype>

bool isLetter(char c)
{
    if(c >= 'A' && <= 'Z')
    return true;
    else
    
        return false;
    
    
}
bool isDigit(char c){
    if (c>='0' && c <='9')
    return true;
        else
             return false;
    
}

int main()
{
    std::string registerPlate;
    
    std::cin << registerplate;
        if (registerPlatte.size() <5){
            std::cout << "too short license plate ";
            return 1;

        }
        if (registerPlate.size())// tässä menossa
        std::string mystr1 = registerPlate.substr(0, 3);

        for(int i = 0; i < 3; ++i )

        if(mystr1[i] >='A' && mystr1[i]<='Z')
        std::cout << "is a letter.\n";
        else
        {
            std::cout << "is not letter.\n";
        }
        
    /*    
    mystr1.size( = 3);
    mystr1.find(a, b ,c);
    std::string mystr2 == "-";
    mystr2.size = 1;
    std::string mystr3 = "123";
    mystr3.size = 3;
    mystr1.find(1, 2 ,3);

  std::cout << "Enter license plate first part \n;"
    std::cin >> mystr1;
    std::cout << "Enter license plate second part \n;"
    std::cin >> mystr2;
    std::cout << "Enter license plate last part \n;"
    std::cin >> mystr3;
*/

return 0;
}