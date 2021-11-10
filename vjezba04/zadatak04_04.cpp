#include "header4.hpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

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