#include <stdio.h>

int main(void)
{
	int x = 42;
	int* ptr = &x;       // int 포인터
	int** doublePtr = &ptr;  // int 포인터를 가리키는 더블 포인터
	return 0;
}