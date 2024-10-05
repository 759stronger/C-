#include<iostream>
using namespace std;

#include "unionfindset.h"

int main()
{

	string a[] = { "张三" , "李艾" , "王五" ,"赵六" };
	UnionFindSet<string> ufs(a, 4);  //建立实际的对映关系

	return 0;
}