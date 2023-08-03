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
	//char*에는 char형의 주소를 담는다.
	 char* pData = &ch;
	//char**에는 char*형의 주소를 담는다.
	 char** ppData = &pData;
	//char***에는 char**형의 주소를 담는다.
	 char*** pppData = &ppData;

	 //아래 코드들은 모두 char 형식을 %c로 출력한다.
	printf("%c\n", ch);
	printf("%x\n", pData);
	printf("%x\n", *ppData);
	printf("%x\n", **pppData);


	
	return 0;
}