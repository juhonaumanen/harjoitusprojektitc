#include <iostream>

//tää näyttää argv arrayn joka syötetään ohjelman nimen kirjoittamisen jälkeen /argv bla bla bla jne.
int main (int argc, char* argv[]){

    for (int i = 0; 1 < argc; ++i)
    {
        std::cout <<argv[i] << "\n";
    }
    return 0;
}