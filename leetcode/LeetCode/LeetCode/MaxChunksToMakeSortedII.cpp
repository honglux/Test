#include "MaxChunksToMakeSortedII.h"

#include <algorithm>

using namespace std;

MaxChunksToMakeSortedII::MaxChunksToMakeSortedII()
{
}

MaxChunksToMakeSortedII::~MaxChunksToMakeSortedII()
{
}

int MaxChunksToMakeSortedII::maxChunksToSorted()
{
	
	vector<int>::iterator arr_iter;
	int max_num = 0;
	vector<int> temp_vec;
	vector<vector<int>> res_vec;
	bool cut_flag = true;

	for (arr_iter = arr.begin(); arr_iter != arr.end(); arr_iter++)
	{
		if (max_num <= *arr_iter)
		{
			cut_flag = true;
			for (vector<int>::iterator temp_iter = arr_iter+1; temp_iter != arr.end(); temp_iter++)
			{
				if (max_num > *temp_iter)
				{
					cut_flag = false;
					break;
				}
			}
			if (temp_vec.size() != 0 && cut_flag == true)
			{
				res_vec.push_back(temp_vec);
				temp_vec.clear();
			}
			max_num = *arr_iter;
			temp_vec.push_back(*arr_iter);
		}
		else
		{
			temp_vec.push_back(*arr_iter);
		}
	}

	if (temp_vec.size() != 0)
	{
		res_vec.push_back(temp_vec);
		temp_vec.clear();
	}

	return res_vec.size();

	





}

void MaxChunksToMakeSortedII::self_init()
{
	//[2,1,3,4,4];
	arr.push_back(2);
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);
	//arr.push_back(1);
	//arr.push_back(1);
	//arr.push_back(1);

}

