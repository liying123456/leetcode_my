using namespace std;
#include<math.h>
class Solution {
	//�ж������ǲ��ǻ���
	//��תΪ�ַ���������Ҫ����Ŀռ�
	//�����÷�ת���֣��п��ܻ����
	//����chai��ǰһ���������һ�����������ȵ�0�����⡣01ϵͳ��Ϊ1.
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