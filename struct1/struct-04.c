#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student list[100];
	int i;

	for ()
	{
		printf("�й��� �Է��ϼ��� : ");
		scanf("%d", &list[2].number);

		printf("�̸��� �Է��ϼ��� : ");
		scanf("%s", &list[2].name);

		printf("������ �Է��ϼ��� : ");
		scanf("%lf", &list[2].grade);
	}

	for (i = 0; i < 3; i++)
	{
		printf("�й� : %d �̸� : %s ���� : %f\n", list[i].number, list[i].name, list[i].grade);
	}
	
	return 0;
}