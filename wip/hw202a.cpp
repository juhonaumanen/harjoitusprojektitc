#include <iostream>


bool isPlayable(int playerCount)
{
    if (playerCount == 4){
        return true;
    }
    return false;
    
}
int main(){

    std::cout << isPlayable(3) << "not enough players" "\n";
    std::cout << isPlayable(4) << "Lets play!" "\n";

    return 0;
}