#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
//struct Stu
//{
//	char name[10];
//	short age;
//	char tele;
//	char sex[5];
//}s1, s2, s3;   //全局变量 分号不能丢
//
//typedef struct Stu
//{
//	char name[10];
//	short age;
//	char tele;
//	char sex[5];
//}Stu;
//
//int main()
//
//{
//  
//}
// 
// 
// 
// 
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;   //'\0'
//
//}


//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//
//		{
//			;
//		}
//		/**dest = *src;*/   //'\0'
//	}
//}
#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest!=NULL);
//	assert(src != NULL);//断言 报错
//		while (*dest++ = *src++)
//		{
//			;
//		}
//		return ret;
//		/**dest = *src;*/   //'\0'
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", my_strcpy(arr1,arr2));
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0;i < 1000;i++)
//	{
//		a[i] = -1 - i;
//		/*printf("%d ", a[i]);*/
//	}
//	printf("%d ", strlen(a));
//	return 0;
//}
//
//int main()
//{
//	int arr[1000000];
//	int i;
//	int a;
//	printf("请输入：");
//	for(i=0; i<1000000;i++ )
//	{
//		scanf_s("%d\n ",&a);
//	    arr[i] = a;
//		if (arr[i]==-1);
//		{ 
//			break;
//		}
//
//	}
//	return 0;
//}

//int main()
//{
//    int ret = printf("Hello world!");
//    printf("\n");
//    printf("%d\n", ret);
//    return 0;
//
//
//
//}

//int main()
//{
//	int a, b, c;
//	scanf_s(" %d %d %d", &a, &b, &c);
//	/*int arr[] = { a,b,c };
//	int x = arr[0];
//	int i;
//	for (i = 0;i < 3;i++)
//	{ 
//		if (arr[i] > x)
//		{
//			x = arr[i];
//				printf("%d ",x);
//		}
//	}*/
//
//	/*if (a > b)
//	{
//		if (a > c)
//		{ 
//			if (b > c)
//			{
//				printf("%d %d %d ", a, b, c);
//			}
//			else
//			{
//				printf("%d %d %d ", a, c, b);
//			}
//		}
//		else
//		{
//			printf("%d %d %d ", c, a, b);
//		}
//	}*/
//	int x = 0;
//	if (a < b)
//	{
//		x = a;
//		a = b;
//		b = x;
//	}
//	if (b < c)
//	{
//		x = b;
//		b = c;
//		c = x;
//
//	}
//	printf("%d %d %d ", a, b, c);
//	return 0;
//
//}

//int main()
//{
//	int a, b, i;
//	for (i = 1;i <= 100;i++)
//	{
//		a = i * 3;
//		if (a>100)
//		{
//			break;
//		}
//		printf("%d ", a);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, i, m, n,tmp;
//	int max = 1;
//	scanf_s("%d %d", &a, &b);
//	if (b > a)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	c = a % b;
//	if (c == 0)
//		printf("%d ", b);
//	else
//	{
//		for (i = 1;i < b;i++)
//		{
//			n = a % i;
//			m = b % i;
//			if (m && n == 0)
//				max = i;
//		}
//		printf("%d ", max);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i=0;
//	for (i = 1000;i <= 2000;i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//
//	return 0;
//
//}

//int main()
//{
//	int a, b, i;
//
//	for (i = 100;i <= 200;i++)
//	{
//		for (a = 2;a < i;a++)
//		{
//			b = i % a;
//			if (b == 0)
//			
//				break;
//			
//		}
//		if (a == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i;
//	int b = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			b++;
//			if (i / 9 == 1)
//			{
//				b++;
//			}
//		}
//		
//	}
//	printf("%d ", b);
//	return 0;
//}


//int main()
//{
//	int a, b;
//	double  m = 0.0;
//	double  n = 1.0;
//	double  z = 0.0;
//	for (a = 1;a <= 100;a++)
//	{
//		
//		m = m + (n) *1.0 / a;
//		n = -n;
//
//	}
//	
//	printf("%f ", m);
//		return 0;
//}
//

//int main()
//{
//	int arr[] = { 20,26,3,64,963,16,310,164,612,32 ,167};
//	int i = 0;
//	int max = arr[0];
//	for (i = 1;i <= 9;i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d ", max);
//	return 0;
//
//}

