#include "header3.hpp"
#include <iomanip>
#include <iostream>
#include <vector>

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