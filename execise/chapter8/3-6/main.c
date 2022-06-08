#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct stu
{
	char name[32];
	int score;
} STU;

STU fun(STU st)
{
	STU s;

	s.score = st.score + 5;
	strcat(st.name, "ren");
	strcpy(s.name, st.name);

	return s;
}

int main(void)
{
	STU student = { "zhangsan", 86 };

	printf("%s,%d\n", fun(student).name, fun(student).score);
	return 0;
}