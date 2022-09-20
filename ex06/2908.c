#include <stdio.h>

int	main(void)
{
	int	a;
	int	a_rev;
	int	b;
	int	b_rev;
	scanf("%d%d", &a, &b);

	a_rev = 0;
	b_rev = 0;
	while (a)
	{
		a_rev = a_rev * 10 + a % 10;
		a /= 10;
	}
	while (b)
	{
		b_rev = b_rev * 10 + b % 10;
		b /= 10;
	}
	if (a_rev > b_rev)
		printf("%d", a_rev);
	else
		printf("%d", b_rev);
}


