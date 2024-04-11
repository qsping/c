#include<stdio.h>
//int main()
//{
//	int arr[] = { 73,33,99 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//单个字符串的长度
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}








//int main()
//{
//	int arr;
//	scanf("%d", &arr);
//	if(((arr|0x11110000)>=1990)&&( (arr | 0x11110000) <= 2015))
//	{printf }
//
//	return 0;
//}









//int main()
//{
//	int year = 0;
//	int mouth = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &mouth,& date);并列输入
//	if (year >= 1990 && year <= 2015)
//	{
//		printf("%0d", year);
//	}
//	return 0;
//}










//int max(int i)||
//{
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > arr[0])
//		{
//			max() = arr[i];
//		}
//	}
//	return max;
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
// 
// 
// 
// 
// 
//int main()数字组比大小，先取出第一个然后去第二个跟第一个作比较再赋值给max
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);循环四次
//		i++;
//	}
//	int max = arr[0];先把第一个赋值给MAX
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max= arr[i];
//		}
//		i++;
//	}	
//	printf("%d\n", max);
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
//int main()                直接定义整型变量，不用读取输入的内容
//{
//	int max = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &max);
//	while (i < 3)
//	{
//		scanf("%d", &n);
//		if (n > max)
//			max = n;
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}
//








int main()
//{
//	double pai = 3.1415926;
//	double r = 0.0;	
//	scanf("%lf", &r);
//	double v = 4/3.0*pai*r*r*r;
//	printf("%.3lf", v);	
//	return 0;
//}








//int main()
//{
//	int kg = 0;
//	int cm = 0;	
//	scanf("%d %d", &kg ,& cm);
//	double BMI = kg / 1.0/cm;
//	printf("%.2lf", BMI);
//
//	return 0;
//}


int main()
{
	int i = 0;
	do
	{ 
		printf("  %d", i);
			i++;
	}
		
	while (i < 10);
	return 0;
}




