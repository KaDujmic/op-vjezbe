#include "header4.hpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>


void interpunkcije(std::string &s)
{
    //std::cout << "Unesite recenicu: " << std::endl;
    //std::cin >> rec;
    char priv;
    std::string::iterator it = s.begin();
    for (it = s.begin(); it != (s.end()); ++it)
    {
        if ((*it == ' ') && ispunct(*(it+1)))
        {
            priv = *(it+1);
            *(it+1) = *it;
            *it = priv;
            if ((*(it+1) == ' ')&&(*(it+2) == ' '))
                s.erase(it+1);
        }
    }
}