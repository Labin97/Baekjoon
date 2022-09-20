#include <stdio.h>

int main()
{
	int arr[9];

	for(int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	int count = 0;

	for(int j = 0; j < 9; j++)
	{
		if(arr[j] > max)
		{
			max = arr[j];
			count = j;
		}
	}
	printf("%d\n", max);
	printf("%d\n", count + 1);

	return 0;
}
