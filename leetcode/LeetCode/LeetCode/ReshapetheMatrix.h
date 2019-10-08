#pragma once
#include <vector>


class ReshapetheMatrix
{
public:
	ReshapetheMatrix();
	~ReshapetheMatrix();

	std::vector<std::vector<int>> reshapetheMatrix();

	void sefl_init();

	std::vector<std::vector<int>> get_nums();

private:

	std::vector<std::vector<int>> nums;
	int r, c;

};

