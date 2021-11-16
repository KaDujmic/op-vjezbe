#include "zad6.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


void reverse_string(std::vector<std::string> &vs)
{
    std::string n;
    std::cout << "Unos stringova(0 za kraj): " << std::endl;
    while(1)
    {
        std::cin >> n;
        if (n == "0")
            break;
        reverse(n.begin(), n.end());
        vs.push_back(n);
        std::cout << std::endl;
        std::vector<std::string>::iterator it = vs.end();
    }
    sort(vs.begin(),vs.end());
    for (std::vector<std::string>::iterator i = vs.begin(); i != vs.end(); ++i)
        std::cout << *i << ' ';
}