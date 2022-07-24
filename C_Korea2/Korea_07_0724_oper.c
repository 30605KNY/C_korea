#include <stdio.h>
void main6()
{

	// 삼항 연산자 : 조건에 따라서 동작을 다르게
	// 비교연산자 ? 맞을때 : 틀릴때;

	(1 == 1) ? printf("1은 1과 같다. \n") : printf("1은 1과 다르다 \n");

	int age = 18;
	(age >= 20) ? printf("성인입니다. \n") : printf("미성년자입니다. \n");

}