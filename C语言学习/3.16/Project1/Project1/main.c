#include<stdio.h>//#include<stdio.h>//阶乘递归算法找公式
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





////求第n个斐波那契数//效率极低            第一种放方法
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






////汉诺
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

////从大到小输出//错误！！1与2比，2与3比，3与4比无法得出排序
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





//void main()////////网上找为数组赋值的案例
//{
//	int a[10];
//	int i, j, max, pos;
//	printf("为数组元素赋值：\n");
//	/*从键盘为数组元素赋值（成绩）*/
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
//	printf("请输入两个数字：");
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

//int main()//计算1-100间数字9的个数
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


////打印乘法口诀表
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


//打印乘法口诀表 行数和列数自己指定
//int main()
//{
//	int i, j;
//	int n = 1;
//	int mul = 0;
//	int a, b;
//	printf("请输入行");
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
	printf("输入‘我是猪’取消关机：\n");
	
	while (1)
	{
		scanf("%s", input);
		if (strcmp(input, "我是猪")==0)
		{
			printf("你是猪");
			system("shutdown -a");
			break;
		}
		else
		{
			printf("狗日的重新输入\n");
		}
	}
	return 0;
}

