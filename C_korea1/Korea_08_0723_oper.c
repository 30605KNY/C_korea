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

	// % : 나머지 구하기
	int f = 10 % 3;

	printf("10을 3으로 나눈 나머지는 %d입니다. \n", f);

	// 배수를 구할떄, 홀짝을 구분할 때 사용
	// 3의 배수 == 3으로 나눈 나머지가 0

	printf("3의 배수면 %d는 0과 같다 \n", f);

	int num = 3;
	printf("num이 홀수면 1, 짝수면 0 >> %d \n", num%2);

}