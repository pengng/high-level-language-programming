#include<stdio.h>
#include<stdlib.h>

struct contact
{
	char name[50];
	struct {
		int year, month, day;
	} birthday;
	char phone[50];
};

int compare(const struct contact* a, const struct contact* b);

int main(void)
{
	struct contact contacts[100];

	int i, n;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %s", contacts[i].name, contacts[i].phone);
		scanf("%d %d %d", &contacts[i].birthday.year, &contacts[i].birthday.month, &contacts[i].birthday.day);
	}

	qsort(contacts, n, sizeof(struct contact), compare);

	printf("name\tphone\t\tbirthday\n");
	for (i = 0; i < n; i++)
	{
		printf("%s\t%s\t", contacts[i].name, contacts[i].phone);
		printf("%d-%d-%d\n", contacts[i].birthday.year, contacts[i].birthday.month, contacts[i].birthday.day);
	}

	return 0;
}

int compare(const struct contact* a, const struct contact* b)
{
	if (a->birthday.year != b->birthday.year)
	{
		return a->birthday.year - b->birthday.year;
	}
	else if (a->birthday.month != b->birthday.month)
	{
		return a->birthday.month - b->birthday.month;
	}
	else
	{
		return a->birthday.day - b->birthday.day;
	}
}