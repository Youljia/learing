#include "Stack_array.h"
#include "Data.h"
# include<iostream>
# include<vector>
using namespace std;

//ͨ���вι��캯��
Stack_array::Stack_array(int capacity) :data(capacity)
{

}

//ͨ��Ĭ�Ͽ�������
Stack_array::Stack_array(Data & d1) :data(d1)
{

}

//��ȡջ������
int Stack_array::get_capacity()
{
	return data.get_capacity();
}

//��ȡջ��Ԫ�ظ���
int Stack_array::get_size()
{
	return data.get_size();
}

//�ж�ջ�Ƿ�Ϊ��
bool Stack_array::judge_empty()
{
	return data.judge_empty();
}

//��ӡջ��Ԫ��
void Stack_array::print()
{
	data.print_data();
}


//��ջ�����Ԫ��
void Stack_array::push(int i)
{
	data.add_last(i);
}

//ɾ��ջ����ϵ�Ԫ��,������ɾ����Ԫ��
int Stack_array::pop()
{
	int pop;
	pop = data.get_last();
	data.delete_last();
	return pop;
}

//����ջ��Ԫ��
int Stack_array::peek()
{
	return data.get_last();
}

