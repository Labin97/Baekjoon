#include <stdio.h>

int long long sum(int *a, int n)
{
	scanf("%d", &n);
	int sum = 0;

	for(int i = 0; i < n; i++)
	{
		sum += a[i];
	}

	return sum;
}
