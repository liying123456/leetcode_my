using namespace std;

class Solution {
//相当于翻转数字
public:
    bool isPalindrome(int x) {
		if(x<0||(x%10==0&&x!=0)){
			return false;
		}
		if(x>=0&&x<10){
			return true;
		}
		int newnum = 0;//newnum 是一个倒着构造的数字，若x为12345，newnum的变化为5，54，543，5432，。。。。
		while(x>newnum){
			newnum = newnum * 10 + x%10;
			x = x/10;
//			cout<<"newnum"<<newnum<<" "<<"x"<<x<<endl;
		}
		return (x==newnum)||(x==newnum/10);
	}
};