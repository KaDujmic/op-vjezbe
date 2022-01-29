#include "zad2.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

template<typename S>
inline Stack<S>::~Stack()
{
	delete[] arr;
	arr = NULL;
}

template<typename S>
inline Stack<S>::Stack(int size)
{
	this->arr = new S[size];
	this->max_size = size-1;
	this->last_index = 0;
}


template <typename S>
void Stack<S>::push(S novi)
{
	if (this->last_index < this->max_size)
	{
		this->arr[this->last_index] = novi;
		this->last_index++;
	}
	else
	{
		cout << "Array is full!!" << endl;
	}
}

template<typename S>
void Stack<S>::pop()
{
	if (this->arr == max_size)
	{
		cout << "Array is empty" << endl;
	}
	else
	{
		this->arr[this->last_index - 1] = NULL;
		this->last_index--;
	}
}

template<typename S>
bool Stack<S>::is_empty()
{
	if (this->arr[0] != NULL)
		return true;
	else
		return false;
}

template<typename S>
void Stack<S>::printanje()
{
	for (int i = 0; i < this->last_index - 1; i++)
	{
		cout << arr[i];
		cout << endl;
	}
}

