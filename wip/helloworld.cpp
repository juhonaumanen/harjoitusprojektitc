#include <iostream>
int main()
{
    char john = 'k';
    int tyrion = 1200000000;
    int arya = tyrion + tyrion;
    int joffrey = 5;
    bool hodor = true;
    float neddard = 0.12345;
    double jamie = 3.123123123123;

    bool b;
    bool b1 { true };
    bool b2 { false };
    b1 = false;
  
    std::cout << "Conan, what is best in life?\n";
    std::cout << "Conan: To crush your enemies, see them driven before you, and to hear the lamentations of their women!\n";
    
    std::cout << "Variable john is " << john << std::endl;
    std::cout << "Variable tyrion is " << tyrion <<std::endl;
    std::cout << "Variable arya is " << arya <<"\n";
    std::cout << "Variable joffrey is " <<joffrey << "\n";
    std::cout << "Variable joffrey is " <<hodor<< "\n";
   
    return 0;
}