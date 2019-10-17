#include <iostream>

int main(){

    for (int x = 0; x <= 4; x++){ // toistaa kaikki brackettien sisällä olevat 5 kertaa 0 on myös numero ensimmäinen iteraatio
    for (int a = 0; a < 10; a++){
        std::cout << a << std::endl;
    }
    for (int a = 0; a < 10; a++){
        std::cout << a << std::endl;
    }
    for( float i = 10; i < 55; i=i+2.5){
        std::cout << i << std::endl;
    }

    for(float f= 0.0; f < 1.0; f+= 0.1){
        std::cout << f << "jee" << std::endl;
    }
}
    return 0;
}