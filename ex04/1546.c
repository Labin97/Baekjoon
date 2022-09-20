#include <stdio.h>

int main()
{
	int N;
	float	M = 0;
	float sum = 0;
	float avg;
	scanf("%d", &N);
	float arr[N];

	for(int i = 0; i < N; i++)
	{
		scanf("%f", &arr[i]);
		if(arr[i] > M)
		{
			M = arr[i];
		}
	}

	for(int i = 0; i < N; i++)
	{
		arr[i] = arr[i] / M * 100;
		sum += arr[i];
	}
	avg = sum / N;

	printf("%f", avg);
	
	return 0;
}
