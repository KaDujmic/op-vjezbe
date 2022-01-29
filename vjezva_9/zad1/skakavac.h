#pragma once

#include "zivotinja.h"
#include "kukac.h"
#include <iostream>
#include <iomanip>

class skakavac : public kukac
{
public:
    skakavac();
    int vrati_br_nogu() { return 4; }
    std::string vrati_ime() { return "skakavac"; }
    ~skakavac();
};