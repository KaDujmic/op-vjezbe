#pragma once

#include "zivotinja.h"
#include <iostream>
#include <iomanip>



class kukac : public zivotinja
{
protected:
    int noge = 0;
    std::string ime = "kukac";

public:
    kukac();
    int br_nogu() { return noge; }
    std::string ime() { return ime; }
    ~kukac();
};