# include<iostream>
#include<string>
# include<stack>
using namespace std;

//�ж��Ƿ�����Ч����
bool is_valid(string& str)
{
	stack <char> s;
	char x;
	char s_top;
	for (int i = 0; i < str.size(); ++i)
	{
		x = str.at(i);
		//��������ѹ��ջ��
		if (x == '{' || x == '[' || x == '(')
			s.push(x);
		else
		{
			//�ų��������Ŷ�����
			if (s.empty())
				return false;
			//�ж������Ƿ���Ч
			s_top = s.top();
			if (s_top == '{' && x != '}')
				return false;
			if (s_top == '[' && x != ']')
				return false;
			if (s_top == '(' && x != ')')
				return false;
			s.pop();
		}
	}
	//�ų��������Ŷ�����
	return s.empty();
}

int main()
{
	//��������
	string s = "{[()]}";
	if (is_valid(s))
		cout << "��Ч���ţ�" << endl;
	else
		cout << "��Ч���ţ�" << endl;
	//�����Ŷ�����
	s = "{[()]})";
	if (is_valid(s))
		cout << "��Ч���ţ�" << endl;
	else
		cout << "��Ч���ţ�" << endl;
	//�����Ŷ�����
	s = "{[()]})";
	if (is_valid(s))
		cout << "��Ч���ţ�" << endl;
	else
		cout << "��Ч���ţ�" << endl;
	//����������
	s = "{[()}})";
	if (is_valid(s))
		cout << "��Ч���ţ�" << endl;
	else
		cout << "��Ч���ţ�" << endl;
	return 0;
}