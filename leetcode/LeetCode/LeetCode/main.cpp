#include <vector>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <tuple>
#include <unordered_set>
#include <unordered_map>
#include <queue>

#include "ArrayPartitionI.h"
#include "ReshapetheMatrix.h"
#include "MaxAreaofIsland.h"
#include "TeemoAttacking.h"
#include "MaximumSumof3NonOverlappingSubarrays.h"
#include "LongestConsecutiveSequence.h"
#include "MaxChunksToMakeSortedII.h"
#include "FindMinimuminRotatedSortedArrayII.h"
#include "CountingBits.h"
#include "BestTimetoBuyandSellStock.h"
#include "ValidParentheses.h"
#include "NumberOfCornerRectangles.h"

using namespace std;

struct test2
{
	int a;
	int b;
	test2() : a(1), b(1) {};
	test2(int x) :a(x), b(x) {};
	test2(test2* other_t2) :a(other_t2->a), b(other_t2->b) {};
};

struct test1
{
	int a;
	test1() : a(0) {};
	//test2* t2;
	//test1(test2* te2) :t2(te2) {};
};

void fun_test1(int& a)
{
	a = 100;
}

template<typename T>
void fun_test2(vector<T>& vec1)
{
	//vec1[0] = 2;
	vector<T>::iterator a = vec1.begin();
	cout << (*a) << endl;
}

void memory_leak_test()
{
	//test2* t2 = new test2();	//Memory leak!!!!!!
	//vector<int> vt = vector<int>(10, 1);	//No memory leak;
}

void fun_test3(int& i)
{
	i = i + 1;
}

void fun_test4(test1* t1p)
{
	cout << t1p->a << " t1pa " << endl;
}

bool sort_test(const pair<int, int>& l, const pair<int, int>& r)
{
	return l.second < r.second;
}

int main()
{

	//ReshapetheMatrix reshapetheMatrix_test;
	//reshapetheMatrix_test.sefl_init();
	//vector<vector<int>> reshapetheMatrix_out = reshapetheMatrix_test.reshapetheMatrix();
	////vector<vector<int>> reshapetheMatrix_out = reshapetheMatrix_test.get_nums();
	//vector<vector<int>>::iterator iter1;
	//vector<int>::iterator iter2;
	//for (iter1 = reshapetheMatrix_out.begin(); iter1 != reshapetheMatrix_out.end(); iter1++)
	//{
	//	//cout << typeid((*iter1).begin()).name() << endl;
	//	//cout << typeid(iter2).name() << endl;

	//	for (iter2 = (*iter1).begin(); iter2 != (*iter1).end(); iter2++)
	//	{
	//		cout << *iter2;
	//	}
	//	cout << endl;
	//}

	//for (iter1 = reshapetheMatrix_out.begin(); iter1 != reshapetheMatrix_out.end(); iter1++)
	//{
	//	for (iter2 = (*iter1).begin(); iter2 != (*iter1).end(); iter1++)
	//	{
	//		cout << *iter2 << endl;
	//	}
	//}

	//MaxAreaofIsland;
	//MaxAreaofIsland maxAreaofIsland;
	//maxAreaofIsland.self_init();
	//int test = maxAreaofIsland.maxAreaofIsland();
	//cout << test << endl;

	//TeemoAttacking;
	//TeemoAttacking teemoAttacking;
	//teemoAttacking.self_init();
	//int test = teemoAttacking.findPoisonedDuration();
	//cout << test << endl;

	//vector<int> fifth(5);
	//for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
	//	std::cout << ' ' << *it;	//0,0,0,0,0;
	//std::cout << '\n';

	//MaximumSumof3NonOverlappingSubarrays;
	//MaximumSumof3NonOverlappingSubarrays maximumSumof3NonOverlappingSubarrays;
	//vector<int> test;
	//maximumSumof3NonOverlappingSubarrays.self_init();
	//test = maximumSumof3NonOverlappingSubarrays.maxSumOfThreeSubarrays();
	//for (vector<int>::iterator iter = test.begin(); iter < test.end(); iter++)
	//{
	//	cout << *iter<<" ";
	//}
	//cout << endl;

	////LongestConsecutiveSequence;
	//LongestConsecutiveSequence longestConsecutiveSequence;
	//longestConsecutiveSequence.self_init();
	//int a = longestConsecutiveSequence.longestConsecutive();
	//cout << a << endl;

	////MaxChunksToMakeSortedII;
	//MaxChunksToMakeSortedII maxChunksToMakeSortedII;
	//maxChunksToMakeSortedII.self_init();
	//int a = maxChunksToMakeSortedII.maxChunksToSorted();
	//cout << a << endl;

	////FindMinimuminRotatedSortedArrayII;
	//FindMinimuminRotatedSortedArrayII findMinimuminRotatedSortedArrayII;
	//findMinimuminRotatedSortedArrayII.self_init();
	//int a = findMinimuminRotatedSortedArrayII.findMin();
	//cout << a << endl;

	////CountingBits;
	//CountingBits countingBits;
	//countingBits.test();

	////BestTimetoBuyandSellStock;
	//BestTimetoBuyandSellStock bestTimetoBuyandSellStock;
	//vector<int> test_vec = vector<int>({ 7,1,5,3,6,4 });
	//bestTimetoBuyandSellStock.maxProfit(test_vec);

	////ValidParentheses;
	//ValidParentheses validParentheses;
	//validParentheses.test();
	//validParentheses.string_test("abcdefg");
	//validParentheses.stact_test2();

	////NumberOfCornerRectangles;
	//NumberOfCornerRectangles numberOfCornerRectangles;
	//vector<vector<int>> grid = { {1,0,1},{0,0,0},{1,0,1} };
	//cout << numberOfCornerRectangles.countCornerRectangles(grid)<<endl;

	//vector<pair<int, int>> test1;

	//test1.push_back(make_pair(1, 2));
	//test1.push_back(make_pair(3, 5));
	//test1.push_back(make_pair(-2, 7));
	//test1.push_back(make_pair(-3, 1));
	//test1.push_back(make_pair(20, 10));
	//test1.push_back(make_pair(10, 9));

	//sort(test1.begin(), test1.end());

	//sort(test1.begin(), test1.end(),
	//	[](const pair<int, int>& l, const pair<int, int>& r) -> bool
	//{
	//	return l.second < r.second;
	//}
	//);

	unordered_map<int, vector<int>> a = unordered_map<int, vector<int>>();
	a[0] = vector<int>(3, 3);

	for (unordered_map<int, vector<int>>::iterator it = a.begin(); it != a.end(); it++)
	{
		cout << (*it).first << endl;
	}


	system("pause");


	return 0;

}

