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
        printf("�й��� �Է��Ͻÿ�:");
        scanf("%d", &list[k].number);

        printf("�̸��� �Է��Ͻÿ�:");
        scanf("%s", &list[k].name);

        printf("������ �Է��Ͻÿ�:");
        scanf("%lf", &list[k].grade);

        printf("�й�:%d  �̸�: %s   ����:%.2f\n", list[k].number, list[k].name, list[k].grade);

        k = k + 1;

        printf("======================");

        printf("�۾��� ��ȿ�Ͻðڽ��ϱ�? (y / Y �Ǵ� x / X");
        scanf(" %c", &a);

        if (a == 'y' || a == 'Y')
        {
            i = 0;
        }
    }
    printf("����");

    return 0;
}
