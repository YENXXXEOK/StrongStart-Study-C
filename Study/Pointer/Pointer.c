#include <stdio.h>

int main(void)
{
	int x = 42;
	int* ptr = &x;       // int ������
	int** doublePtr = &ptr;  // int �����͸� ����Ű�� ���� ������
	return 0;
}