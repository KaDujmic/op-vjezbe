#include "zad1.hpp"
#include "vec_unos.cpp"
#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


int main()
{
    std::vector<int> v1;
    std::vector<int> n;
    unos(v1,4);
    unos2(v1,1,7);
    ispis(v1);
    return 0;
}
