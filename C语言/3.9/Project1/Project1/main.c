
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 3;		
//	if (a && b)
//	{	
//		printf("3");
//	}
//
//	return 0;
//}
//int main()
//{
//	int a =0 ;
//	
//	while (a <= 10)
//	{
//		int b = a++;//a=1,b=0/
//		printf("Num=%d\n",b);
//		a++;
//	}
//	return 0;  
//}
//#define NUM 100
//int main()
//{
//	char a[] = "abc";
//	printf(a);
//	return 0;
//}
//#define add(x,y)   ((x)+(y))
//int main()
//{
//	int c= 1;
//	//int b = 2;
//	//int c = add(a, b);
//	printf("%d",c);
//
//	return 0;
//}
int main()
{
	int a = 10;
	int* p = &a;
	*p = 29;
	printf("%d", a);

	return 0;
}