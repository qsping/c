#include <stdio.h>
int main()
{
	int i = 0;
	int temp[7] = {1,0,0,0,0,0,0};
	int time1, time2;
	int count = 0;
	int count1 = 0;
	//for (i = 0;i < 7; )
	//{		
	//	scanf("%d%d", &time1, &time2);
	//	if ((time1 < 10) && (time2 < 10))
	//	{
	//		if ((time1 + time2) > 8) temp[i] = i + 1;
	//		else temp[i] = 0;
	//		i++;			
	//	}
	//	else i = i-1;		
	//}
	for (i = 0; i < 7; i++)
	{
		if (temp[i])
		{
			count++;
			if(count==1)
			count1 = temp[i];
		}
	}
	if (count == 0)
	{
		printf("%d",0);
	}
	else if(count == 1)
	{
		printf("%d", temp[count1-1]);
	}
	else 
	{
		printf("%d",count1);
	}	 
	return 0;
}
//int main()
//{
//	int i = 0;
//	int jieyu=0;
//	int nojieyu = 0;
//	int temp = 0;
//	int cunqian = 0;
//	int money[12] = { 0};
//	for (i = 0; i < 12; i++)
//	{
//		scanf("%d", &money[i]);
//	}		
//	for (i = 0; i < 12; i++)
//	{
//		if ((jieyu + 300 - money[i]) < 0)
//		{
//			temp++;
//			if (temp < 2)
//				nojieyu = i + 1;
//		}
//		jieyu += (300 - money[i]);
//		if (jieyu >=100)
//		{
//			cunqian += (jieyu / 100) * 100;
//			jieyu = jieyu - (jieyu / 100) * 100;
//		}
//	}
//	if (nojieyu)printf("-%d", nojieyu);
//	else printf("%d", cunqian / 10 * 12+jieyu);
//	return 0;
//}