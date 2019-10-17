#include <string>
#include <iostream>
int main()
{
    std::string str1="voipaketti";
    
    {
        
    }
    
    std::string str2="maito";
    {
        
    }
    
    str1.size();
    str2.size();
    if (str1.size() >8){
        std::cout << "Is longer than 8 ";
    }
    else 
        std::cout << "Is shorter than 8 ";

        if (str2.size() >8){
        std::cout << "Is longer than 8 ";
    }
    else 
        std::cout << "Is shorter than 8 ";
        
    
    return 0;
}