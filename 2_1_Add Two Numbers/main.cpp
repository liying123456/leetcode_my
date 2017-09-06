#include <iostream>
using namespace std;
#include "solution.h"

int main(){
	ListNode* p = new ListNode(1);
	ListNode* l1 = p;
	l1->next= new ListNode(2);
	l1 = l1->next;
	l1->next= new ListNode(3);

	ListNode* q = new ListNode(2);
	ListNode* l2 = q;
	l2->next = new ListNode(3);
	l2 = l2->next;
	l2->next = new ListNode(4);

	Solution s;
	ListNode* result = s.addTwoNumbers(p,q);
	while(result!=NULL){
		cout<<result->val;
		result = result->next;
	}
	return 0;
}