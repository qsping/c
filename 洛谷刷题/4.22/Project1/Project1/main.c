int two(int i,int a)
{
	int count=0;
	if (i = a)
	{
		if (a == 2)count++;
		return count;
	}
	else 
	{
		if (i % 10 == 2)count++;
		two(i % 10,a);
	}
}
int main()
{
	int a = 0, b = 0;
	int i = 0, count = 0;
	scanf("%d", a);
	scanf("%d", b);
	for (i = b; i >= a; i--)
	{
		count = two(i,a);
	}
	printf("%d", count);
	return 0;
}