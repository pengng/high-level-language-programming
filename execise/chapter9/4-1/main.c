#include<stdio.h>
#define SWAP(x, y, z) (z = x, x = y, y = z)

int main(void)
{
	int a, b, c;

	scanf("%d%d", &a, &b);
	SWAP(a, b, c);
	printf("a=%d,b=%d\n", a, b);

	return 0;
}