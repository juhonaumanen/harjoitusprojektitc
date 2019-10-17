#include <iostream>

void loop(int n)
{
    if(n == 10)
    return;

    std::cout << n << "\n";
    loop(n +1);

    }
int main(){
    loop(0);
    return 0;
}