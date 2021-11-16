#ifndef _zad2_
#define _zad2_
#include <iostream>
#include <iomanip>
#include <string>

struct matricaa{
    int m;
    int n;
    int a;
    int b;
    float** matrica;
};
void unos(matricaa &mat, matricaa &mata, matricaa &matb);
void unos_matrice(matricaa &mat);
void zbrajanje(matricaa &mata, matricaa &matb);
void oduzimanje(matricaa &mata, matricaa &matb);
void mnozenje(matricaa &mata, matricaa &matb, matricaa &matc);
void transponiranje(matricaa &mata, matricaa &matb);
void ispis(matricaa &mata);
void matrica();

#endif
