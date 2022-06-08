#include<stdio.h>
#define PRI printf
#define NL "\n"
#define D "%d"
#define D1 D NL
#define D2 D D NL
#define D3 D D D NL
#define D4 D D D D NL
#define S "%s"

int main(void)
{
	int a = 2, b = 3, c = 4, d = 5;
	char s[] = "STRING";

	PRI(D1, a);
	PRI(D2, a, b);
	PRI(D3, a, b, c);
	PRI(D4, a, b, c, d);
	PRI(S, s);

	return 0;
}