#include "zad1.h"
#include <iostream>
#include <iomanip>

void najv_najm(int* arr,int &najv,int &najm,int n)
{
    for (int i = 0; i < n; i++)
    {
        if (najv<arr[i])
            najv = arr[i];
        if (najm>arr[i])
            najm = arr[i];
    }
}