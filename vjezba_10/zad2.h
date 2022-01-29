#pragma once


template <typename S>

class Stack
{
	S* arr;
	int last_index;
	int max_size;
public:
	Stack<S>(int size);
	void push(S novi);
	void pop();
	bool is_empty();
	void printanje();
	~Stack<S>();
};

