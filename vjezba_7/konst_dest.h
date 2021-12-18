#ifndef _KONST_DEST_
#define _KONST_DEST_
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>



struct Point
{
public:
    int x,y;
    Point(int a, int b) : x(a), y(b) {}
};

class Board
{
    char** v;
    int xx, yy;
public:
    Board();
    Board(int x, int y);
    Board(Board &cpy);
    Board(Board &&mov);
    void draw_line(Point p1, Point p2, char ch);
    void draw_char(Point p);
    void draw_line_up(Point p);
    void display();
    ~Board()
    {
        for (int i = 0; i < yy; ++i)
        {
            delete v[i];
        }
        delete v;
        std::cout << "DESTCTOR";
    }
};


#endif