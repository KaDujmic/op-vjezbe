#include "zivotinja.h"
#include "brojac.h"
#include <vector>
#include <string>
using namespace std;



void brojac::read(std::vector<zivotinja*> zivotinje)
{
    this->zivotinjee = zivotinje;
}

void brojac::uk_br_nogu()
{
    vector<zivotinja*>::iterator it;
    int brj = 0;
    for(it = zivotinjee.begin(); it < zivotinjee.end() ; it++)
    {
        cout << "Dodan: " << (*it)->ime() << endl;
        brj += (*it)->br_nogu();
    }
    cout << "Ukupno nogu: " << brj << endl;
}