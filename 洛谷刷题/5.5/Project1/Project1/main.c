#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[1000] = "/0";
//	gets(arr);
//	int i = 0;
//	int countb = 0;
//	int countg = 0;
//	for (i = 0; i < sizeof(arr); i++)
//	{
//		switch (arr[i])
//		{
//			case 'y':
//				countb+=1; 
//				break;
//			case 'o':
//				countb+=1; 
//				if (arr[i + 1] == 'y')
//				{
//					i++;				
//				}		
//				break;			
//			case 'b':
//				countb +=1;
//				if ((arr[i + 1] == 'o')&&(arr[i + 2] != 'y'))
//				{
//					i++;
//				}
//				if ((arr[i + 1] == 'o') && (arr[i + 2] == 'y'))
//				{
//					i+=2;
//				}
//				break;
//				//girl
//			case 'l':
//				countg += 1;
//				break;
//			case 'r':
//				countg += 1;
//				if (arr[i + 1] == 'l')
//				{
//					i++;
//				}
//				break;
//			case 'i':
//				countg += 1;
//				if ((arr[i + 1] = 'r') && (arr[i + 2] != 'l'))
//				{
//					i++;
//				}
//				if ((arr[i + 1] == 'r') && (arr[i + 2] == 'l'))
//				{
//					i += 2;
//				}
//				break;
//			case 'g':
//				countg += 1;
//				if ((arr[i + 1] == 'i') && (arr[i + 2] != 'r') && (arr[i + 3] != 'l'))
//				{
//					i++;
//				}
//				if ((arr[i + 1] == 'i') && (arr[i + 2] == 'r') && (arr[i + 3] != 'l'))
//				{
//					i += 2;
//				}
//				if ((arr[i + 1] == 'i') && (arr[i + 2] == 'r') && (arr[i + 3]== 'l'))
//				{
//					i += 3;
//				}
//				break;
//			}		
//	}
//	printf("%d\n", countb);
//	printf("%d\n", countg);
//	return 0;
//}
//在 DNF 中，赵神牛有一个缔造者，他一共有 k点法力值，一共有 m个技能，每个技能耗费的法力值为 a_i
//​可以造成的伤害为 b_i而 boss 的体力值为 n，请你求出它放哪个技能，才可以打死 boss。
//第一行有三个整数，分别表示 k, m, n
//后面 m 行，每行两个整数，第(i + 1)行的整数表示耗费的法力值 a_i​和造成的伤害 b_i​
//int main()
//{
//	int k = 0;
//	int m = 0;
//	long long a = 0;
//	long long b = 0;
//	int n = 0;
//	int i = 0;
//	int flag = 0;
//	int arr[100000] = {0};
//	scanf("%d", &k);
//	scanf("%d", &m);
//	scanf("%d", &n);
//	for (i = 1; i <= m; i++)
//	{
//		scanf("%d", &a);
//		scanf("%d", &b);
//		if(a!=0)
//			if (((k / a) * b) >= n)
//			{
//				flag = 1;
//				arr[i] = i;
//			}
//		if (a == 0 && b > 0)
//		{
//			arr[i] = i;
//		}
//	}	
//	if (flag == 0)
//		printf("-1");
//	for (i = 1; i <= m; i++)
//	{
//		if(arr[i]!=0) 
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//小 B 喜欢吃苹果。她今天吃掉了 xx 个苹果。
//英语课上学到了 apple 这个词语，想用它来造句。如果她吃了 1 个苹果，
//就输出 Today, I ate 1 apple.；如果她没有吃，那么就把 1 换成 0；
//如果她吃了不止一个苹果，别忘了 apple 这个单词后面要加上代表复数的 s。你能帮她完成这个句子吗？
//int main()
//{
//	int n = 0;	
//	scanf("%d", &n);
//	switch (n)
//	{
//		case 0:printf("Today, I ate 0 apple."); break;
//		case 1:printf("Today, I ate 1 apple."); break;
//
//	}
//	if(n>1)printf("Today, I ate %d apples.",n); 
//	return 0;
//}
//int main()
//{
//	int arr[4000] = { 0 };
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int flag = 0;
//	int* p = arr;
//	int ret = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n ; i++)
//	{
//		if (ret == n * n)break;
//		if (flag == 0)
//		{
//			scanf("%d", &j);
//			ret += j;
//			for (k = 0; k < j; k++)
//			{
//				*(p+m)= 0;
//				m++;
//			/*	p++;*/
//			}		
//			flag = 1;
//		}
//	  if (flag == 1)
//		{
//			scanf("%d", &j);
//			ret += j;
//			for (k=0; k < j; k++)
//			{
//				*(p+m) = 1;
//				m++;
//			}		
//			flag = 0;
//		}
//	}
//	for (i = 0; i < n*n; i++)
//	{
//		printf("%d", arr[i]);
//		if ((i+1)%n == 0)printf("\n");
//	}
//	return 0;
//}
int main()
{
	int n = 0;	
	int m = 0;	
	int ret = 0;	
	int flag = 0;
	int i = 0;	
	int arr[10000];
	int* p = arr;
	scanf("%d", &n);
	while (1 == scanf("%d", &m))
	{
		ret += m;
		if (flag == 0)
		{
			for (i = 0; i < m; i++)
			{
				*p++ = 0;
			}
			flag = 1;
		}
		else if (flag == 1)
		{
			for (i = 0; i < m; i++)
			{
				*p++ = 1;
			}
			flag = 0;
		}
		if (ret == n * n)break;
	}
		for (i = 0; i < n * n; i++)
		{
			printf("%d", arr[i]);
			if ((i + 1) % n == 0)printf("\n");
		}
	return 0;
}