#include <stdio.h>

int main()
{
	int A, B, C, k;
	int array[10] = {};
	int num;

	scanf("%d %d %d", &A, &B, &C);

	num = A * B * C;

	while(num > 0)
	{
		k = num % 10;
		num /= 10;
		array[k] ++;
	}

	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", array[i]);
	}
	return 0;
}
