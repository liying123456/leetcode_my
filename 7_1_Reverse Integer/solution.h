#include<iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
		int num;
		int sum = 0;
		while(x!=0){
			num = x%10;
			if(sum>INT_MAX/10||sum<INT_MIN/10) return 0;
			sum = sum*10 + num;
			x = x/10;
		}
		return sum;
	}

	
};