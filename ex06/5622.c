#include <stdio.h>

int	main(void)
{
	char str[15];
	int	num;
	int	i;

	i = 0;
	num = 0;
	scanf("%s", str);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'C')
			num += 3;
		if (str[i] >= 'D' && str[i] <= 'F')
			num += 4;
		if (str[i] >= 'G' && str[i] <= 'I')
			num += 5;
		if (str[i] >= 'J' && str[i] <= 'L')
			num += 6;
		if (str[i] >= 'M' && str[i] <= 'O')
			num += 7;
		if (str[i] >= 'P' && str[i] <= 'S')
			num += 8;
		if (str[i] >= 'T' && str[i] <= 'V')
			num += 9;
		if (str[i] >= 'W' && str[i] <= 'Z')
			num += 10;
		i++;
	}
	printf("%d", num);
}
