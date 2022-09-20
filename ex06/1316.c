#include <stdio.h>

int	check_double(char *str, char c, int pos)
{
	int	i;
	int j;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	check_group(char *str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (check_double(str, str[i], i) && str[i] != str[i - 1])
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	i;
	int	N;
	int	count;
	char str[100];

	i = 0;
	count = 0;
	scanf("%d", &N);
	while (i < N)
	{
		scanf("%s", str);
		if (check_group(str))
			count++;
		i++;
	}
	printf("%d", count);
}
