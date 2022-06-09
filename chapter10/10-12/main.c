#include<stdio.h>
#include<stdlib.h>

struct student_type
{
	char name[10];
	int num;
	int age;
	char sex;
} stud[10];															/* 定义结构体类型数组 */

int main(void)
{
	int i;
	FILE *fp;

	if ((fp = fopen("stud.dat", "rb")) == NULL)						/* 以只读方式打开二进制文件 */
	{
		printf("can't open file\n");
		exit(1);
	}

	for (i = 1; i < 10; i += 2)										/* 循环读取第2、4、6、8和10名学生的信息 */
	{
		fseek(fp, (long)(i * sizeof(struct student_type)), 0);		/* 定位到当前要读取数据的位置 */
		fread(&stud[i], sizeof(struct student_type), 1, fp);		/* 从当前位置读取下一名学生的信息 */
		printf("%s %d %d %c\n", stud[i].name, stud[i].num, stud[i].age, stud[i].sex);	/* 输出所读取的学生信息 */
	}

	fseek(fp, -2L * sizeof(struct student_type), SEEK_END);			/* 指向第9名学生的信息 */
	fread(&stud[8], sizeof(struct student_type), 1, fp);			/* 从当前位置读取下一名学生的信息 */
	printf("%s %d %d %c\n", stud[8].name, stud[8].num, stud[8].age, stud[8].sex);		/* 输出所读取的学生信息 */

	fclose(fp);														/* 关闭 fp 所指向的文件 */
	return 0;
}