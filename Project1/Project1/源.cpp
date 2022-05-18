#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <math.h>














//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入a，b的值：");
//	scanf_s("%d%d", &a,&b);
//	Swap(&a, &b);
//	printf("a=%d,  b=%d", a, b);
//	return 0;
//
//}












//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		
//	}
//	printf("%d ", count);
//	
//	return 0;
//}











//素数求解的n中境界
//sqrt-开平方的数学库函数

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100;i <=200;i++)
//	{
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d\n" , i);
//		}
//	}
//	
//	return 0;
//}










//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{ 
//			printf(" %d ", year);
//			count++;
//		}
//	}
//	printf("sum= %d", count);
//	return 0;
//}
//













//int main()
//{
//	int m = 2;
//	int n = 3;
//	int r = 5;
//	scanf_s("%d%d", &m, &n);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//
//	}
//	printf("%d\n", n);
//	return 0;
//}
//
//












//
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf_s("%s", password);  //输入密码存放在password中
//	//缓冲区还剩余一个\n
//	//读取一下\n
//	
//	printf("请确认（Y/N）:>");
//	while((ch=getchar())!='\n')
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	  {
//		printf("放弃确认\n");
//
//	  }
//	return 0;
//}
//
//





//
//int main()
//{ 
//	int ch = 0;
//	// CTRL +Z 结束输出程序
//	//EOF - end of file --》 -1  文件结束标志
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//
//	//int ch = getchar( ); //输入 
//	//putchar(ch);   //输出
//	//printf("%c\n", ch); 
//
//	return 0;
//}






//int main()
//{ 
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 6)
//		  break;
//		//if (i == 7)
//		//  continue;  /*继续回到了while的循环初始*/
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}
//









//
//int main()
//{
//	int day = 0;
//	int n = 12;
//	 scanf_s("%d", &day);
//	  switch (day)
//	{
//	   case 1:
//		  printf("工作日\n");
//		  break;
//	   case 2:
//          printf("休息日\n");
//		  break;
//	   default:
//		   printf("输入错误\n");
//		   break;
//
//	}
//	return 0;
//}














//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(pc)); 指针大小
//	
//	return 0;
//}








//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//
//
//
//}








//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a); /*取出a 的地址*/
//	printf("%p\n", p);
//	*p = 20;
//		printf("a= %d\n", a);
//	/*printf("%p\n", &a );*/
//      return 0;
//}

//有一种变量是用来存放地址的--指针变量 
//&a; 取地址
//申请四个字节
//p 的类型是int*  p存放a 的地址
//*p   *就表示解引用操作符

//int a =10  创建一个空间 取名为a a有地址为0*0012ff40 a 的值为10
//int * p = &a   取出a的地址0*0012ff40 存放到p变量的空间内
//*p = 20        ？     
//指针是个变量 用来存放地址 怎么用？ 解引用
//%p 以地址的形式打印
//
















//static 修饰局部变量
// 局部变量的生命周期变长 循环
// static 修饰全局变量
// 改变了变量的作用域  只能在源文件内部使用 
// static 修饰函数
// 不仅改变函数作用域 也改变了函数的链接属性
// 外部链接属性 --》内部链接属性
// 
// 
//ertern 声明外部符号的 可以从其他文件借用函数或变量等
//

//#define Max = 100
//int Max(int x, int y)
//{
//	if (x > y);
//	return x;
//	else
//		return y;
//
//}
//int main()
//{
//
//
//
//
//}











//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{ 
//	int a = 10;
//		int b = 20;
//		int sum = Add(a, b);
//		printf("sum = %d\n", sum);
//		return 0;
//
//}



//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//
//	}
//	return 0;
//}