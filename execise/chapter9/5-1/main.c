#include<stdio.h>
#define remainder(a, b) ((a) % (b))

int main(void)
{
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d\n", remainder(m, n));

	return 0;
}