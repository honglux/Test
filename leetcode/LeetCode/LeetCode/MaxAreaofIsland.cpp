#include "MaxAreaofIsland.h"

#include <iostream>

using namespace std;

MaxAreaofIsland::MaxAreaofIsland()
{
}

MaxAreaofIsland::~MaxAreaofIsland()
{
}

int MaxAreaofIsland::maxAreaofIsland()
{
	int rows = nums.size();
	int cols = (*(nums.begin())).size();

	vector<vector<pair<int,int>>> records;
	vector<pair<int, int>> record_line;

	vector<vector<int>>::iterator nums_row_iter;
	vector<int>::iterator nums_col_iter;
	//vector<vector<pair<int,int>>>::iterator reco_row_iter = records.begin();
	//vector<pair<int,int>>::iterator reco_col_iter = (*reco_row_iter).begin();

	pair<int, int> one_record;
	
	int up = 0;
	int left = 0;

	int cmax = 0;
	int max = 0;

	int i = 0;
	int j = 0;

	for (nums_row_iter = nums.begin(); nums_row_iter != nums.end(); nums_row_iter++)
	{
		for (nums_col_iter = (*nums_row_iter).begin(); nums_col_iter != (*nums_row_iter).end(); nums_col_iter++)
		{
			//if (*nums_col_iter == 0)
			//{
			//	cmax = 0;
			//}
			//else
			//{
			//	cmax = 1;
			//	if (i == 0)
			//	{
			//	}
			//	else
			//	{
			//		cmax += (*((*(records.begin() + i - 1)).begin() + j)).first;
			//	}
			//	if (j == 0)
			//	{
			//	}
			//	else
			//	{
			//		cmax += (*(record_line.begin() + j - 1)).second;
			//	}
			//	//cout << cmax << " i" << endl;
			//	int temp = -1;
			//	int temp_i = i;
			//	int temp_j = j;
			//	while (temp_i+1 < rows)
			//	{
			//		temp = *((*(nums.begin() + temp_i + 1)).begin() + j);
			//		if (temp == 1)
			//		{
			//			cmax++;
			//			//cout << cmax<<" r"<<endl;
			//		}
			//		else
			//		{
			//			break;
			//		}
			//		temp_i++;
			//	}
			//	temp = -1;
			//	while (temp_j + 1 < cols)
			//	{
			//		temp = *((*(nums.begin() + i)).begin() + temp_j+1);
			//		if (temp == 1)
			//		{
			//			cmax++;
			//			//cout << cmax<<" c" << endl;
			//		}
			//		else
			//		{
			//			break;
			//		}
			//		temp_j++;
			//	}

			//}

			//if (max < cmax)
			//{
			//	max = cmax;
			//}


			//records;
			if (*nums_col_iter == 0)
			{
				cmax = 0;

				up = 0;
				left = 0;
			}
			else
			{
				cmax = 1;

				if (i == 0)
				{
					up = 1;
				}
				else
				{
					int last_row = (*((*(records.begin() + i - 1)).begin() + j)).first;
					cmax += last_row;

					up = 1 + last_row;
				}
				if (j == 0)
				{
					left = 1;
				}
				else
				{
					int last_col = (*(record_line.begin() + j - 1)).second;
					cmax += last_col;

					left = 1 + last_col;
				}

				int temp = -1;
				int temp_i = i;
				int temp_j = j;
				while (temp_i+1 < rows)
				{
					temp = *((*(nums.begin() + temp_i + 1)).begin() + j);
					if (temp == 1)
					{
						cmax++;
						//cout << cmax<<" r"<<endl;
					}
					else
					{
						break;
					}
					temp_i++;
				}
				temp = -1;
				while (temp_j + 1 < cols)
				{
					temp = *((*(nums.begin() + i)).begin() + temp_j+1);
					if (temp == 1)
					{
						cmax++;
						//cout << cmax<<" c" << endl;
					}
					else
					{
						break;
					}
					temp_j++;
				}

			}

			if (max < cmax)
			{
				max = cmax;
			}

			one_record = make_pair(up, left);
			record_line.push_back(one_record);
			

			//cout << i << " " << j << " " << one_record.first << " " << one_record.second << " " << cmax << endl;
			j++;
		}


		//records;
		records.push_back(record_line);
		i++;
		j = 0;
		record_line.clear();
	}

	return max;


}

void MaxAreaofIsland::self_init()
{

	//vector<int> temp_line;
	//temp_line.push_back(1);
	//temp_line.push_back(0);
	//temp_line.push_back(1);
	//temp_line.push_back(0);
	//temp_line.push_back(0);
	//nums.push_back(temp_line);
	//temp_line.clear();

	//temp_line.push_back(1);
	//temp_line.push_back(1);
	//temp_line.push_back(1);
	//temp_line.push_back(1);
	//temp_line.push_back(1);
	//nums.push_back(temp_line);
	//temp_line.clear();

	//temp_line.push_back(1);
	//temp_line.push_back(1);
	//temp_line.push_back(1);
	//temp_line.push_back(0);
	//temp_line.push_back(0);
	//nums.push_back(temp_line);
	//temp_line.clear();

	//temp_line.push_back(0);
	//temp_line.push_back(0);
	//temp_line.push_back(1);
	//temp_line.push_back(0);
	//temp_line.push_back(0);
	//nums.push_back(temp_line);
	//temp_line.clear();

	//second;
	vector<int> temp_line;
	temp_line.push_back(1);
	temp_line.push_back(1);
	temp_line.push_back(0);
	temp_line.push_back(1);
	temp_line.push_back(1);
	nums.push_back(temp_line);
	temp_line.clear();

	temp_line.push_back(1);
	temp_line.push_back(0);
	temp_line.push_back(0);
	temp_line.push_back(0);
	temp_line.push_back(0);
	nums.push_back(temp_line);
	temp_line.clear();

	temp_line.push_back(0);
	temp_line.push_back(0);
	temp_line.push_back(0);
	temp_line.push_back(0);
	temp_line.push_back(1);
	nums.push_back(temp_line);
	temp_line.clear();

	temp_line.push_back(1);
	temp_line.push_back(1);
	temp_line.push_back(0);
	temp_line.push_back(1);
	temp_line.push_back(1);
	nums.push_back(temp_line);
	temp_line.clear();

}
