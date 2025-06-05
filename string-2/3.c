#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[100];
	char address[100];
	
	printf("이름을 입력하시오 : ");
	gets_s(name, sizeof(name)); //gets(name);
	
	printf("현재 거주하는 주소를 입력하시오 : ");
	gets_s(address, sizeof(address)); //gets(address);
	
	puts(name);
	puts(address);
	
	return 0;
}