#include <stdio.h>

int ADD(int x ,int y)
{
	return x+y;
}
int SUB(int x, int y)
{
	return x - y;
}
int MUL(int x, int y)
{
	return x * y;
}
int calc(int x, int(*pf)(), int y)
{	
	/*scanf("%d%p%d", &x, &y);*/
	return pf(x, y);
}
int main()
{
	int(*pfarr[4])(int, int) = { 0,ADD,SUB,MUL };//转移表
	int input = 0;
	int a=0, b=0;
	int ret=0;
	scanf("%d", &input);
	if (input >= 1&&input<=4)
	{
		scanf("%d%d", &a, &b);
		ret = pfarr[1](a, b);
		printf("%d", ret);
	}
	return 0; 
}
//冒泡排序 只能排序整形数据
