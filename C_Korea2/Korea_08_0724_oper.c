#include <stdio.h>
void main7()
{

		int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
		char name[50];

		// �н��� : ��Ģ����
		// �̸��� �Է��ϼ���

		printf("�̸��� �Է��ϼ��� >> ");
		scanf("%s", &name);
		printf("%s ���� �н����Դϴ�. ������ Ǯ���ּ���.\n", name);

		printf("\n���� 1.   1 + 1 = ");
		scanf("%d", &num1);
		(2 == num1) ? printf("�����Դϴ�. \n") : printf("�����Դϴ�. \n");

		printf("\n���� 2.   3 - 1 = ");
		scanf("%d", &num2);
		(2 == num2) ? printf("�����Դϴ�. \n") : printf("�����Դϴ�. \n");

		printf("\n���� 3.   3 �� 3 = ");
		scanf("%d", &num3);
		(9 == num3) ? printf("�����Դϴ�. \n") : printf("�����Դϴ�. \n");

		printf("\n���� 4.   10 �� 2 = ");
		scanf("%d", &num4);
		(5 == num4) ? printf("�����Դϴ�. \n") : printf("�����Դϴ�. \n");

}