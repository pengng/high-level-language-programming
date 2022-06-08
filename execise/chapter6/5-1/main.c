#include<stdio.h>

int GCD(int a, int b);
int LCM(int a, int b);

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d %d\n", GCD(a, b), LCM(a, b));

	return 0;
}

int GCD(int a, int b)
{
	int r = a % b;
	return r == 0 ? b : GCD(b, r);
}

int LCM(int a, int b)
{
	return a * b / GCD(a, b);
}