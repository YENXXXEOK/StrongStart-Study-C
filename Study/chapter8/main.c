#include <stdio.h>
int main(void)
{
	/* 8-1 
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0;

	for (i = 1; i < 5; i++)
	{
		if (aList[0] < aList[i])
			aList[0] = aList[i];
	}


	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);


	printf("\n");

	printf("MAX: %d\n", aList[0]);
	*/
	/* 8-2
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, nTmp = 0;

	//���⿡ �� �ڵ带 �ۼ��մϴ�.
	for (i = 1; i < 5; i++)
	{
		if (aList[0] > aList[i])
		{
			nTmp = aList[0];
			aList[0] = aList[i];
			aList[i] = nTmp;
		}
	}
	//���� �ڵ�� �������� �ʽ��ϴ�.
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	printf("\n");
	printf("MIN: %d\n", aList[0]);
	*/

	int aList[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	int i = 0, j = 0;

	//���⿡ �� �ڵ带 �ۼ��մϴ�.
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i >= 2)
			{
				aList[i][j] = aList[0][j] + aList[1][j];
			}
			aList[i][3] += aList[i][j];
		}
	}

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 4; ++j)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}
	return 0;
}