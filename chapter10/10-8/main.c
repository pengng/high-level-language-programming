#include<stdio.h>
#include<stdlib.h>
#define SIZE 4

struct student_type										/* 定义学生信息的结构体类型 */
{
	char name[10];
	int num;
	int age;
	char addr[15];
} stud[SIZE];

void save()												/* 定义保存学生信息的函数 */
{
	FILE *fp;
	int i;
	
	if ((fp = fopen("stu_list", "wb")) == NULL)			/* 以只写方式打开二进制文件 */
	{
		printf("cannot open file\n");
		exit(1);
	}

	for (i = 0; i < SIZE; i++)
		if (fwrite(&stud[i], sizeof(struct student_type), 1, fp) != 1)
			printf("file write error\n");				/* 依次将每个结构体类型数组元素 stud[i] 的数据写入到 fp 所指向的文件 */
	fclose(fp);											/* 关闭 fp 所指向的文件 */
}

void display()											/* 定义显示学生信息的函数 */
{
	FILE *fp;
	int i;

	if ((fp = fopen("stu_list", "rb")) == NULL)			/* 以只读方式打开二进制文件 */
	{
		printf("cannot open file\n");
		exit(1);
	}

	for (i = 0; i < SIZE; i++)							/* 从 fp 所指向的文件中逐一读取学生的结构体类型数据保存到结构体类型数组元素并输出 */
	{
		fread(&stud[i], sizeof(struct student_type), 1, fp);
		printf("%-10s %4d %4d %-15s\n", stud[i].name, stud[i].num, stud[i].age, stud[i].addr);
	}
	fclose(fp);											/* 关闭 fp 所指向的文件 */
}

int main(void)											/* 主函数 */
{
	int i;
	for (i = 0; i < SIZE; i++)
		scanf("%s%d%d%s", stud[i].name, &stud[i].num, &stud[i].age, stud[i].addr);		/* 从键盘依次输入每个学生的信息 */

	save();												/* 调用函数 save() */
	display();											/* 调用函数 display() */

	return 0;
}