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
int main()
{
  srand (time(0));
  int computer = std::rand() % 5 + 1;
  int user = 0;
  
// GAME BEGINS
  
// COMPUTER SHOWS ALTERNATIVES
std::cout << "========================================\n";
std::cout << "  rock paper scissors lizar spock!\n";
std::cout << "========================================\n\n";
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "4) L\n";
std::cout << "4) S\n";
std::cout << "PICK A SIGN! ";
  
std::cin >> user;

// PRINTING USER CHOICE
  	if (user == 1)
      std::cout << "You chose 1) ✊\n";
  	else if (user == 2)
			std::cout << "You chose 2) ✋\n";
    else if (user == 3)
			std::cout << "You chose 3) ✌️\n"; 
    else if (user == 4)
			std::cout << "You chose 4) L\n"; 
  	else (user == 5)
      std::cout << "You chose 5) S\n"; 
  
  // PRINTING COMPUTER RESPONSE
  	if (computer == 1)
      std::cout << "Computer chose 1) ✊\n";
    else if (computer == 2)
      std::cout << "Computer chose 2) ✋\n";
    else if (computer == 3)
      std::cout << "Computer chose 3) ✌️\n";
    else if (computer == 4)
      std::cout << "Computer chose 4) L\n";
  	else (computer == 5)
      std::cout << "Computer chose 5) S\n";
   
// DETERMINING THE WINNER   
      
// TIE SITUATION HAPPENED
  if (user == computer)
    	std::cout << "IT IS A TIE! \n";
    
// User chose ROCK ✊
    if (user == 1)
    {
      if (computer == 2)
        std::cout << "You Lost, Computer wins! \n";
      else if (computer == 3)
        std::cout << "****** You WIN ****** \n";
      else if (computer == 4)
        std::cout << "****** You WIN ****** \n";
      else (computer == 5)
        std::cout << "You Lost, Computer wins! \n";
    }
// User chose PAPER ✋
    if (user == 2)
    {
      if (computer == 1)
        std::cout << "****** You WIN ******! \n";
      else if (computer == 3)
        std::cout << "You Lost, Computer wins \n";
      else if (computer == 4)
        std::cout << "You Lost, Computer wins \n";
      else (computer == 5)
        std::cout << "****** You WIN ****** \n";
    }
// User chose SCISSORS ✌️
    if (user == 3)
    {
      if (computer == 1)
        std::cout << "You Lost, Computer wins! \n";
      else if (computer == 2)
        std::cout << "****** You WIN ****** \n";
      else if (computer == 4)
        std::cout << "****** You WIN ****** \n";
      else (computer == 5)
        std::cout << "You Lost, Computer wins! \n";
    }

  // User chose LIZARD L
    if (user == 4)
    {
      if (computer == 1)
        std::cout << "You Lost, Computer wins! \n";
      else if (computer == 2)
        std::cout << "****** You WIN ****** \n";
      else if (computer == 3)
        std::cout << "You Lost, Computer wins! \n";
      else (computer == 5)
        std::cout << "****** You WIN ****** \n";
    }
   // User chose SPOCK S
    if (user == 5)
    {
      if (computer == 1)
        std::cout << "****** You WIN ****** \n";
      else if (computer == 2)
        std::cout << "You Lost, Computer wins! \n";
      else if (computer == 3)
        std::cout << "****** You WIN ****** \n";
      else (computer == 4)
        std::cout << "You Lost, Computer wins \n";
    }
}
