#include <iostream>
#include <tuple>
#include <string>

std::tuple <float amount, std::string <unit>, float multiplier> get_litrevalue()
{
    return std::make_tuple(158,987, 'l', "litres");
};

int main()
{


float litre = 1;
float barrel = 158.987;
float gallon = 3.785;
float cinch = 0.0164;
float pint = 0.473;

float input = 0;
std::cout << "input amount and type (amount) ";
std::cin >> input >> "\n";



}