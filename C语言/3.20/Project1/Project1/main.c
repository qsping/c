#include<stdio.h>
//int main()
//{
//	unsigned int a = 5;
//	unsigned int b = 7;
//	unsigned int c ;
//	printf("%d", (a++) + b);
//	printf("%d", a);
//	return 0;
//}
//struct point
//{
//	int yuwen;
//	int shuxue;
//};
//int main()
//{
//	struct point li = { 100,100 };
//	printf("%d,%d", li.yuwen, li.shuxue);
//	return 0;
//}




//统计二进制中1的个数
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	while ( 1)
//	{			
//		if (a % 2 == 1)
//			count++;
//		a = a / 2;
//		if (a == 1)
//		{
//			count++;
//			break;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//n&(n-1)





//判断两个二进制数中有多少位不相同
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d", &m);
//	scanf("%d", &n);
//	int count = 0;
//	int i = 0;
//	while (i<=32)
//	{
//		if (((m>>i)&1) ^((( n>>i)&1) == 1))
//		{
//			count++;
//		}
//		i++;
//	}
//	printf("%d", count);
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d", &m);
//	scanf("%d", &n);
//	int ret = m^n;
//	int count = 0;;
//	while (ret != 0)
//	{
//		ret &=  (ret - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//打印一个二进制数的奇数位和偶数位
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);	
//	int i = 0;
//	int count1 = 0;
//	int count2 = 0;
//	while (a)
//	{
//		a = a >> 1;
//		if (a & 1 == 1)
//		{
//			count1++;
//		}
//		else 
//		{
//			count2++;
//		}
//		i++;
//	}
//	i = 0;
//	for (i = 0; i < count1; i++)
//		printf("1");
//	printf("\n");
//	for (i = 0; i < count2; i++)
//		printf("0");
//	return 0;
//}






//打印x图形

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == j)printf("*");
//			else if (i + j==(n-1))printf("*");
//			else printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
