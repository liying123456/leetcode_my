using namespace std;
//#include <stdio.h>

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p = new ListNode(0);
		ListNode* result = p;

		
		int remainder = 0;
		while(l1!=NULL||l2!=NULL){
			int val1 = 0;
			if(l1!=NULL){
				val1 = l1->val;
				l1 = l1->next;
			}
			int val2 = 0;
			if(l2!=NULL){
				val2 = l2->val;
				l2 = l2->next;
			}
			
			result->next = new ListNode((val1+val2+remainder)%10);
			remainder = (val1+val2+remainder)/10;
			result = result->next;
		}
		if(remainder!=0){
			result->next = new ListNode(remainder);
		}
		return p->next;
		
    }
};