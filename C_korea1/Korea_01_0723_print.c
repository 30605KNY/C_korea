#include <stdio.h>
void main2()
{
	//���� ����� �� ���� ������

	char name = 'C';	// ���� �������
	int number = 123;	// ���� �������
	float number2 = 3.14f;	// �Ҽ��� �ִ� ���� �������

	// ���� : �������
	// ���� ������ ���� ������� �̸� = ������ ��;

	printf("Hello %c \n",name);	// ���� ���
	printf("Hello %c \n", name);
	printf("Hello %c \n", name);
	printf("Hello %d \n", number);	//���� ���
	printf("Hello %f \n", number2);	//�Ҽ��� �ִ� ���� ���

	// %c : �ѱ���
	// %d : ����
	// %f : �Ҽ��� �ִ� ����
	// %s : ���� ����

}