#include <stdio.h>
void main3()
{

	int num1 = 0, num2 = 0, num3=0, num4=0;
	char name[50];

	// �н��� : ��Ģ����
	// �̸��� �Է��ϼ���

	printf("�̸��� �Է��ϼ��� >> ");
	scanf("%s", &name);
	printf("%s ���� �н����Դϴ�. ������ Ǯ���ּ���.\n", name);
	
	printf("\n���� 1.   1 + 1 = ");
	scanf("%d", &num1);
	
	printf("\n���� 2.   3 - 1 = ");
	scanf("%d", &num2);
	
	printf("\n���� 3.   3 �� 3 = ");
	scanf("%d", &num3);
	
	printf("\n���� 4.   10 �� 2 = ");
	scanf("%d", &num4);
	

	printf("\n1 + 1 = %d\n", num1);
	printf("3 - 1 = %d\n", num2);
	printf("3 �� 3 = %d\n", num3);
	printf("10 �� 2 = %d\n", num4);

}