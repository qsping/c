
//int main()
//{
//	char sel=0;
//	int Num = 0;
//	int Rnum = 20;
//
//	while (1)
//	{	
//		printf("�˵�\n");
//		printf("��ʼor������YorN��\n");
//		scanf("%s", &sel);
//		if (sel == 'Y')
//		{
//			do
//			{
//
//				printf("����������\n");
//				scanf("%d", &Num);
//				if (Rnum < Num)
//				{
//					printf("����");
//					continue;
//				}
//				else if (Rnum > Num)
//				{
//					printf("С��");
//					continue;
//				}
//				else
//				{
//					printf("ok");
//					break;
//				}
//
//			} while (sel == 'Y');
//		}
//		else if (sel == 'N')break;
//		else
//		{
//			printf("�������");
//		}
//	}
//	return 0;
//}











//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//int main()
//{
//	char input[] = {0};
//	system("shutdown -s -t 1000");
//	printf("���롮������ȡ���ػ���\n");
//	
//	while (1)
//	{
//		scanf("%s", input);
//		if (strcmp(input, "������")==0)
//		{
//			printf("������");
//			system("shutdown -a");
//			break;
//		}
//		else
//		{
//			printf("���յ���������\n");
//		}
//	}
//	return 0;
//}




#include<stdio.h>
#include <string.h>
int main()
{
	char arr[20] = { "hello"};
	memset(arr + 1, 'x', 2);
	printf(arr);
	return 0;
}




