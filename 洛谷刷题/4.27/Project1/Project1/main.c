#include<stdio.h>
int mod(int a, int b)
{
	return a % b;
}
int main()
{
	//char a = 'a';
	//int i = 0;
	//for (i = 0; i < 26; i++)
	//{
	//	
	//	printf("%c\n", a);
	//	a += 1;
	//}
	char a[100] = { 0 };
	char b[100] = { 0 };
	gets(a);
	gets(b);
	char* pa = a;
	char* pb = b;
	int tempa = 1;
	int tempb = 1;
	int counta = 0;
	int countb = 0;
	int i = 0;
	while (*(pa + i) != 0)
	{
		tempa *= *(pa + (i++));
	}
	counta=mod(tempa, 47);
	i = 0;
	while (*(pb + i) != 0)
	{
		tempb*= *(pb + (i++));
	}
	countb = mod(tempb, 47);
	//printf("%d", counta);
	//printf("%d",countb );

	if (counta == countb)printf("GO");
	else printf("STAY");
	return 0;
}