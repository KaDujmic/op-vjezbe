#include <iostream>
#include <iomanip>
#include <algorithm>

template<typename T>

void sort(T* arr, int n)
{
	T temp;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

template <char*>
void sort_char(char* str, int n)
{
	char temp;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (tolower(str[i]) > tolower(str[j]))
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}