#include "zad2.h"
#include <iostream>
#include <iomanip>

int &referenca(int *arr, int el)
{
    return arr[el];
}