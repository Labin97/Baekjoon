#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	if(b + c < 60)
	{
		printf("%d %d", a, b + c);
	}
	else if(b + c >= 60)
	{
		printf("%d %d", (a + (b + c)/60)% 24 , (b + c) % 60);
	}
	return 0;
}

