#include<stdio.h>
//int Jump(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return Jump(n - 1) + Jump(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Jump(n);
//	printf("%d", ret);
//	return 0;
//}







 //²âÊÔgetchar
//
//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	char b=getchar(a);
//	printf("%c", b);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	
//	int i = 0;
//	int k = 1;
//	for (i = 10000; i <=99999; i++)
//	{	
//		int a = 0;
//		for (k=1;k < 10000;)
//		{
//			k *= 10;
//			n = (i / k) *( i % k);
//			a += n;		
//		}
//			if (a == i)
//			{
//				printf("%d  ", a);
//			}
//	}		
//	return 0;
//}

int main()
{
	int arr[5] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*p++ = 5;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	
	return 0;
}