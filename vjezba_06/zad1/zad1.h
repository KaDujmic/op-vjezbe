#ifndef _zad1_
#define _zad1_

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

class Handgman_Model
{
    std::string movie;
    std::string guess_movie;
    int lives = 8;
    bool in_game;
public:
    void movie_gen();
    void gm_gen(int n);
    void mistake() { lives--; }
    void check(char c);
    bool running() { return lives; }
};


#endif