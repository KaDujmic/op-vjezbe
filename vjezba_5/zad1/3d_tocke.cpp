#include "zad1.hpp"
#include <iomanip>
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

void tocka::postavi()
{
    x = 0;
    y = 0;
    z = 0;
}

void tocka::postavi_opet(int a, int b)
{
    srand(time(NULL));
    x = rand() % b + a;
    y = rand() % b + a;
    z = rand() % b + a;
}

void tocka::dohvati(double &x1, double &y1, double &z1) const
{
    x1 = x;
    y1 = y;
    z1 = z;
}

void tocka::udaljenost(double x1, double y1, double &ud) const
{
    ud = sqrt(pow((x1-x),2)+pow((y1-y),2));
}

void tocka::udaljenost_3d(double x1, double y1, double z1, double &ud) const
{
    ud = sqrt(pow((x - x1), 2) + pow((y - y1), 2) + pow((z - z1), 2));
}