#pragma once

#include <vector>

class TeemoAttacking
{
public:
	TeemoAttacking();
	~TeemoAttacking();

	int findPoisonedDuration();

	void self_init();

private:

	std::vector<int> timeSeries;
	int duration;


};

