#include <iostream>

int main(){
  
  //the magic starts here
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  int answer1, answer2, answer3, answer4;
  

  //questions start
  std::cout << "The Sorting Hat Quiz! \n";
  
  //question number 1
  std::cout << "Q1) When I'm dead, i want people to remember me as: \n";
  std::cout << " 1) The Good \n 2) The Great \n 3) The Wise \n 4) The Bold \n";
  std::cin >> answer1;
  
  if (answer1 == 1)
  	{
    	hufflepuff ++;
  	}
  else if(answer1 == 2)
  	{
    	slytherin++;
  	}
  else if(answer1 == 3)
  	{
  		ravenclaw++;  
  	}
  else if(answer1 == 4)
  	{
  		gryffindor++;  
  	}
  else 
  	{
    	std::cout << " Not quite. invalid input! \n";
  	}
  
  //question number 2
  
   std::cout << "Q2 Dawn or Dusk? \n";
   std::cout << " 1) Dawn 2) Dusk\n";
  	std::cin >> answer2;

	if (answer2 == 1)
  	{
    	gryffindor ++, ravenclaw++;
  	}
	else if (answer2 ==2)
		{
  		hufflepuff++, slytherin++;
		}
	else
		{
  		std::cout << " Not quite. invalid input! \n";
		}
  
//question number 3
  
std::cout << "Q3) Which kind of instrument most pleases your ear? \n";
  std::cout << " 1) The violin\n 2) The Trumpet\n 3) The piano\n 4) The drum\n";
  std::cin >> answer3;
  
  if(answer3 == 1)
  	{
   	 	slytherin ++;
  	}
  else if(answer3 == 2)
  	{
    	hufflepuff ++;
  	}
  else if(answer3 == 3)
  	{
     	ravenclaw ++;
  	}
      else if(answer3 == 4)
  	{
    	gryffindor ++;
  	}
  else
  	{
      std::cout << " Not quite. invalid input! \n";	
  	}
  
  //question number 4
  
	std::cout << "Q4) Which road tempts you most? \n";
   std::cout << " 1) The wide, sunny grassy lane\n 2) The narrow, dark, lantern-lit alley\n 3) The twisting, leaf-strewn path through woods\n 4) The cobbled street lined (ancient buildings)\n";
  std::cin >> answer4;
  
  if(answer4 ==1)
  	{
    	hufflepuff ++;
  	}
  
  else if(answer4 ==2)
  	{
    	slytherin ++;
  	}
    else if(answer4 ==3)
  	{
    	gryffindor ++;
  	}
      else if(answer4 ==4)
  	{
    	ravenclaw ++;
  	}
      else
  	{
    	std::cout << " Not quite. invalid input! \n";	
  	}
  
  //process of sorting starts
  int max;
  std::string house;
  
    std::cout << " You have been chosen to \n";
  if (gryffindor > max)
  	{
    	max = gryffindor;
    	house = "GRRRRYFFINDOR";
  	}
  if (hufflepuff > max )
  	{
    	max = hufflepuff;
    	house = "Hufflepuff";
  	}
    if (ravenclaw > max )
  	{
    	max = ravenclaw;
    	house = "Ravenclaw";
  	}
  if (slytherin > max )
  	{
    	max = slytherin;
    	house = "Slytherin";
  	}
  std::cout << house << "!\n";
  
  return 0;
}
