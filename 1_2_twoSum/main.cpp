#include <iostream>
#include "solution.h"
#include<vector>
using namespace std;

void main(){
	vector<int> nums;
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(4);
	Solution s;
	vector<int> r(2);
	r=s.twoSum(nums,6);
	cout<<r.at(0)<<","<<r.at(1)<<endl;
}

