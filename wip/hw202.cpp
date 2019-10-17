#include <iostream>

bool isHappy(bool hasStress, bool hasIcecream){
    if(!hasStress && hasIcecream) // tässä oli && aikaisemmassa harjotuksessa, mitä nämä on nimeltään?
    return true; // ahaa ! käyttämällä voidaan kääntää arvo vastakkaiseksi, eli ei stressiä mutta jäätelöä!
    return false;

   
}
    

int main(){

    std::cout << isHappy (false, false) << "\n"; // should be 0 FALSE
    std::cout << isHappy (false, true) << "\n"; // should be 1 TRUE
    std::cout << isHappy (true, false) << "\n"; // should be 0 FALSE
    std::cout << isHappy (true, true) << "\n"; // should be 0 FALSE
    return 0;
}