//输入一个偶数 NN，验证 4\sim N4∼N 所有偶数是否符合哥德巴赫猜想：
//任一大于 22 的偶数都可写成两个质数之和。如果一个数不止一种分法，
//则输出第一个加数相比其他分法最小的方案。
//例如 1010，10 = 3 + 7 = 5 + 510 = 3 + 7 = 5 + 5，则 10 = 5 + 510 = 5 + 5 是错误答案。
#include <stdio.h>
int main()
{
	int NUM = 0;
	int i = 0,j=0;
	int count = 0;
	int sushu[10000] = { 0 };
	for (i = 2; i < 10000; i++) 
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
			{
				break;
			}	
			if (i = NUM)
			{
				sushu[count] = i;
				count++;
			}
		}
	}	

	while (scanf("%d", &NUM))
	{
		
		for (i = 0; i < (NUM / 2 - 1); i++)
		{
			printf("%d=%d+%d",2*i+4,);
		}
	}
	return 0;
}