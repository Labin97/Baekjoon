#include <stdio.h>

int main()
{
	int N, X;
	int tmp[N];
	scanf("%d %d", &N, &X);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &tmp[i]);

		if(tmp[i] < X)
		{
			printf("%d ", tmp[i]);
		}
	}


	return 0;
}
