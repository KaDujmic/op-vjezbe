#include "zivotinja.h"
#include "skakavac.h"
#include "skakavac.cpp"
#include "vrabac.cpp"
#include "tarantula.cpp"
#include "brojac.cpp"
#include "tarantula.h"
#include "vrabac.h"
#include "brojac.h"
#include <vector>
#include <string>
using namespace std;

int main()
{
    
    skakavac sk;
    tarantula tr;
    vrabac vr;

    vector<zivotinja*> zivotinje;

    zivotinja* skakavac(&sk);
    zivotinja* tarantula(&tr);
    zivotinja* vrabac(&vr);


    zivotinje.push_back(skakavac);
    zivotinje.push_back(tarantula);
    zivotinje.push_back(vrabac);

    brojac brj;
    brj.read(zivotinje);
    brj.uk_br_nogu();
}