#include<stdio.h>
int main()
{
	int arr[1000] = { 0 };
	int n = 0;
	int i = 0;
	int count = 0;
	scanf("%d", &n);
	for (i = 0; i < 1000; i++)
	{
		scanf("%d", &arr[i]);
		if (i == n - 1)break;
	}
	for (i = 1; i < n-1; i++)
	{
		if (((arr[i] <= arr[i - 1]) && (arr[i] <= arr[i + 1])))
		{
			count++;
			if (arr[i + 1] - arr[i] == 0)count-=1;
		}
	}
	printf("%d", count);
	return 0;
}