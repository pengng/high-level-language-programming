#include<stdio.h>
#include<stdlib.h>

struct student_type
{
	char name[10];
	int num;
	int age;
	char sex;
} stud[10];															/* ����ṹ���������� */

int main(void)
{
	int i;
	FILE *fp;

	if ((fp = fopen("stud.dat", "rb")) == NULL)						/* ��ֻ����ʽ�򿪶������ļ� */
	{
		printf("can't open file\n");
		exit(1);
	}

	for (i = 1; i < 10; i += 2)										/* ѭ����ȡ��2��4��6��8��10��ѧ������Ϣ */
	{
		fseek(fp, (long)(i * sizeof(struct student_type)), 0);		/* ��λ����ǰҪ��ȡ���ݵ�λ�� */
		fread(&stud[i], sizeof(struct student_type), 1, fp);		/* �ӵ�ǰλ�ö�ȡ��һ��ѧ������Ϣ */
		printf("%s %d %d %c\n", stud[i].name, stud[i].num, stud[i].age, stud[i].sex);	/* �������ȡ��ѧ����Ϣ */
	}

	fseek(fp, -2L * sizeof(struct student_type), SEEK_END);			/* ָ���9��ѧ������Ϣ */
	fread(&stud[8], sizeof(struct student_type), 1, fp);			/* �ӵ�ǰλ�ö�ȡ��һ��ѧ������Ϣ */
	printf("%s %d %d %c\n", stud[8].name, stud[8].num, stud[8].age, stud[8].sex);		/* �������ȡ��ѧ����Ϣ */

	fclose(fp);														/* �ر� fp ��ָ����ļ� */
	return 0;
}