#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, res;

	printf("정수 입력 : ");
	scanf("%d", &n);

	printf("----------------------------------\n");

	res = func(n);

	printf("결과 : %d\n", res);

	return 0;
}

int func(int n)
{
	if (n == 1)
	{
		return 1;
	}

	else
	{
		return n * func(n - 1);
	}
}