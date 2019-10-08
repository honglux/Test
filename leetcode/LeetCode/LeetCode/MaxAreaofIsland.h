#pragma once

#include <vector>

class MaxAreaofIsland
{
public:
	MaxAreaofIsland();
	~MaxAreaofIsland();

	int maxAreaofIsland();
	void self_init();

private:

	std::vector<std::vector<int>> nums;


};

