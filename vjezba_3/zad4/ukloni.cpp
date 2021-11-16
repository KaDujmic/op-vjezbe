#include "zad4.hpp"
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

void removee(std::vector<int> &v, int el)
{
    std::vector<int>::iterator it = v.end();
    std::vector<int>::iterator it2 = std::next(v.begin(), el-1);
    *it2 = *(it-1);
    v.pop_back();
    ispis(v);
}