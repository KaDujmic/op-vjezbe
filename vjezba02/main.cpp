#include "header2.h"
#include "zadatak01_02.cpp"
#include "zadatak02_02.cpp"
#include "zadatak03_02.cpp"
#include "zadatak04_02.cpp"
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int najv = arr[0], najm=arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    int el;
    
    int odluka;

    cout << "ZADATAK 1" << endl << endl;
    najv_najm(arr,najv,najm,n);
    cout << "Najveci -> " << najv << endl << endl << "Najmanji -> " << najm << endl << endl << endl;

    cout << "ZADATAK 2" << endl << endl;
    cout << "Unesite element niza koji zelite uvecati: ";
    cin >> el;
    cout << endl;
    referenca(arr,el-1) += 1;
    cout << "Uvecani element je: " << arr[el-1] << endl;
    
    cout << "ZADATAK 3" << endl << endl;
    odluka = sijeciste();
    cout << "Sijece se : " << odluka << " pravokutnik(a)!" << endl; 
    
    cout << "ZADATAK 4" << endl << endl;
    MyVector mv;
    mv.vector_new();
    int m;
    cout << "Unesi element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
    while(cin >> m)
        mv.vector_push_back(m);
    cout << "first element " << mv.vector_front() << endl;
    cout << "last element " << mv.vector_back() << endl;
    mv.print_vector();
    cout << "removing last element" << endl;
    mv.vector_pop_back();
    mv.print_vector();
    cout << "size " << mv.vector_size() << endl;
    cout << "capacity " << mv.capacity << endl;
    mv.vector_delete();
    
}