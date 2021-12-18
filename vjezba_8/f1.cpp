#include "f1.h"
#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


timer timer::operator/=(double size)
{
    double time;
    h *= 3600;
    m *= 60;
    time = h + m + s;
    time /= size;
    h = time / 3600;
    m = (time - (h*3600)) / 60;
    s = time - ((h * 3600) + (m*60));
    return *this;
}


timer timer::operator+=(timer v)
{
    h += v.h;
    m += v.m;
    if (m >= 60)
    {
        m-=60;
        h++;
    }
    s += v.s;
    if (s >= 60)
    {
        s-=60;
        m++;
    }
    return *this;
}


std::ostream& operator<<(std::ostream& os, timer& t)
{
    os << t.h << ":" << t.m << ":" << t.s << std::endl;
    return os;
}

bool timer::operator<(const timer& t)const
{
    return ((this->h<t.h) && (this->m<t.m) && (this->s<t.s));
}

timer timer::operator-(timer v)
{
    timer n;
    n.h = this->h - v.h;
    n.m = m - v.m;
    n.s = s - v.s;
    return n;
}



timer::operator double()
{
    return double(this->h*3600 + this->m*60 + this->s);
}

timer& penalty::operator()(timer& t)
{
    timer nw(0,0,this->m);
    t += nw;
    return t;
}