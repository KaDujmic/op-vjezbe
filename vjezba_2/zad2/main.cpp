#include "zad2.h"
#include "referenca.cpp"
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int najv = arr[0], najm=arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    int el;
    

    cout << "Unesite element niza koji zelite uvecati: ";
    cin >> el;
    cout << endl;
    referenca(arr,el-1) += 1;
    cout << "Uvecani element je: " << arr[el-1] << endl;

}