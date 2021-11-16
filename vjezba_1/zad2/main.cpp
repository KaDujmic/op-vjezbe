#include "header.h"
// komentar dole se odnosi na ovaj dio ispod->
//#include "header.cpp"
#include "zadatak2.cpp"
#include "zadatak3.cpp"
#include "zadatak4.cpp"
//Ode san dodava cpp file jer mi iz nekog razloga u vs code nebi compile-a sve cpp fileove nego samo main
#include <iostream>
#include <iomanip>

int main(void) 
{
    int niz[] = {1,12,4,0,6,27};
    int najv = niz[0];
    int najm = niz[0];
    int i = sizeof(niz)/sizeof(niz[0])-1;
    funkcija();
    std:: cout << "ZADATAK 3" << std:: endl;
    najv_najm();
    std:: cout << "ZADATAK 4" << std:: endl;
    std:: cout << "REKURZIJA" << std:: cout << " ---> ";
    rekurzija(niz, &najv, &najm, i);
    std:: cout << "Najmanji broj je: " << najm << ", a najveci broj je: " << najv << std:: endl;
    cout << endl;
    cout << endl;
    matrica();
}