#include "zad3.hpp"
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

void sort_sum(std::vector<int> &v)
{
    std::sort(v.begin(),v.end());
    std::vector<int>::iterator it = v.end();
    it = v.begin(); 
    v.insert(it, 1 , 0);
    int sum = 0;
    for (it = v.begin(); it != v.end(); ++it)
    {
        sum += *it;
    }
    it = v.end();
    v.insert(it, 1, sum);
    ispis(v);
}