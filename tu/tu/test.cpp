#include<iostream>
using namespace std;

#include "unionfindset.h"

int main()
{

	string a[] = { "����" , "�" , "����" ,"����" };
	UnionFindSet<string> ufs(a, 4);  //����ʵ�ʵĶ�ӳ��ϵ

	return 0;
}