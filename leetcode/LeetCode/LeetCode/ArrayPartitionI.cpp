#include "ArrayPartitionI.h"

using namespace std;

int ArrayPartitionI::arrayPartitionI()
{
	//vector<int> nums;
	nums.push_back(1);
	nums.push_back(4);
	nums.push_back(3);
	nums.push_back(2);


	//vector<int>::iterator nums_iter;

	sort(nums.begin(), nums.end());

	cout << *(nums.begin()+1) << endl;

	vector<int>::iterator nums_iter;
	int count = 0;
	int sum = 0;
	for (nums_iter = nums.begin(); nums_iter != nums.end(); nums_iter++)
	{
		if (count % 2 == 0)
		{
			sum += *nums_iter;
		}
		count++;
	}


	return sum;
}

ArrayPartitionI::ArrayPartitionI()
{
}

ArrayPartitionI::~ArrayPartitionI()
{
}