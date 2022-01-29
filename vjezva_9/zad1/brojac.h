#pragma once
#include "zivotinja.h"
#include "skakavac.h"
#include "vrabac.h"
#include "tarantula.h"
#include <vector>
#include <string>


class brojac 
{
    std::vector<zivotinja*> zivotinjee;
public:
    void read(std::vector<zivotinja*> zivotinje);
    void uk_br_nogu();
};