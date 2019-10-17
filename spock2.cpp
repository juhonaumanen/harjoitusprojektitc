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
#include <ctime>

int main()
{
  srand(time(0));
  int computer = std::rand() % 5 + 1;
  int user = 0;
  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;
  
// GAME BEGINS
  
// COMPUTER SHOWS ALTERNATIVES
std::cout << "============================================\n";
std::cout << "              L E T S   P L A Y             \n";
std::cout << "  rock * paper * scissors * lizard * spock! \n";
std::cout << "============================================\n";

std::cout << "1) ROCK\n";
std::cout << "2) PAPER\n";
std::cout << "3) SCISSORS\n";
std::cout << "4) LIZARD\n";
std::cout << "5) SPOCK\n\n";
std::cout << "PICK A MOVE! ";

//TAKING USER CHOICE

std::cin >> user;

// PRINTING USER CHOICE

  	if (user == 1)
        {
            std::cout << "You chose      1) ROCK\n";
        }
  	else if (user == 2)
        {
		    std::cout << "You chose      2) PAPER\n";
        } 
    else if (user == 3)
        {
			std::cout << "You chose      3) SCISSORS\n"; 
        }
    else if (user == 4)
        {
			std::cout << "You chose      4) LIZARD\n";  
        }
    else if(user == 5)
        {
            std::cout << "You chose 5) SPOCK\n";
        }

//std::cout << "COMPUTER: " << computer << "\n";

// PRINTING COMPUTER CHOICE

  	if (computer == 1)
        {
            std::cout << "Computer chose 1) ROCK\n";
        }
  	else if (computer == 2)
        {
		    std::cout << "Computer chose 2) PAPER\n";
        } 
    else if (computer == 3)
        {
			std::cout << "Computer chose 3) SCISSORS\n"; 
        }
    else if (computer == 4)
        {
			std::cout << "Computer chose 4) LIZARD\n";  
        }
    else if(computer == 5)
        {
            std::cout << "Computer chose 5) SPOCK\n";
        }

// DETERMINING THE WINNER   

if (user == rock && computer == scissors)
    {
        std::cout << "****** You WIN ****** \n";
    }
else if (user == scissors && computer == paper)
    {
        std::cout << "****** You WIN ****** \n";
    }
else if (user == paper && computer == rock)
    {
        std::cout << "****** You WIN ****** \n";
    }
else if (user == lizard && computer == spock)
    {
        std::cout << "****** You WIN ****** \n";
    }
else if (user == spock && computer == scissors)
    {
        std::cout << "****** You WIN ****** \n";
    }
else if (user == scissors && computer == lizard)
    {
        std::cout << "****** You WIN ****** \n";
    }
else if (user == lizard && computer == paper)
    {
        std::cout << "****** You WIN ****** \n";
    }
else if  (user == paper && computer == rock)
    {
        std::cout << "****** You WIN ****** \n";
    }
else if (user == spock && computer == rock)
    {
        std::cout << "****** You WIN ****** \n";
    }
else if (user == rock && computer == lizard)
    {
        std::cout << "****** You WIN ****** \n";
    }
else if (user == computer)
    {
        std::cout << "DRAW! \n";
    }
else 
    {
        std::cout << "You Lose! \n";
    }


    return 0;
}
