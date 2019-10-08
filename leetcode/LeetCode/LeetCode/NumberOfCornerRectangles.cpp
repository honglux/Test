#include "NumberOfCornerRectangles.h"

#include <iostream>

using namespace std;

NumberOfCornerRectangles::NumberOfCornerRectangles()
{
}

NumberOfCornerRectangles::~NumberOfCornerRectangles()
{
}

int NumberOfCornerRectangles::countCornerRectangles(vector<vector<int>>& grid)
{
	int count = 0;

	int LU_row = 0;
	int LU_col = 0;
	int RU_col = 0;
	int LD_row = 0;


	for (LU_row = 0; LU_row < grid.size() - 1; LU_row++)
	{
		for (LU_col = 0; LU_col < grid[0].size() - 1; LU_col++)
		{
			if (grid[LU_row][LU_col] == 1)
			{
				for (RU_col = LU_col + 1; RU_col < grid[0].size(); RU_col++)
				{
					if (grid[LU_row][RU_col] == 1)
					{
						for (LD_row = LU_row + 1; LD_row < grid.size(); LD_row++)
						{
							if (grid[LD_row][LU_col] == 1)
							{
								if (grid[LD_row][RU_col] == 1)
								{
									count++;
									cout << LU_row << " " << LU_col << " " << RU_col << " "
										<< LD_row << endl;
								}
							}
						}
					}
				}
			}
		}
	}

	return count;



}
