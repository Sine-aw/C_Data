#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[100];
	char address[100];
	
	printf("�̸��� �Է��Ͻÿ� : ");
	gets_s(name, sizeof(name)); //gets(name);
	
	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ� : ");
	gets_s(address, sizeof(address)); //gets(address);
	
	puts(name);
	puts(address);
	
	return 0;
}