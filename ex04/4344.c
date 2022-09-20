#include <stdio.h>

int main()
{
	int C;
	int N;
	scanf("%d", &C);

	for(int i = 0; i < C; i++)
	{
		scanf("%d", &N);
		int arr[N];
		int	sum = 0;
		int avg = 0;
		int count = 0;

		for(int j = 0; j < N; j++)
		{
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
			avg = sum / N;

		for(int k = 0; k < N; k++)
		{
			if(arr[k] > avg)
			{
				count++;
			}
		}
		printf("%.3f%%\n", ((float)count / (float)N) * 100);
	}
	return 0;
}
