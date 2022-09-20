#include <stdio.h>

int main()
{
	int A, B;

	for(int i = 0;; i++)
	{
		scanf("%d %d", &A, &B);
		if(A == 0 && B == 0) break;
		printf("%d\n", A + B);
	}

	return 0;
}
		
