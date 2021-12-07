#include "zad2.hpp"
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
// POLOZAJ FUNKCIJE
void polozaj::postavi_rand(int a, int b)
{
    x = rand() % b + a;
    y = rand() % b + a;
    z = rand() % b + a;
}

void polozaj::postavi()
{
    cout << "Unesite x y z koordinate: " << endl;
    std::cin >> x >> y >> z;
}

void polozaj::getpol(int &x1, int &y1, int &z1)
{
    x1 = x;
    y1 = y;
    z1 = z;
}
// META FUNKCIJE
void meta::postavi_rand()
{
    donja.postavi_rand(-5,5);
    gornja.postavi_rand(5,15);
}

void meta::getpol(int &x, int &y, int &z,int &x1, int &y1, int &z1)
{
    gornja.getpol(x1,y1,z1);
    donja.getpol(x,y,z);
}
// ORUZJE FUNKCIJE
void oruzje::getpol(int &x, int &y, int &z)
{
    place.getpol(x,y,z);
}

void oruzje::postavi()
{
    place.postavi();
}


void provjera(int x, int y, int z, meta *mete, int n)
{
    int x2,y2,z2,x3,y3,z3;
    for (int i= 0; i < n; ++i)
    {
        mete[i].getpol(x2,y2,z2,x3,y3,z3);
        if (z2<=z && z3>=z)
        {
            if (x == 0 && y == 0)
            {
                cout << "Zapucano u pod/zrak" << endl;
                return;
            }
            if (x < 0 || y < 0)
            {
                if ((x <= x2) && (y >= y2) && (x >= x3) && (y <= y3))
                {
                    mete[i].pogoden();
                    cout << "Meta broj " << i << " pogodena!!!" << endl;
                }                
                else if ((x <= x2) && (y <= y2) && (x >= x3) && (y >= y3))
                {
                    mete[i].pogoden();
                    cout << "Meta broj " << i << " pogodena!!!" << endl;
                }
                else if ((x >= x2) && (y <= y2) && (x <= x3) && (y >= y3))
                {
                    mete[i].pogoden();
                    cout << "Meta broj " << i << " pogodena!!!" << endl;
                }
                else if ((x >= x2) && (y >= y2) && (x <= x3) && (y <= y3))
                {
                    mete[i].pogoden();
                    cout << "Meta broj " << i << " pogodena!!!" << endl;
                }
            }
            else if ((x >= x2) && (y >= y2) && (x <= x3) && (y <= y3))
            {
                mete[i].pogoden();
                cout << "Meta broj " << i << " pogodena!!!" << endl;
            }
        }
    }
}

int main()
{
    // UNOS POLOZAJA I N META
    srand(time(NULL));
    oruzje sheriff;
    string s;
    polozaj smjer;
    int n = 2, x, y, z, x1, y1, z1, x2, y2, z2, x3, y3, z3;
    meta *mete = new meta[n];
    // GENERIRANJE META
    for (int i = 0; i < n; ++i)
    {
        mete[i].postavi_rand();
        mete[i].postavi_rand();
        mete[i].getpol(x2,y2,z2,x3,y3,z3);
        cout << x2 << "x " << y2 << "y " << z2 << "z gornja" << endl << x3 << "x " << y3 << "y " << z3 << "z donja" << endl;
    }
    cout << "Unesite polozaj oruzja (x,y,z)" << endl;
    sheriff.postavi();

    // POCETAK PUCANJA ZADATAK 4
    while(sheriff.broj())
    {
        cout << "Shoot or reload" << endl;
        std::cin >> s;
        if (s == "shoot")
        {
            sheriff.shoot();
            smjer.postavi();
            smjer.getpol(x,y,z);
            sheriff.getpol(x1,y1,z1);
            provjera(x, y, z1, mete, n);
        }
        else if (s == "reload")
            sheriff.reload();
        else 
            cout << "Somethin is wrong ... try again 'shoot' or 'reload' " << endl;
    }
    // BRISANJE NIZOVA
    delete[] mete;
}