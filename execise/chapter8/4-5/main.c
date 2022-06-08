#include<stdio.h>

struct address
{
	char street[50];
	int zipcode;
};

struct friend
{
	char name[32];
	int age;
	char phone[13];
	struct address addr;
} fri[10];

int main(void)
{
	int i, count1, count2, count3;

	count1 = count2 = count3 = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%s%d%s", fri[i].name, &fri[i].age, fri[i].phone);
		scanf("%s%d", fri[i].addr.street, &fri[i].addr.zipcode);

		if (fri[i].age > 56) count1++;
		else if (fri[i].age > 39) count2++;
		else count3++;
	}
	printf("老年人数：%d，中年人数：%d，青年人数：%d\n", count1, count2, count3);

	return 0;
}