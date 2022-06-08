#include<stdio.h>
#define PI 3.1415926
#define R 3
#define L 2 * PI * R
#define S PI * R * R

int main(void)
{
	printf("length=%.2f,area=%.2f\n", L, S);
	return 0;
}