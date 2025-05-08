#include <stdio.h>

int main(void)
{
	int x = 500;
	double y = 20.34;
	int* p1 = NULL;
	double *p2 = NULL;

	p1 = &x;
	p2 = &y;

	printf(" %p %p\n", &2, &y);

	printf(" %p %d\n", &x, x);

	printf(" %p %d\n", p1, *p2);
}