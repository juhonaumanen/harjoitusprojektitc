#include <iostream>

bool isPizza(bool hasCheese, bool hasTomato){
    if(hasCheese && hasTomato)
    return true;
    return false;
}

int main(){

    std::cout << isPizza (false, false) << "\n"; // should be 0 FALSE
    std::cout << isPizza (false, true) << "\n"; // should be 0 FALSE
    std::cout << isPizza (true, false) << "\n"; // should be 0 FALSE
    std::cout << isPizza (true, true) << "\n"; // should be 1 TRUE
    return 0;
}