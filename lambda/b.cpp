/*************************************************************************
    > File Name: b.cpp
    > Author: mashuiping
    > Mail: 1647934940@qq.com 
    > Created Time: Thu Feb 23 16:50:59 2017
 ************************************************************************/

#include <iostream>
#include <assert.h>

#include <vector>
#include <algorithm>
using namespace std;
int getPos(vector<int> A, int n, int val){
	auto iter = lower_bound(A.begin(), A.end(), val);
	if(iter == A.end() || *iter != val)
		return -1;
	return iter - A.begin();
}

int main(){
	int a[7] = {
		3,56,1,77,24,9,30
	};
	sort(a, a+7);
	for_each(a, a+7, [](int i){cout << i << " ";});
	vector<int> v(a, a+7);
	cout << endl;
	cout << getPos(v, 7, 23);

}
