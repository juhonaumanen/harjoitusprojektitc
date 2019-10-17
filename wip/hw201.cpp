#include <iostream>
using namespace std;

float distance;
float time;
float speed;

float calculate(float distance, float time){
    return distance / time;

    std::cout << "Object speed is " << speed << std::endl;
}

int main()
{

int distance;
    std::cout << "How many meters object traveled? " << std::endl;
    std::cin >> distance;  // number entered
int time;
    std::cout << "How many seconds it took? " << std::endl;
    std::cin >> time; // number entered

float result = calculate(distance, time);
    std::cout << "Object speed is " << result <<"km/h" << std::endl;
return 0;
}