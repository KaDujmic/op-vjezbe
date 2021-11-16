#include "zad3.hpp"
#include "sum_nula.cpp"
#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


int main()
{
    std::vector<int> v1;
    unos(v1,7);
    sort_sum(v1);
    ispis(v1);
    return 0;
}
