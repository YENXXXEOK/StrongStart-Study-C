#include <stdio.h>
/*
main()
{
	int nData = 10;
	int *pData = &nData;
	//pData = 0x0014FCD8;
	//*pData = 100;
	printf("%x / %x\n", pData, &pData);
	char* astrList = "my name is aaa";
	printf("%s", astrList);
}
*/
int main(int argc, char* argv[])
{
	char ch = 'A';
	//char*���� char���� �ּҸ� ��´�.
	 char* pData = &ch;
	//char**���� char*���� �ּҸ� ��´�.
	 char** ppData = &pData;
	//char***���� char**���� �ּҸ� ��´�.
	 char*** pppData = &ppData;

	 //�Ʒ� �ڵ���� ��� char ������ %c�� ����Ѵ�.
	printf("%c\n", ch);
	printf("%x\n", pData);
	printf("%x\n", *ppData);
	printf("%x\n", **pppData);


	
	return 0;
}