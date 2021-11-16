#include "zad2.hpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <time.h>
using namespace std;

void samoglasnicii(vector<char> &sam)
{
    sam.push_back('a');
    sam.push_back('e');
    sam.push_back('i');
    sam.push_back('o');
    sam.push_back('u');
}

void pig_latin(vector<string> &v)
{
    vector<char> samoglasnici;
    samoglasnicii(samoglasnici);
    vector<string>::iterator itv = v.begin();
    vector<string> part;
    string s;
    string dio;
    char buffer;
    srand(time(NULL));
    int ran_br = rand() % v.size();
    itv += ran_br;
    s = *itv;
    
// ODVAJANJE PO RAZMAKU 
    string::iterator its;
    for (its = s.begin() ; its <= s.end() ; its++)
    {
        if (*its == ' ' || its == s.end())
        {
            part.push_back(dio);
            dio.clear();
        }
        else
            dio.push_back(*its);
    }
    vector<string>::iterator it;
    for (it = part.begin() ; it < part.end() ; it++)
    {
        s = *it;
        its = s.begin();
        vector<char>::iterator result = find(samoglasnici.begin(), samoglasnici.end(), *its);
        if (result != end(samoglasnici))
        {
            s.append("hay");
            *it = s;
        }

        else
        {
            while(result == samoglasnici.end())
            {
                buffer = *its;
                s.erase(its);
                s.push_back(buffer);
                its = s.begin();
                result = find(samoglasnici.begin(), samoglasnici.end(), *its);
            }
            if (result != samoglasnici.end())
                    s.append("ay");
        }
        dio.append(s);
        dio.push_back(' ');
    }
    *itv = dio;
}