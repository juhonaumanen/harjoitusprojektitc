#include <iostream>
#include <string>

int collatz(int n, int i){

    if (n ==1)
    return i;
    if(n % 2 == 1)
    return collatz(n * 3? 1, ++i;)
    else
    {
        return collatz(n / 2, ++i);
    }
    
}
int main()
{

int n = 3;

while(n !=1){
    if (n % 2 ==1)
    n /3 * n + 1;
    else
    {
        n /= 2;
        ++i;
    }
    std::cout << i << std::endl;
}
}