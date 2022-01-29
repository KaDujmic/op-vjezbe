#include "zad2.h"
#include <iostream>
#include <iomanip>
#include <algorithm>

template <typename T>
void main()
{
	Stack<T> novi(5);
	novi.push(5);
	novi.push(3);
	novi.pop();
	novi.printanje();
}