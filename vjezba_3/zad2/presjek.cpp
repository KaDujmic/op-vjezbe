#include "zad2.hpp"
#include <iomanip>
#include <iostream>
#include <vector>

void unos(std::vector<int> &v1, int el)
{
    int br;
    for (int i = 0; i < el; ++i)
    {
        std::cout << "Enter vector element: ";
        std::cin >> br;
        std::cout << std::endl;
        v1.push_back (br);
    }
}

void ispis(std::vector<int> v)
{
    std::vector<int>::iterator it;
    for (it = v.begin(); it != (v.end()); ++it)
        std::cout << *it << " ";
}


void formi(std::vector<int> &n)
{
    std::vector<int> v3;
    std::vector<int> v4;
    unos(v3,5);
    unos(v4,5);
    std::vector<int>::iterator it;
    std::vector<int>::iterator it2;
    int br;
    for (it = v3.begin(); it != (v3.end()); ++it)
    {
        br = 0;
        for (it2 = v4.begin(); it2 != (v4.end()); ++it2)
        {
            if (*it==*it2)
                br++;
        }
        if (br == 0)
            n.push_back(*it);
    }
}