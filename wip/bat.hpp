//#ifndef BAT_HPP
#define BAT_HPP
#include <iostream>
#include <string>


namespace Baseball
{
struct Bat
    {   //baseball bat
    
        std::string material = "";
        int lenght = 0;
        void print();
        

    

    };
}
namespace Animal
{
    struct Bat
    {   // animal bat
        float weight = 0.0;
        std::string name = "";
        int age = 0;
        void print()
        {
            std::cout << "Hi, this is " << name << " aged " << age << " weighing " << weight << " kilos." << std::endl;
        }
        
    };
}
//#endif