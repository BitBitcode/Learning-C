//��C���Դ����ŵ���ͨ��P91
// ������ ˳����ѡ��ṹ�������
// 3.6 ���䷶��
// 28�����乫˾�ļƷ�

// ��ĿҪ��
// < 25 km��û���ۿ�
// 25~50 km��5% �ۿ�
// 50~100 km��10% �ۿ�
// 100~200 km��15% �ۿ�
// 200~300 km��20% �ۿ�
// > 300 km��30% �ۿ�
// һ�ɰ���߱�������

#include<stdio.h>

int main()
{
	int m;				// �ʼķ�ʽ

	float price;		// ����
	float weight;		// ����
	int length;			// ·��

	float origin_price;	// ԭ��
	float discount;		// �ۿ�
	float total;		// �ܼ�
	
	printf("��ѡ���ʼķ�ʽ��1��ƽ�ʣ�15/kg����2�����մ20/kg����3�����մ30/kg�� \n");
	scanf_s("%d", &m);

	printf("���������������kg����\n");
	scanf_s("%f", &weight);

	printf("�������ʼľ��룬�������룬����һ���ﰴһ�����㣨km����\n");
	scanf_s("%d", &length);

	switch (m)
	{
	case 1:
		price = 15;
		break;
	case 2:
		price = 20;
		break;
	case 3:
		price = 30;
		break;
	}
	
	origin_price = price * weight * length;
	printf("����ǰ������Ϊ��%f�������ۿۣ�\n", origin_price);

	if (length < 25)
	{
		discount = 1.00;
		printf("��ǰ����û���Żݣ�\n");
	}
	else if (length >= 25 && length < 50)
	{
		discount = 0.95;
		printf("��ǰ�����Żݣ�9.5�ۣ�\n");
	}
	else if (length >= 59 && length < 100)
	{
		discount = 0.90;
		printf("��ǰ�����Żݣ�9�ۣ�\n");
	}
	else if (length >= 100 && length < 200)
	{
		discount = 0.85;
		printf("��ǰ�����Żݣ�8.5�ۣ�\n");
	}
	else if (length >= 200 && length < 300)
	{
		discount = 0.80;
		printf("��ǰ�����Żݣ�8�ۣ�\n");
	}
	else if (length >= 300)
	{
		discount = 0.70;
		printf("��ǰ�����Żݣ�7�ۣ�\n");
	}
	else
	{
		printf("·�̴����������룡\n");
	}

	total = origin_price * discount;
	printf("�ۺ�۸�Ϊ��%f \n", total);

	return 0;
}
