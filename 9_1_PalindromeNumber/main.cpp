#include<iostream>
#include"solution.h"
using namespace std;
int main(){
	int x = 1234;
	Solution s;
	if(s.isPalindrome(x)){
		cout<<"true"<<endl;
	}
	cout<<"false"<<endl;
	return 1;
}