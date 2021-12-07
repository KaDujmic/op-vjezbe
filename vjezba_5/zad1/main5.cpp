#include "zad1.hpp"
#include "3d_tocke.cpp"
#include <iomanip>
#include <iostream>

int main()
{
    tocka one;
    one.postavi();
    one.postavi_opet(1,5);
    double x1,y1,z1;
    double ud1, ud2;
    one.dohvati(x1,y1,z1);
    printf("%f, %f , %f \n", x1,y1,z1);
    one.udaljenost(4,4,ud1);
    one.udaljenost_3d(4,4,4,ud2);
    printf("%f <--- udaljenosd 2d \n%f <--- udaljenost 3d\n", ud1, ud2);
}