#include <iostream>
#include <string>

struct PlayingCard{
    void print(){
        std::string stringValue;
        if(value > 1 && value <= 10){
            stringValue = std::to_string(value);
        else if (value == 1)
            std::cout << "Ace of" << suit << "\n";
        else if (value == 11)
            std::cout << "Jack of" << suit << "\n";
        else if (value == 12)
            std::cout << "Queen of" << suit << "\n";
        else if (value == 1)
            std::cout << "King of" << suit << "\n";
        }
    }
    std::cout << value << " of "<< suit "\n";

    std::string suit = "";
    int value = 0;
};

int main()
{
    PlayingCard my_card;

    my_card.suit ="diamonds";
    my_card.value = "11";
   
   PlayingCard my_second_card;
   my_second_card.suit = "spades";
   my_second_card.value = 1;
   

   for(int i = 1; i <=13; ++i){
       PlayingCard card;
       card.suit = "hearts";
       card.value = i;
       card.print();
   }
}