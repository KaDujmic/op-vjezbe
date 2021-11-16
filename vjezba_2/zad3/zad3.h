#ifndef ZAD3_H
#define ZAD3_H
#include <iomanip>
#include <iostream>

struct kruznicaa {
    double x;
    double y;
    int r;
};

struct objekt {
    double x1;
    double y1;
    double x2;
    double y2;
};

void provjera(objekt *pravokutnik, kruznicaa kruznica, int &odluka, int n);
void min_max(double &c1, double &c2);
int sijeciste();


#endif