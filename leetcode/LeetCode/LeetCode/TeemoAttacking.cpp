#include "TeemoAttacking.h"

using namespace std;

TeemoAttacking::TeemoAttacking()
{
}

TeemoAttacking::~TeemoAttacking()
{
}

int TeemoAttacking::findPoisonedDuration()
{

	vector<int>::iterator time_iter;
	int curr_time = 0;
	int counter = 0;
	int substract = 0;

	for (time_iter = timeSeries.begin(); time_iter  != timeSeries.end(); time_iter ++)
	{
		counter++;

		int diff = curr_time - *time_iter;
		if (diff > 0)
		{
			substract += diff;
		}

		curr_time = *time_iter + duration;
	}




	return counter*duration - substract;
}

void TeemoAttacking::self_init()
{
	this->duration = 4;
	this->timeSeries.push_back(1);
	this->timeSeries.push_back(3);
	this->timeSeries.push_back(5);
}
