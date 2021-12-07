#include "zad3.h"
#include "funk_obj.cpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;


int main()
{    
    srand(time(NULL));
    hangman_view h;
    h.entry_contr();
    h.get_vals();
    h.update_hango();
    while ( h.vr() && h.mr() )
    {
        h.unos();
        h.get_vals();
        h.update_hango();
        h.output_hango();
    }
}