#include <stdio.h>
#include <string.h>

int main()
{
	int input;
	int sum, score;
	scanf("%d", &input);
	char test[80];

	for(int i = 0; i < input; i++)
	{
		sum = 0;
		score = 1;
		scanf("%s", test);

		for(int j = 0; j < strlen(test); j++)
		{
			if(test[j] == 'O')
			{
				sum += score;
				score++;
			}
			if(test[j] == 'X') score = 1;
		}
		printf("%d\n",sum);
	}
	return 0;
}