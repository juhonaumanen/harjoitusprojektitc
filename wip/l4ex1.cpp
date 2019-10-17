#include <iostream>
struct PlayingCard {
    
    void print()
        {
            
            std::cout << value;
            if (clubs == true)
                std::cout << " of clubs " << "\n";
            if (spades == true)
                std::cout << " of spades " << "\n";
            if (hearts == true)
                std::cout << " of hearts " << "\n";
            if (diamonds == true)
                std::cout << " of diamonds " << "\n";
        }
    
    std::string suit = "hearts";
    
        bool clubs = 0;
        bool spades = 0;
        bool hearts = 0;
        bool diamonds = 0; 
        
    
        int value = 0;
        
                
};
int main()
{
    PlayingCard card1;
    card1.spades=true;
    card1.value=5;
    card1.print();

    return 0;
}