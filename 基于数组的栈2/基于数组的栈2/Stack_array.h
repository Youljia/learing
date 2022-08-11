#pragma once
#include "Data.h"
class Stack_array
{
public:
	Stack_array(int capacity);
	Stack_array(Data& d1);
	int get_capacity();
	int get_size();
	bool judge_empty();
	void push(int);
	int pop();
	int peek();
	void print();
private:
	Data data;
};
