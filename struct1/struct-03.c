#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point //����ü ����
{
	int x;
	int y;
};

struct rect //����ü ����
{
	struct point p1; //����ü �Ⱦ� ����ü ����
	struct point p2;
};

int main(void)
{
	struct rect r; //����ü ���� ����
	int w, h, area, peri;

	printf("���� ����� ��ǥ�� �Է��ϼ��� : "); //��) 10 10
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("������ ����� ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &r.p2.x, &r.p2.y); //��) 20 20

	w = r.p2.x - r.p1.x;
	h = r.p2.x - r.p1.x;

	area = w * h;
	peri = 2 * w + 2 * h;

	printf("������ %d �̰� �ѷ��� %d �Դϴ�\n", area, peri);

	return 0;
}