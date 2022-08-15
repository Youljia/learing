# include<iostream>
#include<string>
# include<stack>
using namespace std;

//判断是否是有效括号
bool is_valid(string& str)
{
	stack <char> s;
	char x;
	char s_top;
	for (int i = 0; i < str.size(); ++i)
	{
		x = str.at(i);
		//将左括号压入栈中
		if (x == '{' || x == '[' || x == '(')
			s.push(x);
		else
		{
			//排除当右括号多的情况
			if (s.empty())
				return false;
			//判断括号是否有效
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
	//排除当左括号多的情况
	return s.empty();
}

int main()
{
	//合理的情况
	string s = "{[()]}";
	if (is_valid(s))
		cout << "有效括号！" << endl;
	else
		cout << "无效括号！" << endl;
	//右括号多的情况
	s = "{[()]})";
	if (is_valid(s))
		cout << "有效括号！" << endl;
	else
		cout << "无效括号！" << endl;
	//左括号多的情况
	s = "{[()]})";
	if (is_valid(s))
		cout << "有效括号！" << endl;
	else
		cout << "无效括号！" << endl;
	//不合理的情况
	s = "{[()}})";
	if (is_valid(s))
		cout << "有效括号！" << endl;
	else
		cout << "无效括号！" << endl;
	return 0;
}