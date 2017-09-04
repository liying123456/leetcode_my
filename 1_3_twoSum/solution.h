#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int> Hash;
		vector<int> r;
		
    	for(int i = 0;i<nums.size();i++){
			
			if(Hash.find(target-nums[i])!=Hash.end()&&Hash[target-nums[i]]!=i){
				if(i<Hash[target-nums[i]]){
					r.push_back(i);
					r.push_back(Hash[target-nums[i]]);}
				else{
					r.push_back(Hash[target-nums[i]]);
					r.push_back(i);}
				break;
			}
			Hash[nums[i]]=i;
		}
	
		return r;
	}
};
