//basictype.c : �� ������ ��, �� �Ǽ��� �� ���

#include <stdio.h>

int main(void)
{
	int a = 30, b = 43; //�� ���� ����� �ʱⰪ ����
	int sum;
	sum = a+b; //�� ������ �� ���ϱ�

	double x = 38.342, y = 45.345;	//�� �Ǽ� ����� �ʱⰪ ����
	double difference;	//�� �Ǽ��� ���� ������ ���� ����
	difference = x-y;	//�� �Ǽ��� �� ���ϱ�

	printf("��: %d \n", sum);	//�� ������ �� ���
	printf("��: %f \n", difference);	//�� ������ �� ���


		return 0;
}