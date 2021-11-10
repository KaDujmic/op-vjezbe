#include "header3.hpp"
#include <iomanip>
#include <iostream>
#include <vector>

void removee(std::vector<int> &v, int el)
{
    std::vector<int>::iterator it = v.end();
    std::vector<int>::iterator it2 = std::next(v.begin(), el-1);
    *it2 = *(it-1);
    v.pop_back();
    ispis(v);
}