#include "zad1.h"

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int najv = arr[0], najm=arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);

    najv_najm(arr,najv,najm,n);
    cout << "Najveci -> " << najv << endl << endl << "Najmanji -> " << najm << endl << endl << endl;
    return 0;
}