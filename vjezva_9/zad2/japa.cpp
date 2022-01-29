#include "japa.h"
#include <iostream>
#include <time.h>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;


game::game(player* p1, player* p2)
{
	this->p1 = p1;
	this->p2 = p2;
}



int human_player::coins()
{
	int num_of_coins = 0;
	int suma = 0;
	while (num_of_coins < 0 || num_of_coins > 3);
	{
		cout << "How many coins will u use? " << endl;
		cin >> num_of_coins;
	} 

	if (num_of_coins == 3)
	{
		cout <<"Human player has 8 " << endl;
		return 8;
	}
	else
	{
		vector<int> v;
		vector<int>::iterator it;
        int check;
		for (int i = 0; i < num_of_coins; i++)
		{
			while (true)
			{
				int size = v.size();
				int num = 0;
				cout << "1/2/5 " << endl;
				cin >> num;
				while (num != 1 && num != 2 && num != 5)
				{
					num = 0;
					cout << "Wrong input!! Try again " << endl;
					cin >> num;
				}
				it = find(v.begin(), v.end(), num);
				if (it == v.end())
				{
					v.push_back(num);
				}
				else
				{
					cout << "Wrong input!! Try again " << endl;
				}

				if (v.size() > size)
				{
					break;
				}
			}
			suma = 0;
            vector<int>::iterator its;
			for (its = v.begin(); its < v.end(); its++)
			{
				suma += *its;
			}
		}
	}
	cout <<"Human player sum is: " << suma << endl;
	return suma;
}

int human_player::guess()
{
	int suma = 0;
	cout << "Guess: " << endl;
	cin >> suma;
	return suma;
}




int computer_player::coins()
{
	int coin[3] = { 1,2,5 };
    int suma = 0;
    int num_of_coins = rand() % 4;
	for (int i = 0; i < num_of_coins; i++)
	{
		suma += coin[rand() % 3];
	}
	cout << "sumaa od kompjutera: " << suma << endl;
	return suma;
}

void game::start()
{

	int human_suma = 0;
	int computer_suma = 0;

	int human_guess = 0;
	int computer_guess = 0;

	while (true)
	{
		human_suma = p1->coins();
		computer_guess = p2->guess();
		cout << "pc igra: " << computer_guess << endl;
		if (computer_guess == human_suma)
		{
			p2->pnts();
		}
		computer_suma = p2->coins();
		human_guess = p1->guess();
		if (human_guess == computer_suma)
		{
			p1->pnts();
		}
		if (p1->get_pnts() == 1)
		{
			cout << "U WON" << endl;
			return;
		}
		else if (p2->get_pnts() == 1)
		{
			cout << "COMPUTER WON" << endl;
			return;
		}
	}
}

player::player(){}
player::~player(){}

human_player::human_player(){}
human_player::~human_player(){}

computer_player::computer_player(){}
computer_player::~computer_player(){}


