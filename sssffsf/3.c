#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char class;
	int num;
	int c;
	int java;
	int pyth;
	int tot;
	double avg;
	char e;
	int k = 1;

	while (k = 1)
	{
		printf("�й��� �Է��ϼ��� : ");
		scanf("%d", &num);

		printf("��(A ~ C)�� �Է��ϼ��� : ");
		scanf(" %c", &class);

		printf("c��� ������ �Է��ϼ��� : ");
		scanf("%d", &c);

		printf("�ڹ� ������ �Է��ϼ��� : ");
		scanf("%d", &java);

		printf("���̽� ������ �Է��ϼ��� : ");
		scanf("%d", &pyth);

		tot = c + java + pyth;

		avg = (double)tot / 3;

		printf("���� : %d\t ��� : %.2f\n", tot, avg);

		printf("-------------------------------------------------\n");
		printf("����� ���� �Ͻðڽ��ϱ�? (y / n)");
		scanf(" %c", &e);

		if (e == 'y' || e == 'Y')
		{
			//k = 0;
			break;
		}
	}
	
	printf("�����մϴ�\n");

	return 0;
}