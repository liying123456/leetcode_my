#include<iostream>
#include"solution.h"
using namespace std;
int main(){
	int x = 121;
	Solution s;
	if(s.isPalindrome(x)){
		cout<<"true"<<endl;
	}
	else cout<<"false"<<endl;
	return 1;
}