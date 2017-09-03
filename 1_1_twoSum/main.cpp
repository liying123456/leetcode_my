#include <iostream>
#include "solution.h"
using namespace std;

void main(){
	int nums[5];
	int target;
	Solution s;
	int *r;
	for(int i = 0;i<5;i++){
		cin>>nums[i];
	}
//	cout<<endl;
	cin>>target;
	r=s.twoSum(nums,target);
	cout<<r[0]<<","<<r[1]<<endl;
}
