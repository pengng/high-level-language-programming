#include<stdio.h>

struct node
{
	char name[20];
	int age;
};

void fun1(struct node s)
{
	struct node n = { "zhangsan", 23 };
	s = n;
}

void fun2(struct node* t)
{
	struct node n = { "lisi", 24 };
	*t = n;
}

int main(void)
{
	struct node stu1 = { "wangwu", 25 }, stu2 = { "zhaoliu", 26 };
	
	fun1(stu1);
	fun2(&stu2);
	printf("%d,%d\n", stu1.age, stu2.age);

	return 0;
}