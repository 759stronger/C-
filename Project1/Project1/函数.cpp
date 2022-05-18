#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <math.h>


//int is_prime(int n)
//{
//	
//	int a = 0;
//	for (a = 2;a < sqrt(n);a++)
//	{
//		if (n % a == 0)
//			/*break;*/
//		    return 0;
//			
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int is_prime(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("请输入年份：");
//		scanf_s(" %d", &year);
//	/*for (year = 1000;year <= 2000;year++)*/
//	{
//			if (is_prime(year) == 1)
//			{
//				printf("%d ", year);
//			}
//			else
//				printf("不是");
//	}
//		return 0;
//}

// 
// 
// 
//int binary_search(int arr[], int k,int sz)
//{
//	
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//
//	}
//	else
//	{
//		printf("晓表示：%d\n ", ret);
//	}
//	return 0;
//}


//int main()
//{
//	printf("%d ", 2);
//	return 0;
//}
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//
//}
//int main()
//{
//	int n;
//	printf("输入n：");
//	scanf_s("%d", &n);
//	int ret = 0;
//	ret = Fac(n);
//	printf("%d ", ret);
//	return 0;
//
//}
//


