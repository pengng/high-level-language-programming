#include<stdio.h>

void sub(int x, int y, int* z)
{
	*z = y - x;
}

int main(void)
{
	int a, b, c;

	sub(10, 5, &a);
	sub(7, a, &b);
	sub(a, b, &c);
	printf("%d,%d,%d\n", a, b, c);

	return 0;
}