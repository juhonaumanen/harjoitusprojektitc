#include <iostream>
#include <algorithm>
#include <list>

int main()
{
    std::list<int> list ={1};
    for (int i = 2; i < 10; ++i)
    {

    

    std::list<int>::iterator it = std::find(list.begin(), list.end(), i / 2);
        if (it != list.end())
        {
            list.insert(it, i);
        }
    //tämä printtaa koko listan kaikkine päivineen
    for (int n : list){
        std::cout << n << '\n';
    }
    }
}