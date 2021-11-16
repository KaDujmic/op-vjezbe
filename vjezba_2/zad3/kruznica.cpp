#include "zad3.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void min_max(double &c1, double &c2)
{
    double t = c1;
    if (c1 > c2)
    {
        c1 = c2;
        c2 = t;
    }
}

void provjera(objekt *pravokutnik, kruznicaa kruznica, int &odluka, int n)
{
    double c1, c2, diag;
    for (int i = 0; i < n; i++)
    {
        pravokutnik[i].x1 -= kruznica.x;
        pravokutnik[i].x2 -= kruznica.y;
        pravokutnik[i].y1 -= kruznica.x;
        pravokutnik[i].y2 -= kruznica.y;
        c1 = sqrt(pow(pravokutnik[i].x1,2)+pow(pravokutnik[i].y1,2));
        c2 = sqrt(pow(pravokutnik[i].x2,2)+pow(pravokutnik[i].y2,2));
        min_max(c1,c2);
        diag = sqrt(pow(kruznica.x,2)+pow(kruznica.y,2));
        if (diag > c2)
        {
            diag -= kruznica.r;
            if ((diag) >= c1 && diag <= c2)
            {
                odluka += 1;
                cout << odluka << endl;
            }
        }
        else
        {
            diag += kruznica.r;
            if ((diag) >= c1 && diag <= c2)
            {
                odluka += 1;
                cout << odluka << endl;
            }
        }
    }
}

int sijeciste()
{
    kruznicaa kruznica;
    int n;
    cout << "Koliko pravokutnika: ";
    cin >> n;
    objekt *pravokutnik = new objekt[n];
    int r, odluka = 0;
    double diag;
    double c1, c2;
    int i = 0;
    while (i < n)
    {
        cout << "Unesite x1 i y1 pravokutnika" << endl;
        cin >> pravokutnik[i].x1 >> pravokutnik[i].y1;
        cout << endl << "Unesite x2 i y2 pravokutnika" << endl;
        cin >> pravokutnik[i].x2 >> pravokutnik[i].y2;
        i++;
    }
    cout << endl << "Unesite sredisnjicu kruznice (x,y)" << endl;
    cin >> kruznica.x >> kruznica.y;
    cout << endl << "Unesite radijus kruznice" << endl;
    cin >> kruznica.r;
    cout << endl;
    provjera(pravokutnik, kruznica, odluka, n);
    cout << odluka << endl;
    delete[] pravokutnik;
    return odluka;
}