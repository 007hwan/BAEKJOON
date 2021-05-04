#include<stdio.h>
int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (b >= c)
	{
		printf("-1");
	}

	if (c > b)
	{
		int d = a / (c - b) + 1;
		printf("%d", d);
	}

	return 0;
}
