////					打印100-200之间的素数




//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 0;
//		int j = 0;
//		for (j =2; j <=i-1; j++)		//循环2-99
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;				//如果这个数除以2-99有不存在余数让flag改为1；
//									//不参与打印
//			}
//		}
//		if (flag == 0)				
//			printf("%d\n",i);
//	}
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
// 
							//求素数优化求法
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)		//在奇数中寻找素数
//	{
//		
//		int flag = 0;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)	//循环2-99//第二种方法在此处进行更改
//									//16=4*4   16=2*8   2《=8
//									// 只要存在因数小于等于开平方的数就证明是质数/
//									// 反之为素数，节省了计算量
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;				//如果这个数除以2-99有不存在余数让flag改为1；
//									//不参与打印
//			}
//		}
//		if (flag == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}






//写一个函数判断是否是闰年:
// 闰年能被4整除，并且不能被100整除是闰年
//能被400整除是闰年
//#include<stdio.h>
//int year1(int x)
//{
//	if ((x % 4 == 0))
//	{
//		if (x % 100 != 0)
//		{
//			return 1;
//		}
//	}
//	if (x% 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1000; i<= 2000; i++)
//	{
//		if(year1(i))
//		printf("%d\n", i);
//	}
//	
//	return 0;
//}


 //使用二分法函数对数组进行查找
//#include<stdio.h>
//int search(int arr[], int k, int sz)
//{
//	int right = sz-1;
//	int left = 0;
//	
//	while (left<=right)
//	{
//		int mid = (left+right)/2;
//		if (k> arr[mid])
//		{
//			left = mid+1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid-1;
//		}
//		else 
//		{
//			return mid;
//		}
//		if(left>right)
//		{
//			return  -1;
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 ,10};
//	int k = 6;
//	int ret = 0;
//	int sz=sizeof(arr)/sizeof(arr[0]);//找到了返回下标；找不到返回-1
//	ret=search(arr,k,sz);
//	if (ret == -1)printf("找不到");
//	else
//	{
//		printf("找到了%d",ret);
//	}
//	return 0;
//}







//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int b = 15;
//	int a = sqrt(b);
//	printf("%d",a);
//
//}







////写一个函数每调用一次使得NUM加一
//#include<stdio.h>
//int ADD(int* x)
//{
//	(*x)++;             //此处也应该是*x
//	return *x;
//
//}
//int main()
//{
//	int i = 0;
//	int NUM = 0;
//	while (i < 5)
//	{
//		ADD(&NUM);
//		printf("%d\n", NUM);
//		i++;
//	}
//	return 0;
//}

#include<stdio.h>
int ADD(int n)
{
	return n + 1;

}
int main()
{
	int a = 0;
	a=ADD(a);                              //赋值给a；
	printf("%d", a);
	return 0;
}







