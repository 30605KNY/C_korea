#include <stdio.h>
void main4()
{

	int num = 0;

	//대입
	num = 3;

	//연산 후 대입
	num = 3 + 5;

	printf("%d\n", num);

	// 내가 갖고 있는 값에서 5를 더한다.(누적연산자)
	num = 3;
	num = num + 5;
	printf("%d \n", num);

	num = 3;
	num += 5;
	num -= 2;
	num *= 2;
	num /= 3;

}