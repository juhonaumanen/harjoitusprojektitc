/*The logic:

Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors.*/

#include <iostream>
#include <stdlib.h>
//
int main()
{
  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;
  
 // GAME BEGINS
  
	// COMPUTER SHOWS ALTERNATIVES
std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n\n";
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "PICK A SIGN! ";
  
std::cin >> user;

// printing user choice
  	if (user == 1)
      std::cout << "You chose 1) ✊\n";
  	else if (user == 2)
			std::cout << "You chose 2) ✋\n";  
  	else (user == 3)
      std::cout << "You chose 3) ✌️\n"; 
  
  // computer response
  	if (computer == 1)
      std::cout << "Computer chose 1) ✊\n";
    else if (computer == 2)
      std::cout << "Computer chose 2) ✋\n";
  	else (computer == 3)
      std::cout << "Computer chose 3) ✌️\n";
   
// DETERMINING THE WINNER   
      
  //tie situation
  if (user == computer)
    	std::cout << "IT IS A TIE! \n";
    
  // User chose rock
    if (user == 1)
    {
      if (computer == 2)
        std::cout << "You Lost, Computer wins! \n";
      else if (computer == 3)
        std::cout << "****** You WIN ****** \n";
    }
// User chose paper
    if (user == 2)
    {
      if (computer == 1)
        std::cout << "You Lost, Computer wins! \n";
      else if (computer == 3)
        std::cout << "****** You WIN ****** \n";
    }
  
  
}
