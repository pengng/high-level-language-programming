#include<stdio.h>
#include<string.h>

typedef struct
{
	char name[20];
	char gender;
	int score[4];
} STU;

STU fun(STU a)
{
	STU s = { "Zhang", 'm', 93, 92, 88, 95 };
	int i;
	
	strcpy(a.name, s.name);
	a.gender = s.gender;
	for (i = 0; i < 4; i++)
		a.score[i] = s.score[i];

	return a;
}

int main(void)
{
	STU st1 = { "Zhao", 'f', 96, 85, 97, 99 }, st2;

	st2 = fun(st1);
	printf("%s,%c,%d,%d,%d,%d\n", st2.name, st2.gender, st2.score[0], st2.score[1], st2.score[2], st2.score[3]);
	printf("%s,%c,%d,%d,%d,%d\n", st1.name, st1.gender, st1.score[0], st1.score[1], st1.score[2], st1.score[3]);

	return 0;
}