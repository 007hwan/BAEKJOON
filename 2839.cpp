#include<stdio.h>
int main()
{
	int n;
	int bag = 0;

	scanf("%d", &n);

	while (true)
	{
		if (n < 3)
		{
			break;
		}

		if (n % 5 == 0)
		{
			n -= 5;
			bag += 1;
		}

		else
		{
			n -= 3;
			bag += 1;
		}
	}

	if (n == 0)
	{
		printf("%d", bag);
	}

	else
	{
		printf("-1");
	}

	return 0;
}
