#include <stdio.h>

int main(void)
{
	/* 9 -1 선택 버블
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nTmp = 0;

	//여기에 들어갈 코드를 작성합니다.
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (aList[i] > aList[j])
			{
				nTmp = aList[i];
				aList[i] = aList[j];
				aList[j] = nTmp;
			}
		}
	}
	
	//이하 코드는 수정하지 않습니다.
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');
	*/

	/* 9-2 버블
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nTmp = 0;
	//여기에 들어갈 코드를 작성합니다.
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (aList[j] > aList[j + 1])
			{
				nTmp = aList[j + 1];
				aList[j + 1] = aList[j];
				aList[j] = nTmp;
			}

		}
	}
	
	//이하 코드는 수정하지 않습니다.
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);

	putchar('\n');
	*/

	/* 9 -3 선택정렬
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nMinIndex = 0, nTmp = 0;
	//여기에 들어갈 코드를 작성합니다.
	for (i = 0; i < 5; i++)
	{
		nMinIndex = i;
		for (j = i + 1; j < 5; j++)
		{
			if (aList[nMinIndex] > aList[j])
			{
				nMinIndex = j;
			}
		}
		nTmp = aList[i];
		aList[i] = aList[nMinIndex];
		aList[nMinIndex] = nTmp;
	}

	//이하 코드는 수정하지 않습니다.
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');
	*/

	/*
	int i, j;
	int aList[5][5] = { 0, };

	for (i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if (i % 2 == 0)
				aList[i][j] = (i * 5) + j + 1;
			else
				aList[i][j] = (i * 5) + (5 - j);
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d\t", aList[i][j]);
		}
		printf("\n");
	}
	*/
	/*
#define arr 10
	int i, j;
	int aList[arr][arr] = { 0, };
	int nCnt = 1;

	int nArr = 1;
	for (i = 0; i < arr * 4 + 1; i++)
	{
		if (i != 0 && i % 4 == 0)
			nArr++;

		if (nArr - 1 == arr - nArr)
		{
			aList[arr - nArr][arr - nArr] = nCnt;
		}
		if (i % 4 < 2)
		{
			for (j = nArr - 1; j < arr - nArr; j++)
			{
				if(i % 2 == 0)
					aList[i / 4][j] = nCnt++;
				else
					aList[j][(arr - 1) - (i / 4)] = nCnt++;
			}
		}
		else
		{
			for (j = arr - nArr; j > nArr - 1; j--)
			{
				if(i % 2 == 0)
					aList[(arr - 1) - (i / 4)][j] = nCnt++;
				else
				{
					aList[j][i / 4] = nCnt++;
				}
			}
		}
	}


	for (i = 0; i < arr; i++)
	{
		for (j = 0; j < arr; j++)
		{
			printf("%d\t", aList[i][j]);
		}
		printf("\n");
	}
	*/
/*
#define arr 10
	int i, j, x = -1, y = 0, nDir = 1;
	int aList[arr][arr] = { 0, };
	int nCnt = 1;
	int nLength = 0;

	for (nLength = 0; nLength < arr * 2; nLength += 2)
	{
		j = (arr * 2) - nLength;
		for (i = 0; i < j - 1; i++)
		{
			if (i < j / 2) x += nDir;
			else
			{
				y += nDir;
			}

			aList[y][x] = nCnt++;
		}
		nDir = -nDir;
	}

	for (i = 0; i < arr; i++)
	{
		for (j = 0; j < arr; j++)
		{
			printf("%d\t", aList[i][j]);
		}
		printf("\n");
	}
	*/

/*
#define arr 5
	int i, j;
	int aList[arr][arr] = { 0, };
	int nCnt = 1;
	int nDir = 1;

	for (i = 0; i < arr; i++)
	{
		for (j = 0; j < arr; j++)
		{
			if(i % 2 == 0)	aList[j][i] = nCnt++;
			else			aList[arr - j - 1][i] = nCnt++;
		}
	}

	for (i = 0; i < arr; i++)
	{
		for (j = 0; j < arr; j++)
		{
			printf("%d\t", aList[i][j]);
		}
		printf("\n");
	}
	*/

/*
#define arr 5
	int i, j, x = arr, y = 0, nDir = 1;
	int aList[arr][arr] = { 0, };
	int nCnt = 1;
	int nLength = 0;

	for (nLength = arr * 2 - 1; nLength >= 0; nLength -= 2)
	{
		for (i = 0; i < nLength; i++)
		{
			if (i < nLength / 2 + 1)
			{
				x -= nDir;
			}
			else
			{
				y += nDir;
			}

			aList[y][x] = nCnt++;
		}
		nDir = -nDir;
	}

	for (i = 0; i < arr; i++)
	{
		for (j = 0; j < arr; j++)
		{
			printf("%d\t", aList[i][j]);
		}
		printf("\n");
	}
	*/
	return 0;
}