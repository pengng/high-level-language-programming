#include<stdio.h>
#define PI 3.1415926			/* �޲κ궨�壬PI�Ǻ�����3.1415926�������滻�����ĳ��� */

int main(void)
{
	float radius, length, area, volume;

	printf("Input a radius: ");
	scanf("%f", &radius);
	length = 2 * PI * radius;							/* �����޲κ����Բ���ܳ� */
	area = PI * radius * radius;						/* �����޲κ����Բ����� */
	volume = PI * radius * radius * radius * 3 / 4;		/* �����޲κ���������� */
	printf("length=%.2f,area=%.2f,volume=%.2f\n", length, area, volume);

	return 0;
}