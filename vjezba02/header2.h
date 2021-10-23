#ifndef HEADER2_H
#define HEADER2_H
#include <iomanip>
#include <iostream>

struct MyVector
{
    int* arr;
    size_t size, capacity;

    // member functions
    void vector_new (size_t sz = 0);
    void vector_delete();
    void vector_push_back(int n);/* adds a new element at the end of the vector */
    void vector_pop_back();/* removes the last element in the vector */
    int& vector_front();/* returns a reference to the first element in the vector*/
    int& vector_back(); /* returns a reference to the last element in the vector */
    size_t vector_size(); /* returns the number of the elements in the vector */

    void print_vector();
};

struct kruznicaa {
    double x;
    double y;
    int r;
};

struct objekt {
    double x1;
    double y1;
    double x2;
    double y2;
};

void provjera(objekt *pravokutnik, kruznicaa kruznica, int &odluka, int n);
void min_max(double &c1, double &c2);
void najv_najm(int* arr,int &najv, int&najm, int n);
int &referenca(int arr[], int el);
int sijeciste();


#endif