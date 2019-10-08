#include "ValidParentheses.h"

#include <iostream>

using namespace std;

ValidParentheses::ValidParentheses()
{
}

ValidParentheses::~ValidParentheses()
{
}

void ValidParentheses::test()
{
	stack_test.push('a');
	stack_test.push('b');
	stack_test.push('c');

	while (!stack_test.empty())
	{
		cout << ',' << stack_test.top();
		stack_test.pop();
	}


}

void ValidParentheses::string_test(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		cout << s[i] << endl;
	}

}

void ValidParentheses::stact_test2()
{
	stack_test.top();
}
