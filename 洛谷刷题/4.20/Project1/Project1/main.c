#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0;
	int i = 0;
	int flag = 0;
	int arr[1000] = { 0 };
	scanf("%d", &n);	
	if (n < 1 || n >1000) return 0;
	else
	{
		for (i = 0; i < n; i++)
		{
			arr[0] = n;
			scanf("%d", &arr[i+1]);
		}
		for (i = 0; i < n; i++)
		{
			if (abs(arr[i] - arr[i + 1]) >= 1 && abs(arr[i] - arr[i + 1]) <= n - 1)										
				flag = 1;											
		}
	}
	if (flag == 1)printf("Jolly");
	else printf("Not jolly");
	return 0;
}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[1000] = {0};
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		arr[0] = n;
//		scanf("%d", &arr[i+1]);
//	}
//	/*int* p = malloc(n);*/
//	return 0;
//}