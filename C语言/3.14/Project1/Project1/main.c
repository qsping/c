////					��ӡ100-200֮�������




//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 0;
//		int j = 0;
//		for (j =2; j <=i-1; j++)		//ѭ��2-99
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;				//������������2-99�в�����������flag��Ϊ1��
//									//�������ӡ
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
							//�������Ż���
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)		//��������Ѱ������
//	{
//		
//		int flag = 0;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)	//ѭ��2-99//�ڶ��ַ����ڴ˴����и���
//									//16=4*4   16=2*8   2��=8
//									// ֻҪ��������С�ڵ��ڿ�ƽ��������֤��������/
//									// ��֮Ϊ��������ʡ�˼�����
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;				//������������2-99�в�����������flag��Ϊ1��
//									//�������ӡ
//			}
//		}
//		if (flag == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}






//дһ�������ж��Ƿ�������:
// �����ܱ�4���������Ҳ��ܱ�100����������
//�ܱ�400����������
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


 //ʹ�ö��ַ�������������в���
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
//	int sz=sizeof(arr)/sizeof(arr[0]);//�ҵ��˷����±ꣻ�Ҳ�������-1
//	ret=search(arr,k,sz);
//	if (ret == -1)printf("�Ҳ���");
//	else
//	{
//		printf("�ҵ���%d",ret);
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







////дһ������ÿ����һ��ʹ��NUM��һ
//#include<stdio.h>
//int ADD(int* x)
//{
//	(*x)++;             //�˴�ҲӦ����*x
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
	a=ADD(a);                              //��ֵ��a��
	printf("%d", a);
	return 0;
}







