#include "konst_dest.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>


void min_max(int &x1, int &x2, int &y1, int &y2)
{
    if (x1 > x2)
    {
        int temp = x1;
        x1 = x2;
        x2 = temp;
        temp = y1;
        y1 = y2;
        y2 = temp;
    }
}


Board::Board(Board &cpy)
{
    v = new char*[cpy.yy];
    for(int i = 0; i < cpy.yy; i++)  
        v[i] = new char[cpy.xx];
    for(int i = 0; i < cpy.yy; i++) 
    {
        for (int j = 0; j < cpy.xx; ++j)
        {
            v[i][j] = cpy.v[i][j];
        }
    }
    xx = cpy.xx;
    yy = cpy.yy;
}


Board::Board(Board &&mov)
{
    v = new char*[mov.yy];
    for(int i = 0; i < mov.yy; i++)  
        v[i] = new char[mov.xx];
    for(int i = 0; i < mov.yy; i++) 
    {
        for (int j = 0; j < mov.xx; ++j)
        {
            v[i][j] = mov.v[i][j];
        }
    }
    xx = mov.xx;
    yy = mov.yy;
    mov.v == nullptr;
}

Board::Board(int x, int y)
{
    xx = x;
    yy = y;
    v = new char*[yy];
    for(int i = 0; i < yy; i++)  
        v[i] = new char[xx];
    for(int i = 0; i < yy; i++) 
    {
        for (int j = 0; j < xx; ++j)
        {
            if (i == 0 || j == 0 || j == xx-1 || i == yy-1)
                v[i][j] = 'o';
            else
                v[i][j] = ' ';
        }
    }
}


void Board::draw_line(Point p1, Point p2, char ch)
{
    int x1 = p1.x;
	int y1 = p1.y;
	int x2 = p2.x;
	int y2 = p2.y;
    min_max(x1,x2,y1,y2);
    while ((x1<x2) || (y1<y2))
    {
        if (x1 < x2)
        {
            if (y1 < y2)
            {
                v[x1][y1] = ch;
                y1++;
            }
            else 
                v[x1][y1] = ch;
            x1++;
        }
        else
        {
            if (y1 < y2)
            {
                v[x1][y1] = ch;
                y1++;
            }
            else 
                v[x1][y1] = ch;
        }
        v[x1][y1] = ch;
    }

    /*if (x1 < x2)
    {
        if (y1 < y2)
        {
            std::cout<< x2 << " " << x1 << " - ";
            std::cout<< y2 << " " << y1 << " - ";
            while (x1 <= x2+y1)
            {
                if (y1 < y2 && x1 < x2)
                {
                    v[y1][x1] = ch;
                    std::cout << "1";
                    y1++;
                    x1++;
                } 
                else if (y1 == x2)
                {
                    v[x1][y1] = ch;
                    std::cout << "2";
                    x1++;
                } 
                else if (x1 == y2)
                {
                    v[y1][x1] = ch;
                    std::cout << "3";
                    x1++;
                }
            }
            std::cout << " ---- IZASAO" << std::endl;
        }
        else if (y1 > y2)
        {
            for (x1; x1 <= x2; ++x1)
            {
                if (y1 == y2 && x1 < x2)
                    v[x1][y1] = ch;
                else
                {
                    v[x1][y1] = ch;
                    y1--;
                } 
            }
        }
        else
        {
            for (x1; x1 <= x2; ++x1)
                v[x1][y1] = ch;
        }
    }
    else if (x1 > x2)
    {
        if (y1 < y2)
        {
            for (x1; x1 <= x2; --x1)
            {
                if (y1 == y2 && x1 < x2)
                {
                    v[x1][y1] = ch;
                }
                else
                {
                    v[x1][y1] = ch;
                    y1++;
                } 
            }
        }
        else if (y1 > y2)
        {
            for (x1; x1 <= x2; --x1)
            {
                if (y1 == y2 && x1 < x2)
                    v[x1][y1] = ch;
                else
                {
                    v[x1][y1] = ch;
                    y1--;
                } 
            }
        }
        else
        {
            for (x1; x1 <= x2; --x1)
                v[x1][y1] = ch;
        }
    }
    else
    {
        if (y1 < y2)
        {
            for (y1; y1 <= y2; x1, ++y1)
                v[x1][y1] = ch;
        }
        else if (y1 > y2)
        {
            for (y1; y1 >= y2; x1, --y1)
                v[x1][y1] = ch;
        }
        else
            v[x1][y1] = ch;
    }
}*/
}
void Board::draw_line_up(Point p)
{
    for(int i = 1; i < yy-1; i++) 
    {
        for (int j = 1; j < xx-1; ++j)
        {
            if (i == p.y && j <= p.x)
            {
                v[j][i] = 'x';
            }
        }
    }
}

void Board::draw_char(Point p)
{
    for(int i = 1; i < yy-1; i++) 
    {
        for (int j = 1; j < xx-1; ++j)
        {
            if ((i == p.y && j == p.x))
                v[i][j] = 'x';
        }
    }
}

void Board::display()
{
    for(int i = 0; i < yy; i++) 
    {
        for (int j = 0; j < xx; ++j)
        {
            std::cout << v[i][j];
        }
        std::cout << std::endl;
    }
}