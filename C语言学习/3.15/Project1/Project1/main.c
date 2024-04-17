#include<stdio.h>
//int main()
//{
//	unsigned int a = 0;
//	scanf("%u", &a);
//	while (1)
//	{
//		int b = getchar(a);
//		printf("%d", b);
//	};
//	
//	return 0;
//}


//编写函数不允许建立临时变量 求字符串长度
int len_char(char* x)
{
	if (*x != '\0')
	{
		return  1 + len_char(x+1);
	}
	else
		return 0;
}


int main()
{
	char char1[] = {0};
	scanf("%s", &char1);//字符串传递参数传递第一个字符的首地址
	int len=len_char(char1);
	printf("%d",len);
	return 0;
}











//#include<string.h>//传参测试
//int main()
//{
//	char a= "abcd";
//	printf("%d", strlen("abcd"));
//	return 0;
//}