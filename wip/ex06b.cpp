#include <iostream>


int main(){
int a = 1;
int b = 1;
    while(true){
        if( a >= 1000){
            std::cout << "Exiting.." << std::endl;
            break; //exit the loop
        }
        b++;
        std::cout << b << " #loop " << "a is " << a << std::endl;
        if(b % 3 == 0){
            continue;
        }
    
       a= a+b;
       
    }
  //  while( a <= 1000;)
}