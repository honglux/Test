#include "LongestConsecutiveSequence.h"

#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

LongestConsecutiveSequence::LongestConsecutiveSequence()
{
}

LongestConsecutiveSequence::~LongestConsecutiveSequence()
{
}

int LongestConsecutiveSequence::longestConsecutive()
{
	
	vector<int>::iterator iter;
	map<int, int> need_max;
	//bool find_1 = false;
	map<int, int>::iterator need_it;
	map<int, int>::iterator max_it;
	int need;
	int max;
	map<int, int>::iterator result_it;
	int result = 0;

	for (iter = nums.begin(); iter  < nums.end(); iter ++)
	{

		//if (*iter == 1)
		//{
		//	find_1 == true;
		//}
		if (false)
		{

		}
		else
		{
			need_it = need_max.find(*iter);
			if (need_it != need_max.end())
			{
				max = need_it->second;
				need_max.erase(need_it);
			}
			else
			{
				max = *iter;
			}

			bool find_value = false;
			for (map<int, int>::iterator i = need_max.begin(); i != need_max.end(); i++)
			{
				if (i->second == *iter-1)
				{
					need = i->first;
					find_value = true;
					need_max.erase(i);
					break;
				}
			}
			if (find_value == false)
			{
				need = *iter - 1;
			}
			//else
			//{
			//	max_it = need_max.find(0);
			//	if (max_it != need_max.end())
			//	{
			//		need_max.erase(max_it);
			//	}
			//}

			//cout << "needmax " << need << " " << max << endl;
			need_max.insert(make_pair(need, max));

		}



	}
	//result_it = need_max.find(0);
	//if (result_it != need_max.end() && find_1 == true)

	for (map<int, int>::iterator it = need_max.begin(); it != need_max.end(); it++)
	{
		result = std::max(result, (it->second - it->first));


		//cout << "needmax " << it->first << " " << it->second << endl;
	}


	//if (result_it != need_max.end())
	//{
	//	return result_it->second;
	//}
	//else
	//{
	//	return 0;
	//}

	return result;

}

void LongestConsecutiveSequence::self_init()
{
	//[100, 4, 200, 1, 3, 2];

	nums.push_back(100);
	nums.push_back(4);
	nums.push_back(200);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(2);

}

bool LongestConsecutiveSequence::compare_value(int a)
{
	return false;
}
