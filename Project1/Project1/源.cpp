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
//	printf("������a��b��ֵ��");
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











//��������n�о���
//sqrt-��ƽ������ѧ�⺯��

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
//	printf("����������:>");
//	scanf_s("%s", password);  //������������password��
//	//��������ʣ��һ��\n
//	//��ȡһ��\n
//	
//	printf("��ȷ�ϣ�Y/N��:>");
//	while((ch=getchar())!='\n')
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	  {
//		printf("����ȷ��\n");
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
//	// CTRL +Z �����������
//	//EOF - end of file --�� -1  �ļ�������־
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//
//	//int ch = getchar( ); //���� 
//	//putchar(ch);   //���
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
//		//  continue;  /*�����ص���while��ѭ����ʼ*/
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
//		  printf("������\n");
//		  break;
//	   case 2:
//          printf("��Ϣ��\n");
//		  break;
//	   default:
//		   printf("�������\n");
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
//	printf("%d\n", sizeof(pc)); ָ���С
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
//	printf("%p\n", &a); /*ȡ��a �ĵ�ַ*/
//	printf("%p\n", p);
//	*p = 20;
//		printf("a= %d\n", a);
//	/*printf("%p\n", &a );*/
//      return 0;
//}

//��һ�ֱ�����������ŵ�ַ��--ָ����� 
//&a; ȡ��ַ
//�����ĸ��ֽ�
//p ��������int*  p���a �ĵ�ַ
//*p   *�ͱ�ʾ�����ò�����

//int a =10  ����һ���ռ� ȡ��Ϊa a�е�ַΪ0*0012ff40 a ��ֵΪ10
//int * p = &a   ȡ��a�ĵ�ַ0*0012ff40 ��ŵ�p�����Ŀռ���
//*p = 20        ��     
//ָ���Ǹ����� ������ŵ�ַ ��ô�ã� ������
//%p �Ե�ַ����ʽ��ӡ
//
















//static ���ξֲ�����
// �ֲ��������������ڱ䳤 ѭ��
// static ����ȫ�ֱ���
// �ı��˱�����������  ֻ����Դ�ļ��ڲ�ʹ�� 
// static ���κ���
// �����ı亯�������� Ҳ�ı��˺�������������
// �ⲿ�������� --���ڲ���������
// 
// 
//ertern �����ⲿ���ŵ� ���Դ������ļ����ú����������
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