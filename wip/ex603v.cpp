#include <iostream>
#include <vector>
#include <array>

std::vector<std::string> allnumbers;

int main(){
    std::array<std::string,9> numbers = {"yksi", "kaksi", "kolme", "nelja", "viisi", "kuusi", "seitseman", "kahdeksan", "yhdeksan"};

    std::vector<std::string, 9> allnumbers;

    for(int i = 0; i < numbers.size(); ++i)
    {
        allnumbers.emplace_back(numbers[i]+ "toista");
    }
    for (int ten = 2; ten < 10; ++ten){
        for(int num = 0; num < 10; ++num)
        {
            std::
        }
    }

}
