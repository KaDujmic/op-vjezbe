#ifndef _zad2_
#define _zad2_

class polozaj{
    int x,y,z;
public:
    void getpol(int &x, int &y, int &z);
    void postavi_rand(int a, int b);
    void postavi();
};

class oruzje{
    const int max = 5;
    int mag = 2;
    polozaj place;
public:
    void getpol(int &x, int &y, int &z);
    void postavi();
    int broj() { return mag; }
    void reload() { mag = max; }
    void shoot() { mag -= 1; }
};

class meta{
    bool stanje;
    polozaj gornja;
    polozaj donja;
public:
    void getpol(int &x, int &y, int &z,int &x1, int &y1, int &z1);
    void postavi_rand();
    void pogoden() { stanje = true; }
};


#endif