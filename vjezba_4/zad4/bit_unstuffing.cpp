#include "zad4.hpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


void bit_stufffing(string &s)
{
    char bit;
    int cnt = 0;
    while (1)
    {
        cout << "Unesite bit: ";
        cin >> bit;
        if (bit == '0' || bit == '1')
            s.push_back(bit);
        else    
            break;
    }
    string::iterator sit;
    for (sit = s.begin(); sit < s.end(); sit++)
    {
        if (*sit == '1')
            cnt++;
        else
            cnt = 0;
        if (cnt == 5)
        {
            s.insert(sit+1, '0');
            cnt = 0;
        }
    }
}


void bit_unstufffing(string &s)
{
    int cnt = 0;
    string::iterator sit;
    for (sit = s.begin(); sit < s.end(); sit++)
    {
        if (*sit == '1')
            cnt++;
        else
            cnt = 0;
        if (cnt == 5)
        {
            s.erase(sit+1);
            cnt = 0;
        }
    }
}