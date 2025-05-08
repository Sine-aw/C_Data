#include <stdio.h>

int main()
{
	int i = 10;
	double f = 12.3;
	int* pi = NULL;

	double* pf = NULL;
	pi = &i;
	pi = &f;

	printf("%p %p %d  \n", pi, &i, i);
	printf("%p %p %.1f  \n", pf, &f, f);

	return 0;
}