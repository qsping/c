#include<stdio.h>
//void reverse(char*start,int length)
//{
//	int i = 0;
//	char temp=0;
//	for (i = 0; i <(length / 2); i++)
//	{
//		if (*start == '-')
//		{
//			start = start + 1;
//		}	
//		if (start <= start + length - 1 - i)
//		{
//			  temp=*(start+i);
//			*(start+i) = *(start + length-1 - i);
//			*(start + length-1- i) = temp;
//		}
//	}
//}
//int main()
//{
//	char str[100] = { 0 };
//	gets(str);
//	int length = strlen(str);
//	char* start = str; 
//	reverse(start,length);
//	printf("%s", str);
//	return 0;
//}
//int main()
//{
//	char a = 'a';
//	int b = (int)a;
//	printf("%d", b);
//	return 0;
//}
int main() {
	int result=0;
	int num = 0;
	while (1 == scanf("%d", &num))
	{
		if (num >= 0) {
			for (result = 0; num > 0; num /= 10)
			{
				result = result * 10 + num % 10;
			}
		}
		else {
			num = -num;
			for (result = 0; num > 0; num /= 10)
			{
				result = result * 10 + num % 10;
			}
			result = -result;
		}
		printf("%d", result);
	}
	return 0;
}