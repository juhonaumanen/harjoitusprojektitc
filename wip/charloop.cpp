#include <iostream>
#include <string>

int main()
    {
    std::string str = "";
    for(int i = 1; i <= 10; ++i){
        str += "&";
        std::cout << str << "\n";
    }
  
    return 0;
    }
