#include "zad3.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>

using namespace std;



// MODEL <-------------------------
void handgman_model::movie_gen()
{
    int b = rand() % 38 + 1;
    std::ifstream myfile ("movie.txt");
    int i = 0;
    if ( myfile.is_open() ) 
    {
        while ( myfile && i < b) 
        {
            movie = "";
            std::getline (myfile, movie);
            i++;
        }
    }
}

void handgman_model::gm_gen()
{
    int len = movie.length() - 1;
    int i = 0;
    string::iterator is;
    for (is = movie.begin(); is<movie.end(); ++is)
    {
        if (*is == ' ')
        {
            guess_movie.insert(i, 1, *is);  
            i++;
        }
        else if (*is <= 'Z' && *is >= 'A' || *is <= 'z' && *is >= 'a' || *is <= '9' && *is >= '0' )
        {
            guess_movie.insert(i, 1, '_');
            i++;
        }
        else 
        {
            guess_movie.insert(i, 1, *is);
            i++;
        }
    }
    cout << movie << endl;
    
}

// KREIRANJE
void hangman_view::entry_contr()
{
    hmm.model_entry();
}

void hangman_controller::model_entry()
{
    hm.movie_gen();
    hm.gm_gen();
}

//POCETNE VRIJEDNOSTI I PROVJERE
bool hangman_view::vr()
{
    return hmm.running();
}

bool hangman_controller::running()
{
    return hm.running();
}

bool hangman_view::mr()
{
    return hmm.sejm();
}

bool hangman_controller::sejm()
{
    return hm.end();
}

//UNOS I PROMJENA
void hangman_view::unos()
{
    hmm.user_entry();
}

void hangman_controller::user_entry()
{
    cout << "Input a letter:   ";
    cin >> c;
    cout << endl;
    hm.check(c);
}

void handgman_model::check(char c)
{
    size_t found = movie.find(c);  
    size_t found1 = used.find(c);
    size_t found2 = guess_movie.find(c);
    if ( found1 != string::npos )
    {
        cout << "Vec iskoristen ;)" << endl << endl << endl << endl;
        return;
    }

    if ( found2 != string::npos )
    {
        cout << "Vec ste pogodili ;)" << endl << endl << endl << endl;
        return;
    }

    if ( found == string::npos )
    {
        used.insert(used.end(),1,c);
        cout << "Pogresan unos :(" << endl << endl << endl << endl;
        mistake();
    }

    while ( found != string::npos )
    {
        guess_movie.replace(found, 1, 1, c);
        found = movie.find(c, found + 1);
        cout << endl;
    }

}

//IZVLACENJE VRIJEDNOSTI / ISPIS 
void hangman_view::get_vals()
{
    us = hmm.get_vals_us();
    gm = hmm.get_vals_gm();
    liv = hmm.get_vals_liv();
    mov = hmm.get_vals_mov();
    cout << "Zivoti: " << liv << endl << endl << endl;
}

void hangman_view::update_hango()
{
    int n;
    n = liv;
    if (n == 7 && prvi)
    {
        hangoman.push_back("    -------   ");        
        hangoman.push_back("   |     |    ");
        hangoman.push_back("   |          ");
        hangoman.push_back("   |          ");
        hangoman.push_back("   |          ");
        hangoman.push_back("   |          ");
        hangoman.push_back("   |          ");
        hangoman.push_back("   |          ");
        hangoman.push_back("   |          ");
        prvi = false;
    }
    else if (n == 6)
    {
        vector<string>::iterator it = hangoman.begin()+2;
        *it = "   |     o        ";
    }
    else if (n == 5)
    {
        vector<string>::iterator it = hangoman.begin()+3;
        *it = "   |    /         ";
    }
    else if (n == 4)
    {
        vector<string>::iterator it = hangoman.begin()+3;
        *it = "   |    /|        ";
    }
    else if (n == 3)
    {
        vector<string>::iterator it = hangoman.begin()+3;
        *it = "   |    /|\\      ";
    }
    else if (n == 2)
    {
        vector<string>::iterator it = hangoman.begin()+4;
        *it = "   |     |        ";
    }
    else if (n == 1)
    {
        vector<string>::iterator it = hangoman.begin()+5;
        *it = "   |    /         ";
    }
    else if (n == 0)
    {
        vector<string>::iterator it = hangoman.begin()+5;
        *it = "   |    / \\      ";
    }
}

void hangman_view::output_hango()
{

    if (liv == 0)
    {
        vector<string>::iterator it;
        for (it = hangoman.begin(); it < hangoman.end(); ++it)
        {
            cout << *it << endl;
        }
        cout << "Odgovor je: " << mov << endl << endl << endl << endl;
        cout << "IZGUBILI STE!!!" << endl;
    }
    else if (mr()==false)
    {
        cout << gm << endl;
        cout << "CESTITAM, POGODILI STE!!!" << endl;
    }
    else
    {
        cout << "Iskoristena slova: " << us << endl << endl << endl;
        cout << "         POGODENI: " << gm << endl << endl;
        vector<string>::iterator it;
        for (it = hangoman.begin(); it < hangoman.end(); ++it)
        {
            cout << *it << endl;
        }
    }
}
