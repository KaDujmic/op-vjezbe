#pragma once

#include "zivotinja.h"
#include "ptica.h"
#include <iostream>
#include <iomanip>

class vrabac : public ptica
{

public:
    vrabac();
    int vrati_br_nogu() { return 2; }
    std::string vrati_ime() { return "vrabac"; }
    ~vrabac();
};

