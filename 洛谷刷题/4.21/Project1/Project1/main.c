#include <stdio.h>
#include <stdlib.h>  
#include <string.h> 
#include <math.h>  
//int main()
//{
//	int n = 0;
//	double a = 0;
//	int t = 0;
//	int i = 0;
//	int j = 0;
//	int light = 0;
//	int count = 0;
//	scanf("%d", &n);
//	printf('\n');
//	for (i = 0; i < n; i++)
//	{
//		scanf("%.6f", &a);
//		scanf("%d", &t);
//		int* p = (char*)malloc((int)(a * t));
//		if (p == NULL) {  // 检查内存是否成功分配  
//			printf("Memory allocation failed!\n");
//			return 1;
//		memset = (p, 0, sizeof((int)(a * t)));
//		for (j = 0; j < t; j++)
//		{
//			*(p + floor(a * (j + 1))) = 1;
//		}
//	}
//
//	return 0;
//}
int two()
int main()
{
	int a=0, b = 0;
	int i = 0, count = 0;
	scanf("%d", a);
	scanf("%d", b);
	for (i = a; i <= b; i++)
	{
		count=two(i);
	}
	return 0;
}