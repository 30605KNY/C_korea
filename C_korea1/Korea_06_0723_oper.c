#include <stdio.h>
void main6()
{

	// operation : ����
	// ���ڳ����� ����� �����մϴ�.

	//��Ģ����
	int result1 = 1 + 1;	//���ϱ�
	int result2 = 1 - 1;	//����
	int result3 = 2 * 2;	//���ϱ�
	int result4 = 4 / 2;	//������

	printf("%d \n", result1);
	printf("%d \n", result2);
	printf("%d \n", result3);
	printf("%d \n", result4);

	int result5 = result1 + result4;
	printf("%d \n", result5);

	// ctrl + z = �ǵ�����
	// ctrl + y = �ǵ����� ���
	// ctrl + d = ����
	// alt + �� = �ڵ� ���� �̵�

	// = : ���� x, ���α׷��ֿ����� ����
	// �����ʿ� �ִ� ���� ���ʿ� �ִ� ��������� ��´�.

	result5 = result5;		// ������ result5����, �������� 4
	result1 = result5;		// ������ ����, �������� �ȿ� ����ִ� ��

	printf("result1�� ���� %d \n", result1);

	result5 = result1 + result4;
	result5 = 10;		//������ �ϸ� �ȿ� �ִ� ���� ���ְ� ���

}