#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(void)
{
	char	str[100];
	int		i;
	int		len;

	i = 0;
	scanf("%s", str);
	len = ft_strlen(str);
	while (str[i])
	{
		if ((str[i] == 'l' || str[i] =='n') && str[i + 1] == 'j')
			len--;
		if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
			len--;
		if (str[i] == '=' || str[i] == '-')
			len--;
		i++;
	}
	printf("%d", len);
}
