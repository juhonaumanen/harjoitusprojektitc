#include <unordered_map> // or <map>
#include <string>
#include <iostream>


int main()
{                      //sompany    phone number
    std::unordered_map<std::string, std::string> phonenumbers;

    // yhden rivin ratkaisukin on jossa key ja value erotetaan {} sisällä pilkulla.

    phonenumbers["Baabel"] = "08 5522134";
    phonenumbers["Santa Maria"] = "08 344887";
    phonenumbers["Turtles"] = "08 5555595";
    phonenumbers["Da Mario"] = "08 379 505";



   // for (const std::pair<std::string, std::string>& phonenumber : phonenumbers)
   // std::cout << "address for " << phonenumber.first << " is " << phonenumber.second << "\n";

    
    std::string input;
    std::cout << "What is the name of the restaurant?" << std::endl;
    std::getline(std::cin, input);


    std::cout << "the phonenumber is " << phonenumbers[input] << std::endl;
    
}