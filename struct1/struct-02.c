#define _CRT_SRCURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student
{
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;

	printf("�й��� �Է��ϼ��� : ");
	scnaf("%d", &s.number);

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", s.name);

	printf("������ �Է��ϼ��� : ");
	scanf("%lf", &s.grade);

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.grade);

	return 0;
}
}