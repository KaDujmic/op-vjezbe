#include "zad2.hpp"
#include "pig_latin.cpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    string s = "";
    vector<string> v;
    while (s != "0")
    {
        cout << "Unesite recenicu (0 za prekid): " << endl;
        getline(cin,s);
        if (s != "0")
            v.push_back(s);
    }
    pig_latin(v);
    vector<string>::iterator it;
    for (it = v.begin() ; it < v.end() ; it++)
    {
        cout << *it << " " << endl;
    }
    return 0;
}