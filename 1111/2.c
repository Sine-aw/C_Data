#include <stdio.h>

int main(void)
{
	int a[5] = { 10, 20, 30, 40, 50 };

	printf("a[0] = %p a[1] = %p a[2] = %p", &a[0], &a[1], &a[2]);
	printf("a[0] = %p a[1] = %p a[2] = %p", a, a + 1, a + 2);
	printf("a[0] = %d a[1] = %d a[2] = %d", &a[0], &a[1], &a[2]);
	printf("a[0] = %d a[1] = %d a[2] = %d", *a, *(a + 1), *(a + 2));

	return 0;
}