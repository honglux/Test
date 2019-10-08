#pragma once

#include <vector>


class FindMinimuminRotatedSortedArrayII
{
public:
	FindMinimuminRotatedSortedArrayII();
	~FindMinimuminRotatedSortedArrayII();

	int findMin();
	void self_init();

private:

	std::vector<int> nums;

};

