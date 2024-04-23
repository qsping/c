#include<stdio.h>
////void main()
////{
////	printf("hello");
////}
//int search(int x)
//{
//	int count = 0;
//	if (x > 9)
//	{
//		count+=search(x / 10);
//	}
//	if (x % 10 == 2)count++;
//	return count;
//}
//int main()
//{
//	int i = 0;
//	int a = 0, b = 0;
//	int count1 = 0;
//	scanf("%d%d", &a, &b);
//	for (i = a; i <= b; i++)
//	{
//		count1 += search(i);
//	}
//	printf("%d", count1);
//	return 0;
//}
//int count = 0;
//int fanzhuan(int n)
//{
//	int temp = 0;
//	int i = 0;
//	if (n == 0)return 0;
//	if (n > 9)
//	{
//		count++;
//		fanzhuan(n / 10);
//
//	}
//	if (n > 0 && n < 9) 
//	{
//		for (i = count; i > 0; i--)
//		{
//			n *= 10;
//		}
//		temp += n;
//		count--;		
//	}
//	return temp;
//}
//int main()
//{
//	//int a = 0;
//	int b = 0;
//	//scanf("%d", &a);
//	//b=fanzhuan(a);
//	printf("%d", b^10);
//	return 0;
//}
#include <stdio.h>  

int fanzhuan(int n)
{
    if (n == 0) {
        return 0; // 递归终止条件  
    }
   if(n>9) {
        return fanzhuan(n / 10)  + n * 10; // 先递归反转剩余部分，然后加上当前最低位  
    }
}

int main() {
    int a;
    scanf("%d", &a); // 读取输入整数  
    int b = fanzhuan(a); // 反转整数  
    printf("%d", b); // 输出反转后的整数  
    return 0;
}
