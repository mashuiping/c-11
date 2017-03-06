/*************************************************************************
    > File Name: lambda.cpp
    > Author: mashuiping
    > Mail: 1647934940@qq.com 
    > Created Time: Thu Feb 23 10:42:17 2017
 ************************************************************************/

#include <iostream>
#include <assert.h>
#include <algorithm>
#include <array>

using namespace std;

int main(){
	array<int, 8> foo = {
		3,5,7,11,13,17,19,23
	};
	if(all_of(foo.begin(), foo.end(), [](int i){return i % 2;}))
		cout << "All the elements are odd numbers. \n";
	if(any_of(foo.begin(), foo.end(), [](int i){return i < 4;}))
		cout << "There is(are) number(s) that smaller than 4 in the range. \n";
	if(none_of(foo.begin(), foo.end(), [](int i){return i < 2;}))
		cout << "There are none of numbers smaller than 2 in the range. \n";
	for_each(foo.begin(), foo.end(), [](int i){cout << i << " ";});
	cout << endl;
	auto iter = foo.begin();
	iter = find(foo.begin(), foo.end(), 28);
	if(iter != foo.end())
		cout << "28 was found in foo \n";
	else
		cout << "28 was no found in foo \n";
	iter = find_if(foo.begin(), foo.end(), [](int i){return i == 3;});
	cout << *iter << endl;
	array<int, 4> bar = {
		100, 13, 34, 55
	};
	auto barIter1 = bar.begin();
	auto barIter2 = bar.end();
	auto iter2 = foo.end();
	auto findEnd = find_end(iter, iter2, barIter1, barIter2);
	cout << *findEnd << endl;
	auto findFirst = find_first_of(iter, iter2, barIter1, barIter2);
	cout << *findFirst << endl;
	auto adjacentIter = adjacent_find(iter, iter2);
	if(adjacentIter != foo.end())
		cout << *adjacentIter;
	else
		cout << *(adjacentIter -1);
	cout << endl;
	foo[2] = 11;
	for_each(foo.begin(), foo.end(), [](int i){cout << i << " ";});
	cout << endl;
	adjacentIter = adjacent_find(iter, iter2);
	if(adjacentIter != foo.end())
		cout << *adjacentIter;
	else
		cout << *(adjacentIter -1);

	cout << endl;
	cout << count(foo.begin(), foo.end(), 11) << endl;
	cout << count_if(foo.begin(), foo.end(), [](int i){ return i > 10;}) << endl;

	auto mypair = mismatch(barIter1, barIter2, iter);
	cout << *mypair.first << " " << *mypair.second << endl;

	return 0;
}
