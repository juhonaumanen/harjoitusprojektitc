#include <iostream>

int factorial( int n){

    for(int i = 0; i < n; ++i) {
        std::cout << i << std::endl;
    }

    int i = 0;
   // tähän:
    if(i < n) {
        //suorita sisällä
        ++i;
       // jump tähän;
    }

    return 0;
} 

int main(){

    int n;
    std::cout << "Give number:";
    std::cin >> n;
    

    std::cout << "Your result is " << factorial(n) << std::endl;

    return 0;
}