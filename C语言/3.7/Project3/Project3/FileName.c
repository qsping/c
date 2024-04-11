#include<stdio.h>
int main()
{
	int input = 0;
	printf("sleep\n");
	printf("eat\n");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("ok\n");
	}
	else 
	{
		printf("no\n");
	}
	return 0;
}