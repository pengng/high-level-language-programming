#include <stdio.h>

int main(void)
{
	int i, year, month, dayOfMonth, dayOfYear = 0, leap = 0;

	printf("�����������գ����磺2019 4 9\n");
	scanf("%d %d %d", &year, &month, &dayOfMonth);

	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

	for (i = 1; i < month; i++)
	{
		switch (i)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			dayOfYear += 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			dayOfYear += 30;
			break;
		case 2:
			dayOfYear += leap ? 29 : 28;
		}
	}

	dayOfYear += dayOfMonth;

	printf("��һ���Ǹ���ĵ�%d��\n", dayOfYear);

	return 0;
}