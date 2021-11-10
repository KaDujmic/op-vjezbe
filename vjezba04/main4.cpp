#include "header4.hpp"
#include "tadatak04_01.cpp"
#include "zadatak04_02.cpp"
#include "zadatak04_03.cpp"
#include "zadatak04_04.cpp"
#include "zadatak04_05.cpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    string s;
   /*cout << "Unesite recenicu: " << endl;
    getline(cin,s);  
    interpunkcije(s);
    cout << s << endl; 
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

    bit_stufffing(s);
    cout << s << endl;
    bit_unstufffing(s);
    cout << s << endl;*/
    vector<int> vs;
    vs.push_back(21);
    matches(vs);
    return 0;
}