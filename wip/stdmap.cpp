#include <unordered_map> // or <map>
#include <string>
#include <iostream>

// [] square brackets are pointing at a memory address
int main()
{
    std::unordered_map<std::string, std::string> addresses;

    adresses[" Peter Pan"] = "Neverland";
    adresses[Piglet] = "100 acre wood";

    for (const std::pair<std::, std::string>& address : addresses)
    std::cout << "address for " << address.first << " is " << address.second << "\n";

    std::cout << "I don't think " << addresses["Piglet"] << " is very big.\n";

    
}