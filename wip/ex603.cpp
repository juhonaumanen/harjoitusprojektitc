#include <iostream>
#include <vector>
#include <array>



std::vector<std::string> allnumbers;

int main(){
    std::array<std::string,9> numbers = {"yksi", "kaksi", "kolme", "nelja", "viisi", "kuusi", "seitseman", "kahdeksan", "yhdeksan"};

        for (int i = 0; i < 9; ++i)
        {
            allnumbers.emplace_back(numbers[i]);
        }
    allnumbers.emplace_back("kymmenen");
    
    for (int i = 0; i < 9; i++)
    {
        allnumbers.emplace_back(numbers[i] +"toista");
    }

    for (int i = 0; i < allnumbers.size(); ++i)
        std::cout << allnumbers[i] <<std::endl;
    
    return 0;

}

