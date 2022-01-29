#pragma once
#include <iostream>
#include <iomanip>
#include <string>

class zivotinja 
{
public:
    virtual int br_nogu() = 0;
    virtual std::string ime() = 0;
    virtual~zivotinja();
};


