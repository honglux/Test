#include <vector>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <tuple>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <numeric>
#include <sstream>
#include <iomanip>


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

void bit_pri(int);
char findTheDifference(string, string);
vector<int> hash_sort(vector<int>&);
template<class T> void vec_pri(vector<T>&);
pair<float,float> solve_1v2p(float, float, float);
int GCD(int, int);
bool collinear(pair<int, int>, pair<int, int>, pair<int, int>);
unordered_set<int> prim_fac(int);
vector<int> sort_dec(const vector<int>&);
vector<pair<int, int>> prio_sort_pair_inc(vector<pair<int, int>>&);
int str_to_int(const string&);

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

	//int a = 0;
	//pair<int, int> b = make_pair<int, int>(a, 0);	//Error!
	//pair<int, int> b = make_pair(a, 0);	//Good!

	int abcdefg = 0;

	vector<int> a = vector<int>();
	static vector<int> s_t = vector<int>();
	sort(a.begin(), a.end(),
		[](const int& a, const int& b) -> bool
		{
			s_t[1] == s_t[2];
		});



	system("pause");


	return 0;

}

void bit_pri(int a)
{
	bitset<32> d(a);
	cout << d << endl;
}

char findTheDifference(string s, string t) 
{
	int xor = 0;
	for (int i = 0; i < s.length(); i++)
	{
		xor = xor ^s[i] ^ t[i];
		cout << xor << endl;
	}
	
	cout << (xor ^t[s.length()]) << endl;

	return (char)(xor^t[s.length()]);
}

vector<int> hash_sort(vector<int>& vec)
{
	//int max = *max_element(vec.begin(), vec.end());
	//int min = *min_element(vec.begin(), vec.end());
	int minv = INT32_MAX, maxv = INT32_MIN;
	
	vector<int> result = vector<int>();
	unordered_map<int, int> buffer = unordered_map<int, int>();

	for (int i = 0; i < vec.size(); i++)
	{
		minv = min(minv, vec[i]);
		maxv = max(maxv, vec[i]);
		buffer[vec[i]]++;
	}

	for (int i = minv; i <= maxv; i++)
	{
		for (int j = 0; j < buffer[i]; j++)
		{
			result.push_back(i);
		}
	}

	return result;
}

template<class T>
void vec_pri(vector<T>& vec)
{
	for (auto elem : vec)
	{
		cout << elem << " | ";
	}
	cout << endl;
}

pair<float,float> solve_1v2p(float a, float b, float c)
{
	float x1 = (float)(-b + sqrt(b*b - 4 * a * c)) / (float)(2 * a);
	float x2 = (float)(-b - sqrt(b*b - 4 * a * c)) / (float)(2 * a);

	return make_pair(x1, x2);
}

int GCD(int a, int b)
{
	if (a == b) { return a; }
	if (a > b) { return GCD(a - b, b); }
	return GCD(a, b - a);
}

bool collinear(pair<int, int> p1, pair<int, int> p2,pair<int, int> p3)
{
	if ((p1.first * (p2.second - p3.second) + p2.first * (p3.second - p1.second) +
		p3.first * (p1.second - p2.second)) == 0)
	{
		return true;
	}
	return false;
}

unordered_set<int> prim_fac(int a)
{
	unordered_set<int> result = unordered_set<int>();

	bool ins = false;
	for (int i = 2; i <= a / 2; i++)
	{
		ins = false;
		while (a % i == 0)
		{
			ins = true;
			a /= i;
		}
		if (ins) { result.insert(i); }
	}
	return result;
}

bool is_prime(int a)
{
	for (int i = 2; i < a/2; i++)
	{
		if (a % i == 0) { return false; }
	}
	return a >= 2;
}

vector<int> sort_dec(const vector<int>& vec)
{
	vector<int> res = vec;
	sort(res.begin(), res.end(),
		[&](const int l, const int r) -> bool
		{
			return l > r;
		});
	return res;
}

vector<pair<int, int>> prio_sort_pair_inc(vector<pair<int, int>>& a)
{
	auto comp = [](const pair<int, int>& p1, const pair<int,int>& p2) -> bool
	{
		return p1.first > p2.first;
	};

	vector<pair<int, int>> res;
	res.reserve(a.size());

	//priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)> pq = priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)>(comp);
	priority_queue<pair<int, int>, vector<pair<int, int>>, std::greater<pair<int,int>>> pq = priority_queue<pair<int, int>, vector<pair<int, int>>, std::greater<pair<int,int>>>();
	for (int i = 0; i < a.size(); i++)
	{
		pq.push(a[i]);
	}
	while (!pq.empty())
	{
		res.push_back(pq.top());
		pq.pop();
	}
	return res;
}

int str_to_int(const string& s)
{
	int num = 0;
	istringstream(s) >> num;
	return num;
}