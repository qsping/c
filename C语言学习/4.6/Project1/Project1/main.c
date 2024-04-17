#include<stdio.h>
#include<time.h>

//int main()
//{
//	int i = 0;
//	char ARR[5] ="1234";
//	for(i=0;i<5;i++)
//	printf("%p\n", &ARR[i]);
//
//	return 0;
//} 
//
//
////int main() {
////	printf("Size of char: %zu bytes\n", sizeof(float));
////	return 0;
////}

//int main()
//{
//	int* p;
//	int a = 0;
//	p = &a;
//	printf("%p\n", p);
//	printf("%d\n", *p);
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int* p = (char*)&a;//对地址进行转换存放到指针p 
//	if (*p)printf("xiaoduan");
//	else printf("daduan");
//	return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";
//	printf("%s\n", p);
//	return 0;
//}

int main()
{
	int a = 1, * p = &a;
	while (1)
	{
		*p++;
	}
	return 0;
}