#include <string>
#include <iostream>
#include <set>
#include <vector>
#include <functional>

// kertoo kahdella
void multiply_2x_to_vector(int& n)
{
    n = n*2;
};

// on jaollinen kahdella
void iseven(int& n)
{
    n = n % 2;
};
//vähentää kolme
void substract_3(int& n)
{
    n = n-3;
};
/* tää on kokeilu
std::vector<int> filtervector(std::vector <int>& v, std::function<void(int&)> lambda )
std::vector<int> newVector;
    for(int value : vector) */
    
// kun käytät auto funktioita tarvitsee compileri -fconcepts parametrin!!!!
void range_function(std::vector<int>& v, auto func){

    for (int& n : v)
        func (n);
};

int main()
{
    std::vector<int> v = {};
  // add_one_to_int([](std::vector& myvector;
    
    
    // tässä on for looppi 0 sta 10n
    for(int i = 1; i < 10; ++i)
    
    {   
        v.emplace_back(i); // tämä lisää vektori v:n jälkeen numerot

        int n = v [i];

        std::cout << n  << std::endl;
    
    }
    std::cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*LAMBDA*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
    range_function(v, [](int& n){++n;});
    range_function(v, multiply_2x_to_vector);
    range_function(v, substract_3);
    //range_function(v, iseven);
    for (int n :  v)
    {
        std::cout << n << std::endl;
    }

    // add_one_to_vector([](int& n) {++n;});

return 0;


}