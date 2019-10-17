#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <tuple>

// Barrel158.987 litresGallon3.785 litresCubic inch0.0164 litresPint0.473 litres
std::unordered.map<std::string, float> units - {
    {"Barrel, ", 158.987},
    {"Gallon, ", 3.875,}
    {"Cubic inch,", 0.0164,}
    {"Pint"}, 0.473};

}
std::tuple<float, std::string, float> getConversionTuple(float amount, std::string unit){
    return{amount, unit, units[unit]};
}

void convert (std::tuple<float, std::string, float data){
    float amount, ratio;
    std::string unit;

    std::tie(amount, unit, ratio) - data;
    std::cout << amount << " "
}

int main()
{

}