using namespace std;
#include<math.h>
class Solution {
	//判断数字是不是回文
	//若转为字符串，会需要额外的空间
	//若利用翻转数字，有可能会溢出
	//若是chai程前一个数和最后一个数，会有先导0的问题。01系统认为1.
public:
    bool isPalindrome(int x) {
		if(x<0){
			return false;
		}
		if(x>=0&&x<10){
			return true;
		}
		int num = x;
		int length;
		for(length = 0;num!=0;length++){
			num = num/10;
		}
		int l = length;
		int num1 = x;
		int num2 = x;
		int head,tail;
		int midnum;
		for(int i = 0; length>(l/2);){
			midnum = num1 / pow(10,length-1);
			head = midnum % 10 ;			
			tail = num2 % 10;
//			cout<<head<<" "<<tail<<endl;
			if(head != tail){
				return false;
			}
			else{
				length--;
				num2 = num2/10;
				i++;
			}
		}
	return true;
	}
};