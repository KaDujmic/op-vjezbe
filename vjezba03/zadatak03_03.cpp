#include "header3.hpp"
#include <iomanip>
#include <iostream>
#include <vector>

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