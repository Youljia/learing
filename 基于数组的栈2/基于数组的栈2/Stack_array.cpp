#include "Stack_array.h"
#include "Data.h"
# include<iostream>
# include<vector>
using namespace std;

//通过有参构造函数
Stack_array::Stack_array(int capacity) :data(capacity)
{

}

//通过默认拷贝函数
Stack_array::Stack_array(Data & d1) :data(d1)
{

}

//获取栈的容量
int Stack_array::get_capacity()
{
	return data.get_capacity();
}

//获取栈的元素个数
int Stack_array::get_size()
{
	return data.get_size();
}

//判断栈是否为空
bool Stack_array::judge_empty()
{
	return data.judge_empty();
}

//打印栈中元素
void Stack_array::print()
{
	data.print_data();
}


//向栈中添加元素
void Stack_array::push(int i)
{
	data.add_last(i);
}

//删除栈中最顶上的元素,并返回删除的元素
int Stack_array::pop()
{
	int pop;
	pop = data.get_last();
	data.delete_last();
	return pop;
}

//访问栈顶元素
int Stack_array::peek()
{
	return data.get_last();
}

