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


//��д��������������ʱ���� ���ַ�������
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
	scanf("%s", &char1);//�ַ������ݲ������ݵ�һ���ַ����׵�ַ
	int len=len_char(char1);
	printf("%d",len);
	return 0;
}











//#include<string.h>//���β���
//int main()
//{
//	char a= "abcd";
//	printf("%d", strlen("abcd"));
//	return 0;
//}