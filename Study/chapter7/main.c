#include <stdio.h>

int main()
{

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j >= 4)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 + i; j++)
		{
			if (i + j >= 4)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 + i; j++)
		{
			if (i + j >= 4 && (i + j) % 2 == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}


	return 0;
}