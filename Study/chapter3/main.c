#include <stdio.h>

typedef struct IOBUF_TEST
{
	char* pCur;
	char* pBase;
	int bufSize;
} IOBUF_TEST;

void print_iobuf(IOBUF_TEST* pBuf)
{
	printf("Base : %p\nCurrent : %p\n", pBuf->pBase, pBuf->pCur);
	printf("Buffer size : %d\n", pBuf->bufSize);
	printf("Written size : %d\n\n", pBuf->pCur - pBuf->pBase);
}
int main()
{
	//FILE* fp = NULL;
	//fopen_s(&fp, "CON", "w");
	//print_iobuf(fp);
	//fputs("hello", fp);
	//print_iobuf(fp);
	//fclose(fp);
	int nAge = 0;
	char szName[10] = { 0, };
	printf("나이를 입력하세요 : ");
	scanf_s("%d%*c", &nAge);

	//fflush(stdin);

	printf("이름을 입력하세요 : ");
	gets_s(szName, sizeof(szName));
	printf("당신의 나이는 %d이고, 이름은 \'%s\' 입니다.", nAge, szName);
	return 0;
}