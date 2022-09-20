#include <stdio.h>

int d (int n);

int main()
{
	int arr[10001], i , check;
	for(int i = 1; i < 10001; i++)
	{
		check = d(i);
		if(check < 10001)
			arr[check] =1;
	}
	
	for(int j = 1; j <= 10000; j++)
	{
		if(arr[j] != 1)
		{
			printf("%d\n", j);
		}
	}
	return 0;
}




int d (int n)
{
	int sum = 0;

	for(int i = n; i > 0; i /= 10)
	{
		sum += i % 10;
	}
	
	sum = sum + n;
	return sum;
}
