#include<stdio.h>
#define COUNT(n) n--

int main(void)
{
	int x = 6, n = 0;

	while (COUNT(x)) n++;
	printf("%d\n", n);

	return 0;
}