#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	int r1 = 0;
	double r2 = 0;
	char op;

	printf("첫 번째 숫자를 입력하세요 : ");
	scanf("%d", &a);

	printf("두 번째 숫자를 입력하세요 : ");
	scanf("%d", &b);

	printf("연산할 기호를 입력하세요 : ");
	scanf(" %c", &op);

	switch (op)
	{
	case '+':
		r1 = a + b;
		printf("\n%d  %c  %d = %d", a, op, b, r1);
		break;

	case '-':
		r1 = a - b;
		printf("\n%d  %c  %d = %d", a, op, b, r1);
		break;

	case '*':
		r1 = a * b;
		printf("\n%d  %c  %d = %d", a, op, b, r1);
		break;

	case '/':
		r2 = (double)a / b;
		printf("\n%d  %c  %d = %.2f", a, op, b, r2);
		break;

	default:
		printf("\n입력 오류");
	}

	return 0;
}