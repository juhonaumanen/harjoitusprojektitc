#include <iostream>
#include <string>
#include "bat.hpp"


Animal::Bat getNewBat()
{
    Animal::Bat newBat;
    newBat.name ="bruce";
    newBat.age = 5;
    newBat.weight = 2.3;
    return newBat;
};

Baseball::Bat getNewBBBat()
{
    Baseball::Bat newBat;
    newBat.material = "Rosewood";
    newBat.lenght = 72;



    return newBat;

        
};  


int main()
{

    Baseball::Bat BaseballBat = getNewBBBat();
    BaseballBat.print();
    
    Animal::Bat FlyingBat = getNewBat();
    FlyingBat.print();
   
return 0;
}