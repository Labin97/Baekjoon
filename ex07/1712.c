#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	i;
	
	scanf("%d%d%d", &a, &b, &c);
	if (b >= c)
	{
		printf("-1");
		return (0);
	}
	i = a / (c - b) + 1;
	printf("%d", i);
}
