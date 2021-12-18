#include "konst_dest.h"
#include "konst_edst.cpp"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>


int main()
{
    Board b(10,10);
    Point p(6,3);
    Point p1(2,2);
    Point p2(4,4);
    Point p3(7,8);
    //b.draw_line(p,p1);
    b.draw_line(p,p1, 'x');
    Board b2(b);
    //b.draw_line_up(p3);
    b2.display();
}