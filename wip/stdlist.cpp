#include <iostream>
#include <algorithm>
#include <list>

int main()
{
    //create a list containing integers
    std::list<int> list = {7, 5, 16, 8};
    //add an integer to the front of the list
    list.push_front(25);
    //add an integer to the back of the list
    list.push_back(13);
    //insert an integer !before! 16 by searching
    std::list<int>::iterator it = std::find(list.begin(), list.end(), 16);
        if (it != list.end())
        {
            list.insert(it,42);
        }
        //iterate and print values of the list
        for (int n : list)
            {
                std::cout << n << '\n';
            }
            //lists are good to use when you have to insert an item to a list without moving any other items (static and unmovable)
}
