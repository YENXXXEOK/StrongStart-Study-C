#include <stdio.h>

int main()
{
	int a, b;
	printf("�� ������ �Է��ϼ���. : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	printf("AVG : %.2f", (a + b) / 2.0);
	return 0;
}