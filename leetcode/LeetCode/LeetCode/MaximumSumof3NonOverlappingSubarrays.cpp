#include "MaximumSumof3NonOverlappingSubarrays.h"

#include <algorithm>
#include <iostream>

using namespace std;

MaximumSumof3NonOverlappingSubarrays::MaximumSumof3NonOverlappingSubarrays()
{
}

MaximumSumof3NonOverlappingSubarrays::~MaximumSumof3NonOverlappingSubarrays()
{
}

std::vector<int> MaximumSumof3NonOverlappingSubarrays::maxSumOfThreeSubarrays()
{
	
	vector<int>::iterator iter;

	int inde[3] = {-k,-2*k-1,-3*k-1};
	int max[3] = {0,0,0};
	int temp_max = 0;
	vector<int>::iterator temp_iter;
	bool end_flag = false;
	int temp_index;
	for (int i = 0; i < 3; i++)
	{
		temp_index = 0;
		for (iter = nums.begin(); iter < nums.end(); iter++)
		{
			temp_iter = iter;
			temp_max = 0;
			for (int j = 0; j < k; j++)
			{
				if (temp_iter == nums.end())
				{
					end_flag = true;
					break;
				}
				temp_max += *temp_iter;
				temp_iter++;
			}
			if (end_flag)
			{
				break;
			}
			else
			{
				if (i >= 1)
				{
					if (overlap(inde))
					{
						continue;
					}
				}
				//max[i] = std::max(temp_max, max[i]);
				cout << temp_max <<" temp_max"<< endl;
				if (temp_max > max[i])
				{
					inde[i] = temp_index;
					max[i] = temp_max;
				}
			}
			temp_index++;
			
			cout << temp_index << endl;
		}
		end_flag = false;
	}

	vector<int> result;
	for (int i = 0; i < 3; i++)
	{
		result.push_back(inde[i]);
	}

	return result;
}

void MaximumSumof3NonOverlappingSubarrays::self_init()
{
	//[1, 2, 1, 2, 6, 7, 5, 1]

	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(6);
	nums.push_back(7);
	nums.push_back(5);
	nums.push_back(1);
	//nums.push_back();
	//nums.push_back();

	k = 2;

}

bool MaximumSumof3NonOverlappingSubarrays::overlap(int ind[3])
{
	if ((!inside(ind[0], ind[1]) && (!inside(ind[1], ind[2])) && (!inside(ind[0], ind[2]))))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool MaximumSumof3NonOverlappingSubarrays::inside(int a, int b)
{
	if ((a<b && a+k<b) || (a>b && a>b+k))
	{
		return false;
	}
	else
	{
		return true;
	}
}
