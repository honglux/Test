#pragma once

#include <stack>
#include <set>
#include <string>

class ValidParentheses
{
public:
	ValidParentheses();
	~ValidParentheses();

	void test();

	void string_test(std::string s);

	void stact_test2();

private:

	std::stack<char> stack_test;
	std::set<char> set_test = { '(','[','{' };


};

