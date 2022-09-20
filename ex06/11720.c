#include <stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);
	int sum = 0;

	char num[N];
	scanf("%s", num);

	for(int i = 0; i < N; i++)
	{
		sum = sum + num[i] - '0';
	}
	printf("%d", sum);

	return 0;
}
