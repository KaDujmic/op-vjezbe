#include "zad1.hpp"
#include "interpunkcije.cpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    string s = "";
    cout << "Unesite recenicu: " << endl;
    getline(cin,s);  
    interpunkcije(s);
    cout << s << endl; 
    return 1;
}