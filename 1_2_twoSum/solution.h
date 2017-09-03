#include <vector>
#include <map> 
using namespace std;
class Solution{ 
public:
	vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> Hash;
        vector<int> r;
        for(int j = 0;j<nums.size();j++){
            Hash[nums[j]]=j;
        }
        for(int i = 0;i<nums.size();i++){
            if(Hash.find(target-nums[i])!=Hash.end()&&Hash[target-nums[i]]!=i){
                r.push_back(i);
                r[1] = Hash[target-nums[i]];
                break;
            }
        }
        return r;
    }
  };	
