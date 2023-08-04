#include <stdio.h>

int main()
{
	/* 4-1
	int a, b;
	printf("두 정수를 입력하세요. : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	printf("AVG : %.2f", (a + b) / 2.0);
	*/

	int a;
	scanf_s("%d", &a);
	int h, m, s;
	h = a / 3600;
	m = (a % 3600) / 60;
	s = (a % 3600) % 60;

	printf("%d는 %d시간 %d분 %d초 입니다.", a, h, m, s);
	return 0;
}