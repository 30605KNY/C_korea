#include <stdio.h>
void main5()
{

	// �񱳿�����
	printf("%d \n", 1 == 2);
	printf("%d \n", 1 != 2);
	printf("%d \n", 1 > 2);
	printf("%d \n", 1 < 2);
	printf("%d \n", 1 >= 2);
	printf("%d \n", 1 <= 2);

	// ���迬����
	printf("%d \n", 1 == 1 && 2 == 2);

	int age = 15;
	printf("%d \n", age < 20 && age >= 10);

	printf("%d \n", age < 20 || age >= 10);

	printf("%d \n", !(age < 20));

}