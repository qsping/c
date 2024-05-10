#include<stdio.h>
void count(int i, int* arr, int sz)
{
	while (1)
	{
		switch (i % 10)
		{
			case 0:*arr += 1; break;
			case 1:*(arr+1) += 1; break;
			case 2:*(arr+2) += 1; break;
			case 3:*(arr+3) += 1; break;
			case 4:*(arr+4) += 1; break;
			case 5:*(arr+5) += 1; break;
			case 6:*(arr+6) += 1; break;
			case 7:*(arr+7) += 1; break;
			case 8:*(arr+8) += 1; break;
			case 9:*(arr+9) += 1; break;
		}
		if (i < 10)break;
		i /= 10;
	}
}
int main()
{
	int i = 0;
	int n=0,m = 0;
	int arr[10] = {0 };
	scanf("%d%d", &n, &m);
	for ( i = n; i <= m; i++)
	{
		count(i, arr, sizeof(arr));
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}