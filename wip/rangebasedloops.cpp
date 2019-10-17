#include <string>
#include <iostream>
#include <set>
#include <vector>

int main()
{
    // tässä voi olla joko std::vector.. tai std::set mutta jälkimmäinen loop ei toimi seteille
    std::vector<std::string> foods= {"Lasagna", "Steak", "Peasoup", "Pizza", "Pasta"};


    // yksi : tarkoittaa rangea range from food to foods
    for(const std::string food : foods)
    {
        std::cout << food << std::endl;
    }
    // seuraava ei toimi seteille, mutta vectorille toimii
    for(int i = 0; i < foods.size(); ++i)
    {
        std::string food = foods[i];
        std::cout << food << std::endl;
    }
return 0;


}