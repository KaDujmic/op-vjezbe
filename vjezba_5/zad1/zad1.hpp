#ifndef _zad1_
#define _zad1_

class tocka{
    double x, y, z;
public:
    void postavi();
    void postavi_opet(int a, int b);
    void dohvati(double &x1, double &y1, double &z1) const;
    void udaljenost(double x1, double y1, double &ud) const;
    void udaljenost_3d(double x1, double y1, double z1, double &ud) const;
};

#endif