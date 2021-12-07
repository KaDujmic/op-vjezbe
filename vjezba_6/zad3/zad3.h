#ifndef _zad3_
#define _zad3_

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

class handgman_model
{
    std::string movie;
    std::string guess_movie;
    std::string used;
    int lives = 7;
    bool in_game;
public:
    // OSNOVNE FUNKCIONALNOSTI
    void movie_gen();
    void gm_gen();
    void check(char c);
    void mistake() { lives--; }
    bool running() { 
        (lives) ? in_game = true : in_game = false; 
        return in_game; 
    }
    // DOBIJANJE VRIJEDNOSTI
    bool end() { if (movie==guess_movie) 
                    return false;
                else 
                    return true; 
                }
    std::string get_gm(){ return guess_movie; }
    std::string get_used() { return used; }
    std::string get_movie(){ return movie; }
    int get_lives() { return lives; }
};

class hangman_controller
{
    handgman_model hm;
    char c;
public:
    // GENERIRANJE I UNOSI
    void model_entry();
    void user_entry();
    bool running();

    // DOBIJANJE VRIJEDNOSTI
    std::string get_vals_gm() { return hm.get_gm(); }
    std::string get_vals_us() { return hm.get_used(); }
    std::string get_vals_mov(){ return hm.get_movie(); }
    int get_vals_liv() { return hm.get_lives(); }
    bool sejm();
};


class hangman_view
{
    hangman_controller hmm;
    std::vector<std::string> hangoman;
    std::string us;
    std::string gm;
    std::string mov;
    int liv;
    bool prvi = true;
public:
    void entry_contr();
    bool vr();
    bool mr();
    void unos();
    void get_vals();
    void update_hango();
    void output_hango();
};


#endif