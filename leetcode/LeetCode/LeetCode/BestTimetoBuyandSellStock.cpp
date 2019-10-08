#include "BestTimetoBuyandSellStock.h"

#include <iostream>

int BestTimetoBuyandSellStock::maxProfit(vector<int>& prices)
{  
	cout << prices.size() << endl;
	int minimum = prices[0];
	int sec_minimum = prices[0];

	int profit = 0;
	int temp_profit = 0;

	for (vector<int>::iterator prices_iter = prices.begin(); prices_iter != prices.end(); prices_iter++)
	{
		cout << temp_profit << endl;

		if (*prices_iter < sec_minimum)
		{
			sec_minimum = *prices_iter;
		}

		temp_profit = *prices_iter - sec_minimum;
		if (temp_profit > profit)
		{
			minimum = sec_minimum;
			profit = temp_profit;
		}
	}

	return profit;
}
