#include "f1.h"
#include "f1.cpp"
#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;




int main() {
    vector<timer> v; //= {{2, 6, 9.118}, {2, 6, 15.251}, {2, 6, 9.925}, {2, 7, 15.222}, {2, 7, 10.775}};
    timer t(2, 6, 9.118);
    v.push_back(t);
    timer t1(2, 6, 15.251);
    v.push_back(t1);
    timer t2(2, 6, 9.925);
    v.push_back(t2);
    timer t3(2, 7, 15.222);
    v.push_back(t3);
    timer t4(2, 7, 10.775);
    v.push_back(t4);
    // prosjecno vrijeme
    timer avg;
    vector<timer>::iterator it;
    for (it = v.begin(); it < v.end(); ++it) 
        avg += *it;
    avg /= v.size();
    cout << "avg " << avg << endl;
   
    // vrijeme najbrzeg (operator<)
    timer tmax = *min_element(v.begin(), v.end());
    cout << "min " << tmax << endl;
    cout << endl;

 
    // zaostajanje za vodecim u sekundama
    for (it = v.begin(); it < v.end(); ++it) 
    {
        cout << double(*it - tmax) << endl;
    }
   
    // penaliziranje vozaca s m sekundi (funkcijski objekt)
    penalty p(5);
    for (it = v.begin(); it < v.end(); ++it) 
        p(*it);  

}