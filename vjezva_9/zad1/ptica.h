#pragma once

#include "zivotinja.h"
#include <iostream>
#include <iomanip>

class ptica : public zivotinja
{
protected:
    int noge = 0;
    std::string ime = "ptica";
public:
    ptica();
    int br_nogu() { return noge; }
    std::string ime() { return ime; }
    ~ptica();
};