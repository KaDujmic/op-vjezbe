#include "header2.h"
using namespace std;

void MyVector::vector_new (size_t sz)
{
    int n,m;
    cout << "Unesite velicinu niza: ";
    cin >> n;
    cout << endl;
    arr = new int[n];
    cout << "Unesite element: " << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        cout << endl;
        sz++;
    }
    size = sz;
    capacity = sz;
}
void MyVector::vector_delete()
{
    delete[] arr;
}
void MyVector::vector_push_back(int n)
{
    if (capacity>size)
    {
        arr[size] = n;
        size++;
    } 
    else
    {
        int* arr2;
        arr2 = new int[size];
        for (int i = 0; i<size; ++i)
        {
            arr2[i] = arr[i];
        }
        delete[] arr;
        capacity *= 2;
        arr = new int[capacity];
        for (int i = 0; i<size;++i)
        {
            arr[i] = arr2[i];
        }
        size++;
        arr[size-1] = n;
        delete[] arr2;
    }
}
void MyVector::vector_pop_back()
{
    if ((capacity/2)>=size-1)
    {
        int* arr2;
        size--;
        arr2 = new int[size];
        for (int i = 0; i<size; ++i)
        {
            arr2[i] = arr[i];
        }
        delete[] arr;
        capacity /= 2;
        arr = new int[capacity];
        for (int i = 0; i<size;++i)
        {
            arr[i] = arr2[i];
        }
        delete[] arr2;
    } 
    else
    {
        int* arr2;
        size--;
        arr2 = new int[size];
        for (int i = 0; i<size; ++i)
        {
            arr2[i] = arr[i];
        }
        delete[] arr;
        arr = new int[capacity];
        for (int i = 0; i<size;++i)
        {
            arr[i] = arr2[i];
        }
        delete[] arr2;
    }
}
int& MyVector::vector_front()
{
    return arr[0];
}
int& MyVector::vector_back()
{
    return arr[size-1];
}
size_t MyVector::vector_size() 
{
    return size;
}


void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}