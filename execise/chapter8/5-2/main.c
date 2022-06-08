#include<stdio.h>
#define N 10

typedef struct
{
	int code;
	char name[50];
	int price;
	int quantity;
	int amount;
} record_t;

void input(record_t a[], int n);
void sum(record_t a[], int n);
void sort(record_t a[], int n);
void swap(record_t *a, record_t *b);

int main(void)
{
	record_t records[N];
	int i;

	input(records, N);
	sum(records, N);
	sort(records, N);

	for (i = 0; i < N; i++)
	{
		printf("#%d %s: %d x %d = %d\n", records[i].code, records[i].name, records[i].price, records[i].quantity, records[i].amount);
	}

	return 0;
}

void input(record_t a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d %s %d %d", &a[i].code, a[i].name, &a[i].price, &a[i].quantity);
	}
}

void sum(record_t a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		a[i].amount = a[i].price * a[i].quantity;
	}
}

void sort(record_t a[], int n)
{
	int i, j, k;

	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j].amount > a[k].amount) k = j;
		}
		if (i != k) swap(&a[i], &a[k]);
	}
}

void swap(record_t *a, record_t *b)
{
	record_t temp = *a;
	*a = *b;
	*b = temp;
}