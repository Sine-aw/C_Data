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
    char a;
    int k = 0;
    int i = 1;
    while (i)

    {
        printf("학번을 입력하시오:");
        scanf("%d", &list[k].number);

        printf("이름을 입력하시오:");
        scanf("%s", &list[k].name);

        printf("학점을 입력하시오:");
        scanf("%lf", &list[k].grade);

        printf("학번:%d  이름: %s   학점:%.2f\n", list[k].number, list[k].name, list[k].grade);

        k = k + 1;

        printf("======================");

        printf("작업을 종효하시겠습니까? (y / Y 또는 x / X");
        scanf(" %c", &a);

        if (a == 'y' || a == 'Y')
        {
            i = 0;
        }
    }
    printf("ㅂㅂ");

    return 0;
}
