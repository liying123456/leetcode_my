#include <vector>
class Solution{ 
public:
int* twoSum(int nums[],int target){
	int *result = (int*)malloc(2*sizeof(int));
	for(int i = 0;i<sizeof(nums);i++)
	{
		for(int j = i;j<sizeof(nums);j++){
			if(nums[i]+nums[j]==target){

				result[0]=i;
				result[1]=j;
			
			}
				
		}
	}
		return result;
//	throw IllegaleArgumentException("no find");
}
};

