#include <stdio.h>

void MyPrint(int nParam)
{
	return;
}
void TestFunc(int nParam)
{
	int nResult = 0;
	MyPrint(5);
}
void main()
{
	int a = 10;
	int b = 20;
	TestFunc(10);
	/*
	int x = 5;

	printf("%lf", (x / (double)2));
	printf("%lf", (double)(x / 2));
	*/
}