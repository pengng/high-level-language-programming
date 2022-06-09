#include<stdio.h>
#include<stdlib.h>

struct clientData											/* 定义结构体类型 */
{
	int acctNum;
	char lastName[15];
	char firstName[10];
	float balance;
};

int main(void)
{
	struct clientData client;
	float bal;
	FILE *fp;

	if ((fp = fopen("client.dat", "rb+")) == NULL)			/* 以读/写方式打开二进制文件 */
	{
		printf("can't open file\n");
		exit(1);
	}
	else
	{
		printf("Enter account number(1 to 100, 0 to end input)\n");
		scanf("%d", &client.acctNum);						/* 从键盘输入账户编号 */
		while (client.acctNum != 0)							/* 当键盘输入的账户编号不为 0 时，则重复执行循环体，直至输入 0 为止 */
		{
			printf("Enter lastname, firstname, balance?\n");
			scanf("%s%s", client.lastName, client.firstName);
			scanf("%f", &bal);
			client.balance = bal;							/* 从键盘输入除了账户编号以外的其他账户信息 */
			fseek(fp, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);		/* 定位到当前要写入数据的位置 */
			fwrite(&client, sizeof(struct clientData), 1, fp);							/* 将一个账户的结构体类型数据写入到 fp 所指向的文件 */
			printf("Enter account number(1 to 100, 0 to end input)\n");
			scanf("%d", &client.acctNum);					/* 从键盘输入下一个账户编号 */
		}
		fclose(fp);											/* 关闭 fp 所指向的文件 */
	}

	return 0;
}