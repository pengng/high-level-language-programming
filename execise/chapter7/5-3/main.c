#include<stdio.h>

void swap(int *p1, int *p2);

int main(void)
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("%d %d\n", a, b);

	return 0;
}

void swap(int *p1, int *p2)
{
	int x = *p1;
	*p1 = *p2;
	*p2 = x;
}