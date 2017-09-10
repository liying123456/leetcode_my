#include<iostream>
#include "solution.h"
//using namespace std;

void main(){
	int x;
	cout<<"最大值为"<<INT_MAX<<"最小值为"<<INT_MIN<<endl;
	while(cin>>x){
		Solution s;
		int result  = s.reverse(x);

		cout<<result<<endl;
	}

}