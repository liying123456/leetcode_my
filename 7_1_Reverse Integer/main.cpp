#include<iostream>
#include "solution.h"
//using namespace std;

void main(){
	int x;
	cout<<"���ֵΪ"<<INT_MAX<<"��СֵΪ"<<INT_MIN<<endl;
	while(cin>>x){
		Solution s;
		int result  = s.reverse(x);

		cout<<result<<endl;
	}

}