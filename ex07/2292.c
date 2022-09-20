#include <stdio.h>

int	main(void)
{
	int	i = 1;
	int	num = 1;
	int	N;

	scanf("%d", &N);

	if (N == 1)
	{
		printf("1");
		return (0);
	}
	while (num < N)
	{
		num = num + 6 * i;
		i++;
	}
	printf("%d", i);
}

		

