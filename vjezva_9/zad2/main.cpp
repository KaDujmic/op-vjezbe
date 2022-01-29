#include "japa.h"
#include "japa.cpp"
#include <iostream>
#include <time.h>
#include <string.h>




using namespace std;

int main()
{
	srand(time(NULL));
	player* p1 = new human_player;
	player* p2 = new computer_player;
	game g(p1, p2);
	g.start();
}
