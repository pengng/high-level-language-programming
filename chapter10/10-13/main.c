#include<stdio.h>
#include<stdlib.h>

struct clientData											/* ����ṹ������ */
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

	if ((fp = fopen("client.dat", "rb+")) == NULL)			/* �Զ�/д��ʽ�򿪶������ļ� */
	{
		printf("can't open file\n");
		exit(1);
	}
	else
	{
		printf("Enter account number(1 to 100, 0 to end input)\n");
		scanf("%d", &client.acctNum);						/* �Ӽ��������˻���� */
		while (client.acctNum != 0)							/* ������������˻���Ų�Ϊ 0 ʱ�����ظ�ִ��ѭ���壬ֱ������ 0 Ϊֹ */
		{
			printf("Enter lastname, firstname, balance?\n");
			scanf("%s%s", client.lastName, client.firstName);
			scanf("%f", &bal);
			client.balance = bal;							/* �Ӽ�����������˻��������������˻���Ϣ */
			fseek(fp, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);		/* ��λ����ǰҪд�����ݵ�λ�� */
			fwrite(&client, sizeof(struct clientData), 1, fp);							/* ��һ���˻��Ľṹ����������д�뵽 fp ��ָ����ļ� */
			printf("Enter account number(1 to 100, 0 to end input)\n");
			scanf("%d", &client.acctNum);					/* �Ӽ���������һ���˻���� */
		}
		fclose(fp);											/* �ر� fp ��ָ����ļ� */
	}

	return 0;
}