#include "header.h"
#include <iostream>
#include <iomanip>

int rekurzija(int* niz, int* najv, int* najm, int i)
{
    if (i < 0)
        return 1;
    if (niz[i] > *najv)
    {
        *najv = niz[i];
    }
    if (niz[i] < *najm)
    {
        *najm = niz[i];
    }
    return rekurzija(niz, najv, najm, i-1);
}