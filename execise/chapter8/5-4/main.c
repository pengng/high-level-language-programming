#include<stdio.h>

struct date
{
	int year;
	int month;
	int day;
};

int dayOfYear(struct date *d);

int main(void)
{
	struct date d;

	scanf("%d %d %d", &d.year, &d.month, &d.day);
	printf("%d\n", dayOfYear(&d));

	return 0;
}

int dayOfYear(struct date *d)
{
	int i, year, month, dayOfMonth, dayOfYear = 0, leap = 0;

	year = d->year;
	month = d->month;
	dayOfMonth = d->day;

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

	return dayOfYear;
}