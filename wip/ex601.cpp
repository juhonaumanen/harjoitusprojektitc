#include <array>
#include <iostream>
#include <algorithm>




int main()
{                           //0, 1, 2, 3, 4, 5

std::array<float, 5> arr = {0, 1, 2, 3, 4};

std::cout << arr.at(4) << std::endl;

    for (int row = 0; i < arr.size(); ++i)
        {
            std::cout << arr[i];
            for (int i = row; i < arr.size(); ++row)
                {
                    std::cout << arr[i];
                }

        }



return 0;
}