#pragma once

#include <vector>

//not finished;
class MaximumSumof3NonOverlappingSubarrays
{
public:
	MaximumSumof3NonOverlappingSubarrays();
	~MaximumSumof3NonOverlappingSubarrays();

	std::vector<int> maxSumOfThreeSubarrays();

	void self_init();

private:

	std::vector<int> nums;
	int k;

	bool overlap(int ind[3]);
	bool inside(int a, int b);

};

