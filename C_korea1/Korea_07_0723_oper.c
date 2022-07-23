#include <stdio.h>
void main7()
{

	// +, -, *, / : 사칙연산
	// = : 대입연산자
	
	// 비교연산자
	// 같다 : ==
	// 다르다 : !=
	// 왼쪽이 크다 : >
	// 왼쪽이 작다 : <
	// 왼쪽이 크거나 같다 : >=
	// 왼쪽이 작거나 같다 : <=

	//비교연산자의 결과는 틀리면 0, 맞으면 0 이외의 값이 나온다(대표적으로 1)

	int result1 = 1 == 1;
	int result2 = 2 != 1;
	int result3 = 1 > 2;
	int result4 = 1 < 2;
	int result5 = 1 >= 1;
	int result6 = 1 <= 2;

	printf("%d \n", result1);
	printf("%d \n", result2);
	printf("%d \n", result3);
	printf("%d \n", result4);
	printf("%d \n", result5);
	printf("%d \n", result6);
}