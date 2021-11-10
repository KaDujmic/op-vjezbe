#include "header4.hpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <time.h>
using namespace std;

void matches(vector<int> &vs)
{
    srand(time(NULL));
    bool igrac = true;
    int broj;
    vector<int>::iterator it = vs.begin();
    while (1)
    {
        if (*it <= 4)
        {
            if (!igrac)
            {
                cout << "Igrac je izgubio!!" << endl;   
                return;
            }
            else 
            {
                cout << "Igrac je pobjedio!!" << endl;
                return;
            }
        }
        if (igrac)
        {
            cout << "Unesite broj 1-3: ";
            cin >> broj;
            cout << endl;
            *it -= broj;
            igrac = false;
        }
        else
        {
            broj = rand() % 3 + 1;
            *it -= broj;
            igrac = true;
        }
        cout <<"Broj sibica prestalo: " <<  *it << endl;
    }
}