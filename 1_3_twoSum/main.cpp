#include <iostream>
#include <vector>
using namespace std;
#include "solution.h"

/*vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> Hash;
		vector<int> r;
		cout<<nums.size()<<endl;
    	for(int i = 0;i<nums.size();i++){
			
		if(Hash.count(target-nums[i])==1&&Hash[target-nums[i]]!=i){
				r[0] = i;
				r[1] = Hash[target-nums[i]];
				break;
			}
			Hash[nums[i]]=i;
			cout<<r[0]<<"+"<<r[1]<<endl;
		}
		return r;
 }
*/
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
 