//
//int main()
//{
//    int i, j, z;
//    for (i = 1; i < 10;i++)
//    {
//        for (j = 1;j <= i;j++)
//        {
//            z = i * j;
//            printf("%d*%d=%d ", i, j, z);
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//
//
//}
//
//void menu()
//{
//	int input = 0;
//	printf("输入1或者0");
//}
//void game()
//{
//	int guess = 0;
//	printf("输入数字:");
//	int ret = rand() % 100 + 1;
//	do
//	{
//		scanf_s("%d ", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	} while ( guess != ret);
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//			scanf_s("%d ", &input);
//		if (input == 1)
//		{
//			game();
//
//		}
//		else if (input == 0)
//		{
//			break;
//		}
//		else
//		{
//			break;
//		}
//
//	} while (input );
//	return 0;
//
//
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	scanf_s("%d", &i);
//	int ret = 0;
//    int left = 0;
//    int right = sz - 1;
//    while (left <= right)
//       {
//	     int mid = (left + right) / 2;
//	     if (arr[mid] == i)
//	      {
//		    printf("mid= %d", mid);
//		      break;
//	       }
//	      else if (arr[mid] > i)
//	       {
//		     right = mid - 1;
//	       }
//	      else
//	         {
//		    left = mid + 1;
//	          }
//	     }
//	if (left > right)
//	{
//		printf("失败");
//	}
//	return 0;
//}


//int change(int *x, int *y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//	return *x;
//	return *y;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 60;
//	int ret =change( &a ,& b);
//	printf("%d %d ", a,b );
//	return 0;
//
//}

//int Add(int *i, int *j)
//{
//	int a, b,z;
//	for (a = 1;a <= *i;a++)
//	{
//		for (b = 1;b <= a;b++)
//		{
//			z = a * b;
//			printf("%d*%d=%d ", a, b, z);
//		}
//		printf("\n");
//	}
//	return z;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("输入值；");
//	scanf_s("%d", &i);
//	j = i;
//	int ret = Add(&i, &j);
//	
//	return 0;
//}

//int Add(int  *a)
//{
//    int b = 0;
//    for (b = 2;b < *a;b++)
//    {
//        if (*a % b == 0)
//        {
//            printf("不是素数");
//            break;
//        }
//    }
//    if (b == *a)
//    {
//        printf("%d是素数", *a);
//    }
//    return *a;
//}
//int main()
//{
//    int a = 0;
//    printf("输入：");
//    scanf_s("%d", &a);
//    int ret = Add(&a);
//    return 0;
////}
//int Add(int* a)
//{
//    if (*a % 4 == 0 && *a % 100 != 0 || *a % 400 == 0)
//    {
//        printf("%d是闰年", *a);
//    }
//    else
//    {
//        printf("不是");
//    }
//    return *a;
//}
//int main()
//{
//    int a = 0;
//    printf("输入：");
//    scanf_s("%d", &a);
//    int ret = Add(&a);
//    return 0;
//}

//void Add(int a)
//{
//	if (a>9 )
//	{
//		Add( a / 10);
//	}
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	Add(a);
//}

//int main()
//{
//	int a = 0;
//	a = 1 % 10;
//	printf("%d", a);
//	return 0;
//}
// 
// 
//int  print(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * print(n - 1);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	print(n);
//	int ret = print(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int Strlen(char* ch)
//{
//	if (*ch != '\0')
//	{
//		return 1 + Strlen(ch + 1);
//	}
//	return 0;
//}
//
//int main()
//{
//	char ch[] = "dasdadfasf";
//	int result = Strlen(ch);
//	printf("长度是%d", result);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while(left < right)
//	{
//		char tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//
//int  Add(int a)
//{
//	if (a > 9)
//	{
//		return Add(a / 10) + a % 10;
//	}
//	else
//	{
//		return a;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int ret = Add(a);
//	printf("%d", ret);
//		return 0;
//}
//int Add(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		n = n * Add(n, k - 1);
//	}
//	return n;
//}
//
//int main()
//{
//	int n, k;
//	scanf_s("%d%d", &n, &k);
//	int ret = Add(n, k);
//	printf("%d", ret);
//	return 0;
//
//}
// 
// 
// 
//int fib(int n)
//{
//	if (n <= 1)
//	{
//		return n;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//
//int main()
//{
//	int n =0 ;
//	scanf_s("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3 };
//	int arr1[] = { 4,5,6 };
//	int i, j;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr1[i];
//		arr1[i] = tmp;
//		printf("%d", arr[i]);
//		printf("%d",  arr1[i]);
//		printf("\n");
//	}
//	return 0;
//}
//int reverse(int arr1[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left<right)
//	{
//		int tmp = arr1[left];
//		arr1[left] = arr1[right];
//		arr1[right] = tmp;
//		left++;
//		right--;
//	}
//	return 1;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int arr1[] = {1,2 ,3,4,5,6,7,8,9 ,10};
//	int ret = reverse(arr1,sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}




//int test(int arr[],int sz)
//{
//	int i, j;
//	for (i = 0;i < sz;i++)
//	{
//		for (j = 0;j < sz-1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a;
//	test(arr,sz);
//	for (a = 0;a < sz;a++)
//			{
//			printf("%d ", arr[a]);
//			}
//	return 0;
//}



