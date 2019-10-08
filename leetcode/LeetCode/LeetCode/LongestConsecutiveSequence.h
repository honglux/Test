#pragma once

#include <vector>

class LongestConsecutiveSequence
{
public:
	LongestConsecutiveSequence();
	~LongestConsecutiveSequence();

	int longestConsecutive();
	void self_init();

private:

	std::vector<int> nums;

	bool compare_value(int a);

};

