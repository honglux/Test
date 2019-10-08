#include "FindMinimuminRotatedSortedArrayII.h"

#include <climits>

using namespace std;

FindMinimuminRotatedSortedArrayII::FindMinimuminRotatedSortedArrayII()
{
}

FindMinimuminRotatedSortedArrayII::~FindMinimuminRotatedSortedArrayII()
{
}

int FindMinimuminRotatedSortedArrayII::findMin()
{
	
	vector<int>::iterator nums_iter;
	int cut_i = 0;
	int previous = INT_MIN;
	int index = 0;
	int min_num = INT_MAX;
	
	for (nums_iter= nums.begin(); nums_iter != nums.end(); nums_iter++)
	{

		if (previous > *nums_iter)
		{
			min_num = *nums_iter;
			//cut_i = index;
			break;
		}
		else
		{
			previous = *nums_iter;
			if (previous < min_num)
			{
				min_num = previous;
			}
		}
		//index++;
	}


	return min_num;
}

void FindMinimuminRotatedSortedArrayII::self_init()
{
	//4 5 6 7 0 1 2;
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(7);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(2);

}
