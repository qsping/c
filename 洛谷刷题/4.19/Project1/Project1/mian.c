
//int main()
//{
//	int smoke=0;
//	int count=0;
//	int smokedown=0;
//	int i = 0;
//	int k = 0;
//	while (scanf("%d%d", &smoke, &k) == 2)
//	{
//		for (i = 0; i < smoke; i++)
//		{
//			count++;
//			smokedown++;
//			if (smokedown==k)
//			{
//				smokedown = 1;
//				count++;
//			}
//		}
//		printf("%d", count);		
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int Num = 10000;
	int temp = 0;
	unsigned int k = 0;
	int flag = 0;
	begin:
	while (scanf("%d", &k) == 1)
	{
		if (k > 1000) goto begin;
		for (Num = 10000; Num <= 30000; Num++)
		{
			temp = Num;
			if ((temp / 100 % k == 0) && (((temp / 10) % 1000) % k == 0) && ((temp % 1000) % k == 0))
			{
				printf("%d\n",temp);
				flag = 1;
			}			
		}
		if (flag == 0)printf("No");
	}
	return 0;
}