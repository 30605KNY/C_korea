#include <stdio.h>
void main8()
{

	int result1 = 3 - 5;
	printf("3 - 5 = %d \n", result1);

	int a = 1 + 1;
	int b = 2 - 1;
	int c = 3 * 3;
	int d = 10 / 2;
	float e = 10.0 / 3.0;

	printf("1 + 1 = %d \n", a);
	printf("2 - 1 = %d \n", b);
	printf("3 * 3 = %d \n", c);
	printf("10 / 2 = %d \n", d);
	printf("10.0 / 3.0 = %.2f \n", e);

	// % : ������ ���ϱ�
	int f = 10 % 3;

	printf("10�� 3���� ���� �������� %d�Դϴ�. \n", f);

	// ����� ���ҋ�, Ȧ¦�� ������ �� ���
	// 3�� ��� == 3���� ���� �������� 0

	printf("3�� ����� %d�� 0�� ���� \n", f);

	int num = 3;
	printf("num�� Ȧ���� 1, ¦���� 0 >> %d \n", num%2);

}