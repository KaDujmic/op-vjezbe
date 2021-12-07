#ifndef _zad2_
#define _zad2_

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

class handgman_model
{
    std::string movie;
    std::string guess_movie;
    int lives = 8;
    bool in_game;
public:
    void movie_gen();
    void gm_gen(int n);
    void check(char c);
    void mistake() { lives--; }
    bool running() { (lives) ? in_game = true : in_game = false; }
    void get_gm(std::string ms);
};

class hangman_controller
{
    handgman_model hm;
    char c;
public:
    void user_entry();
    void check(char c);
    void mistake();
    void running();
};



#endif