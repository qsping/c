
//int main()
//{
//	char sel=0;
//	int Num = 0;
//	int Rnum = 20;
//
//	while (1)
//	{	
//		printf("菜单\n");
//		printf("开始or结束（YorN）\n");
//		scanf("%s", &sel);
//		if (sel == 'Y')
//		{
//			do
//			{
//
//				printf("请输入数字\n");
//				scanf("%d", &Num);
//				if (Rnum < Num)
//				{
//					printf("大了");
//					continue;
//				}
//				else if (Rnum > Num)
//				{
//					printf("小了");
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
//			printf("输入错误");
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
//	printf("输入‘我是猪’取消关机：\n");
//	
//	while (1)
//	{
//		scanf("%s", input);
//		if (strcmp(input, "我是猪")==0)
//		{
//			printf("你是猪");
//			system("shutdown -a");
//			break;
//		}
//		else
//		{
//			printf("狗日的重新输入\n");
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




