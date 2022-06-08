#include<stdio.h>
#include<math.h>
#define AREA(m, x, y, z) sqrt(m * (m - x) * (m - y) * (m - z))

int main(void)
{
	int a, b, c;
	float s, area;

	scanf("%d %d %d", &a, &b, &c);
	s = (a + b + c) / 2.0;
	area = AREA(s, a, b, c);
	printf("area=%.2f\n", area);
	
	return 0;
}