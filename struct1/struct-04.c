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
		printf("학번을 입력하세요 : ");
		scanf("%d", &list[2].number);

		printf("이름을 입력하세요 : ");
		scanf("%s", &list[2].name);

		printf("학점을 입력하세요 : ");
		scanf("%lf", &list[2].grade);
	}

	for (i = 0; i < 3; i++)
	{
		printf("학번 : %d 이름 : %s 학점 : %f\n", list[i].number, list[i].name, list[i].grade);
	}
	
	return 0;
}