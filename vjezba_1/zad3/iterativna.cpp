#include "zad3.h"
#include <iostream>
#include <iomanip>

void najv_najm()
{
    int niz[] = {1,12,4,0,6,27};
    int i;
    int n = sizeof(niz)/sizeof(niz[0]);
    int najv = niz[0], najm = niz[0];
    for (i = 1; i < n ;++i)
    {
        if (niz[i]>najv)
        {
            najv = niz[i];
        }
        if (niz[i]<najm)
        {
            najm = niz[i];
        }
    }
    std:: cout << "ITERATIVNA ---> Najmanji broj je: " << najm << ", a najveci broj je: " << najv << std:: endl;
}