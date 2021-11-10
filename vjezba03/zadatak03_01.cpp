#include "header3.hpp"
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

void unos2(std::vector<int> &v2, int min, int max)
{
    int br;
    std::cout << "Enter vector element: ";
    std::cin >> br;
    while (br >= min && br <= max)
    {
        v2.push_back (br);
        std::cout << "Enter vector element: ";
        std::cin >> br;
    }
}

void ispis(std::vector<int> v)
{
    std::vector<int>::iterator it;
    for (it = v.begin(); it != (v.end()); ++it)
        std::cout << *it << " ";
}