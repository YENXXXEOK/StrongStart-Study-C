#include <stdio.h>

typedef struct IOBUF_TEST
{
	char* pCur;
	char* pBase;
	int bufsize;
} IOBUFF_TEST;

void print_iobuf(IOBUFF_TEST* pBuf)
{
	printf("Base : %p\nCurrent : %p\n", pBuf->pBase, pBuf->pCur);
	printf("Buffer Size %d\n", pBuf->bufsize);
	printf("Written Size %d\n\n", pBuf->pCur - pBuf->pBase);
}
void main()
{
	FILE* fp = 0;
	fopen_s(&fp, "CON", "w");

	print_iobuf(fp);

	fputs("asdf\n\n", fp);	print_iobuf(fp);
	fputs("test", fp);	print_iobuf(fp);

	fputc('A', fp);		print_iobuf(fp);
	fputc('B', fp);		print_iobuf(fp);
	fputc('C', fp);		
	fputc('D', fp);		print_iobuf(fp);
	fclose(fp);

//	int nData = 0;
//	printf("%d", &nData);
//	scanf_s("%d", &nData);
//	getchar();
//	getchar();
//	getchar();
//	getchar();
//	
	/*
	printf("%f\n", 2147483648.0F);
	printf("%f\n", 2147483648.0F - 20);
	printf("%f\n", 2147483648.0F - 40);
	printf("%f\n", 2147483648.0F - 60);
	char szName[12] = { "Hello" };
	gets_s(szName, sizeof(szName));
	*/
}