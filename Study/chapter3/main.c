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
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d%*c", &nAge);

	//fflush(stdin);

	printf("�̸��� �Է��ϼ��� : ");
	gets_s(szName, sizeof(szName));
	printf("����� ���̴� %d�̰�, �̸��� \'%s\' �Դϴ�.", nAge, szName);
	return 0;
}