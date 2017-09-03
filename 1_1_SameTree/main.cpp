#include <iostream>
#include "solution.h"
using namespace std;
int main(){
	TreeNode root1(1);
	TreeNode root2(1);
	TreeNode t2(2);
	TreeNode t3(3);
	TreeNode t4(4);
	TreeNode t5(5);

	root1.left = &t2;
	root1.right= &t3;
	root2.left = &t2;
	root2.right = &t3;
	t2.left = &t4;
	t2.right = &t5;

	Solution s;
	cout<<s.isSameTree(&root1,&root2)<<endl;
	return 0;
}

