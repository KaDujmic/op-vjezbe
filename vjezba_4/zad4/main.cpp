#include "zad4.hpp"
#include "bit_unstuffing.cpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    string s;
    bit_stufffing(s);
    cout << s << endl;
    bit_unstufffing(s);
    cout << s << endl;
    return 0;
}