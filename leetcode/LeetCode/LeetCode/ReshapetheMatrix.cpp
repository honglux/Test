#include "ReshapetheMatrix.h"

using namespace std;

ReshapetheMatrix::ReshapetheMatrix()
{
}

ReshapetheMatrix::~ReshapetheMatrix()
{
}

vector<vector<int>> ReshapetheMatrix::reshapetheMatrix()
{
	vector<int> line_vector;
	vector<vector<int>> matrix_vector;
	//vector<int>::iterator line_iter = (*nums.begin()).begin();
	vector<vector<int>>::iterator matrix_iterator = nums.begin();
	vector<int>::iterator line_iter = (*matrix_iterator).begin();

	try
	{
		for (int row = 0; row < r; row++)
		{
			for (int col = 0; col < c; col++)
			{
				if (line_iter == (*matrix_iterator).end())
				{
					matrix_iterator++;
					if (matrix_iterator == nums.end())
					{
						return this->nums;
					}
					line_iter = (*matrix_iterator).begin();
				}
				line_vector.push_back(*line_iter);
				line_iter++;

			}
			matrix_vector.push_back(line_vector);
			line_vector.clear();
		}
		return matrix_vector;
	}
	catch (const std::exception& e)
	{
		return this->nums;
	}

}

void ReshapetheMatrix::sefl_init()
{
	vector<int> line_temp;
	line_temp.push_back(1);
	line_temp.push_back(2);
	line_temp.push_back(3);
	//line_temp.push_back(1);
	//line_temp.push_back(1);
	this->nums.push_back(line_temp);
	line_temp.clear();
	line_temp.push_back(1);
	line_temp.push_back(2);
	line_temp.push_back(3);
	this->nums.push_back(line_temp);

	this->r = 4;

	this->c = 2;

}

std::vector<std::vector<int>> ReshapetheMatrix::get_nums()
{
	return this->nums;
}

