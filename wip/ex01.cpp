#include <iostream>

int sum(int first, int second)
{
    int value = first * second;
    return value;
}
void tulosta(int value)
{   
    
    std::cout << value << std::endl; // would print 4
    
}
int main(){

    int tulos = sum(2, 3);
    tulosta(tulos);
    return 0;
}