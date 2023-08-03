#include <stdio.h>

int main()
{
	int a, b;
	printf("두 정수를 입력하세요. : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	printf("AVG : %.2f", (a + b) / 2.0);
	return 0;
}