#ifndef _f1_
#define _f1_
#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class timer
{
    int h , m;
    double s;
public:
    timer() {h = 0, s = 0, m = 0; };
    timer(int hh, int mm, double ss) : h(hh), m(mm), s(ss) {}
    timer operator/=(double size);
    timer operator+=(timer v);
    bool operator<(const timer& t)const;
    timer operator-(timer v);
    
    
    friend std::ostream& operator<<(std::ostream& os, timer& t);
    operator double();
};

class penalty
{
    int m;
public:
    penalty();
    penalty(int a) : m(a) {} 
    timer& operator()(timer& t);
};

#endif