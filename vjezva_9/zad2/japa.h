#ifndef _japa_
#define _japa_
#include <iostream>
#include <string>
#include <vector>


using namespace std;

class player
{
protected:
	int points = 0;
public:
    player();
	virtual void pnts() = 0;
	virtual int get_pnts() = 0;
	virtual int coins() = 0;
	virtual int guess() = 0;
	~player();
};

class human_player : public player
{
public:
	human_player();
    void pnts() { this->points += 1; };
	int coins();
	int get_pnts() { return this->points; }
	int guess();
	~human_player();
};


class computer_player : public player {
public:
	computer_player();
    void pnts() { this->points += 1; };
	int coins();
	int get_pnts() { return this->points; }
	int guess() { return rand() % 9; }
	~computer_player();
};

class game
{
private:
	player* p1;
	player* p2;
public:
	game(player* p1, player* p2);
	void start();
};

#endif
