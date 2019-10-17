#include <iostream>

int multiply(int a, int b)
{
    int product = a * v;
    return product;
}

void print(int num) 
{
    std::cout << num << std::endl;

}

int main()
{
    int num1 = 2;
    int num2 = 4;

    float f1 = 0.5;
    float f2 = 2.0;

    int prod = multiply(num1, num2);
    float fprod = multiply(f1, f2);

    print(prod)
    
    return 0;
}