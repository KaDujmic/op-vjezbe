#include "header3.hpp"
#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


void podstring(int &br)
{
    std::string str1;
    std::string str2;
    std::cout << "Unesite stringove: " << std::endl;
    std::cin >> str1 >> str2;
    std::string::size_type pos = 0;
    while ((pos = str2.find(str1, pos)) != std::string::npos) 
    {
        br++;
        pos += str1.length();
   }
}