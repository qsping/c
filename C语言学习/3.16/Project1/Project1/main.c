#include<stdio.h>//#include<stdio.h>//�׳˵ݹ��㷨�ҹ�ʽ
//
//int fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x * fac(x - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	 int ret=fac(n);
//	 printf("ret=%d", ret);
//
//	return 0;
//}





////���n��쳲�������//Ч�ʼ���            ��һ�ַŷ���
//// 1 1 2 3 5 8 13 21 34 55
//
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("ret=%d", ret);
//
//	return 0;
//}
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >=3)
//	{
//		c = a + b;
//		a = b;
//		b = c;	
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("ret=%d", ret);
//	return 0;
//}






////��ŵ
//
//# include <stdio.h>
//int main(void)
//{
//       int a[5] = { 1, 2, 3, 4, 5 };
//       int b[5];
//       int i;
//       for (i = 0; i < 5; ++i)
//       {
//              b[i] = a[i];
//              printf("%d\n", b[i]);
//       }
//       return 0;
//}


#include<string.h>

////�Ӵ�С���//���󣡣�1��2�ȣ�2��3�ȣ�3��4���޷��ó�����
//int sort(int* arr, int n)
//{
//	if(n>0)
//	{	
//		int m = 0;		
//		if (arr[n] > arr[n - 1])
//		{
//			m= arr[n];
//			arr[n] = arr[n - 1];
//			arr[n - 1] = m;
//		}
//		return sort(arr, n - 1); 
//	}
//
//}
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	unsigned int n = sizeof(arr) / sizeof(arr[0]);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}	
//	//printf("%d\n", n);
//	int ret=sort(arr,(n-1));
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}





//void main()////////������Ϊ���鸳ֵ�İ���
//{
//	int a[10];
//	int i, j, max, pos;
//	printf("Ϊ����Ԫ�ظ�ֵ��\n");
//	/*�Ӽ���Ϊ����Ԫ�ظ�ֵ���ɼ���*/
//	for (i = 0; i < 10; i++)
//	{
//		printf("a[%d]=", i);
//		scanf("%d", &a[i]);
//	}
//	int n = sizeof(a) / sizeof(a[0]);
//	printf("%d", n);
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (0 == i % 3)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}





//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("�������������֣�");
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	while (min>0)
//	{
//		if(a%min==0 && b%min==0)
//		{ 
//			break;	 
//		}	
//		min--;
//	}
//	printf("%d",min);
//	return 0;
//}

//int main()//����1-100������9�ĸ���
//{
//	int i = 0;
//	for (; i <= 100; i++)
//	{
//		if (i %10== 9)printf("%d\n", i);
//		if (i /10==9)printf("%d\n", i);
//	}
//	return 0;
//}


//int main()                        //1 - 1 / 2 + 1 / 3 - 1 / 4.............. - 1 / 100;
//{
//	float sum1 = 0;
//	float sum2 = 0;
//	int i = 1;
//	for (i=1; i < 100; i +=2)
//	{
//		sum1 = sum1 + 1.0 / i;
//	}
//	for (i=2; i <=100; i +=2)
//	{
//		sum2 = sum2 - 1.0 / i;
//	}
//	float sum = sum1 + sum2;
//	printf("%5f", sum);
//	return 0;
//}


////��ӡ�˷��ھ���
//int main()
//{
//	int i, j;
//	int n = 1;
//	int mul = 0;
//	for (i = 1; i <=9; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			mul = i * j;
//			printf("%d*%d=%-2d\t\t", j, i, mul);
//			
//			
//		}
//		printf("\n");
//		n++;
//	}
//	return 0;
//}
//


//��ӡ�˷��ھ��� �����������Լ�ָ��
//int main()
//{
//	int i, j;
//	int n = 1;
//	int mul = 0;
//	int a, b;
//	printf("��������");
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			mul = i * j;
//			printf("%d*%d=%-2d\t", j, i, mul);
//			if (i == 1)break;
//
//		}
//		printf("\n");
//		n++;
//	}
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char input[] = {0};
	system("shutdown -s -t 1000");
	printf("���롮������ȡ���ػ���\n");
	
	while (1)
	{
		scanf("%s", input);
		if (strcmp(input, "������")==0)
		{
			printf("������");
			system("shutdown -a");
			break;
		}
		else
		{
			printf("���յ���������\n");
		}
	}
	return 0;
}

