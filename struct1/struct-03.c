#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point //구조체 선언
{
	int x;
	int y;
};

struct rect //구조체 선언
{
	struct point p1; //구조체 안애 구조체 포함
	struct point p2;
};

int main(void)
{
	struct rect r; //구조체 변수 선언
	int w, h, area, peri;

	printf("왼쪽 상단의 좌표를 입력하세요 : "); //예) 10 10
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("오른쪽 상단의 좌표를 입력하세요 : ");
	scanf("%d %d", &r.p2.x, &r.p2.y); //예) 20 20

	w = r.p2.x - r.p1.x;
	h = r.p2.x - r.p1.x;

	area = w * h;
	peri = 2 * w + 2 * h;

	printf("면적은 %d 이고 둘레는 %d 입니다\n", area, peri);

	return 0;
}