#pragma once

#include "zivotinja.h"
#include <iostream>
#include <iomanip>




class pauk : public zivotinja
{
protected:
    int noge = 0;
    std::string ime = "pauk";
public:
    pauk();
    int br_nogu() { return noge; }
    std::string ime(){ return ime; }
    ~pauk();
};