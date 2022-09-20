#include <stdio.h>

int	check_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	i;
	int	count;
	char str[1000005];

	scanf("%[^\n]s", str);
	i = 0;
	count = 0;
	if (check_alpha(str[i]))
	{
		count++;
		while (check_alpha(str[i]))
			i++;
	}
	while (str[i])
	{
		if (check_alpha(str[i]) && str[i - 1] == ' ')
			count++;
		i++;
	}
	printf ("%d\n", count);
}


