#include<stdio.h>
//int main()
//{
//	int jiecheng = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	jiecheng = n;
//	for (i = 1; i <= n; i++)
//	{				
//		
//		jiecheng=jiecheng*(jiecheng-i)
//	}
//	printf("%d", jiecheng);
//	return 0;
//}









//int main()
//{
//	int j = 1;
//	int i = 1;
//	int a = 0;
//	int b = 1;
//	int jiecheng= 0;
//	int xiangshuhe = 1;
//	int xiangshu = 1;
//	scanf("%d", &a);
//
//	for (j = 1; j <= a; j++)
//	{
//		for (i = 1; i <= b; i++)
//		{
//			xiangshu = (jiecheng *= i);
//		}
//		xiangshuhe += xiangshu;
//		b++;
//		
//	}printf("%d", xiangshuhe);
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
//int main()//                �׳����
//{
//	int i = 1;
//	int j = 1;
//	int n = 0;
//	int chengji = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		for (i = 1; i<=n; i++)
//		{
//			chengji = chengji * i;
//		}
//		sum = sum + chengji;
//	}
//	printf("%d", sum);
//	return 0;
//}
#include<string.h>
int main()
{
	char �˺� = 0;
	char ����[5] = {  };
	int i = 0;
	printf("�������˺ţ�\n");
	scanf("%s", &�˺�);
	printf("���������룺\n");
	scanf("%s", ����);
	for (i = 0; i < 3; i++)
	{		

		if (strcmp(����, "12345") == 0)
		{
			break;
			printf("��¼�ɹ�\n");		
		}
		else
		{
			printf("��������������\n");
			scanf("%s", ����);			
		}

	}			
		if (i ==3)
		{
			printf("sb");
		}
	return 0;
}
