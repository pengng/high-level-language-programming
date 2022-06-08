#include<stdio.h>
#include<string.h>

struct call
{
	char name[32];
	char tel[13];
};

int main(void)
{
	struct call person[100];
	char na[32];
	int i = 0, j;

	scanf("%s%s", person[i].name, person[i].tel);
	while (strcmp(person[i].name, "#") != 0)
	{
		i++;
		scanf("%s%s", person[i].name, person[i].tel);
	}

	scanf("%s", na);
	for (j = 0; j < i; j++)
		if (strcmp(person[j].name, na) == 0)
		{
			printf("%s:%s\n", person[j].name, person[j].tel);
			break;
		}
	if (j == i) printf("No match!\n");

	return 0;
}