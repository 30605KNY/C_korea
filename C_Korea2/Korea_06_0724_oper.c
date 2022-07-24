#include <stdio.h>
void main5()
{

	// 비교연산자
	printf("%d \n", 1 == 2);
	printf("%d \n", 1 != 2);
	printf("%d \n", 1 > 2);
	printf("%d \n", 1 < 2);
	printf("%d \n", 1 >= 2);
	printf("%d \n", 1 <= 2);

	// 관계연산자
	printf("%d \n", 1 == 1 && 2 == 2);

	int age = 15;
	printf("%d \n", age < 20 && age >= 10);

	printf("%d \n", age < 20 || age >= 10);

	printf("%d \n", !(age < 20));

}