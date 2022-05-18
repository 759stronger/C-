#include <stdio.h>
#define _ CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <math.h>

//int main()
//{
//	int arr[] = { 1,2.3,4.5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//
//	}
//	return 0;
//
//}
int main()
{
	int m = 2233;
	int n ,a ,b ,c ,d ,q= 0;
	scanf_s("%d ", &m);
	d = m % 10;
	d = (d+ 5) % 10;
	a = (m / 1000) % 10;
	a = (a+ 5) % 10;
	b= (m / 100) % 10;
      b=  (b+ 5) % 10;
	  c = (m / 10) % 10;
	  c = (c + 5) % 10;
	  n = a;
	  a = d;
	  d = n;
	  q = c;
	  c = b;
	  b = q;
	  m = a * 1000 + b * 100 + c * 10 + d;

	printf("%d ", m);
	return 0;
}