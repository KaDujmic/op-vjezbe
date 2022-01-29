#pragma once

#include "zivotinja.h"
#include "pauk.h"
#include <iostream>
#include <iomanip>

class tarantula : public pauk
{
public:
    tarantula();
    int vrati_br_nogu() { return 6; }
    std::string vrati_ime() { return "tarantula"; }
    ~tarantula();
};
