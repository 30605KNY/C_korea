#include <stdio.h>
void main6()
{

	// operation : 연산
	// 숫자끼리는 계산이 가능합니다.

	//사칙연산
	int result1 = 1 + 1;	//더하기
	int result2 = 1 - 1;	//빼기
	int result3 = 2 * 2;	//곱하기
	int result4 = 4 / 2;	//나누기

	printf("%d \n", result1);
	printf("%d \n", result2);
	printf("%d \n", result3);
	printf("%d \n", result4);

	int result5 = result1 + result4;
	printf("%d \n", result5);

	// ctrl + z = 되돌리기
	// ctrl + y = 되돌리기 취소
	// ctrl + d = 복붙
	// alt + 위 = 코드 위로 이동

	// = : 수학 x, 프로그래밍에서의 대입
	// 오른쪽에 있는 값을 왼쪽에 있는 저장공간에 담는다.

	result5 = result5;		// 왼쪽은 result5공간, 오른쪽은 4
	result1 = result5;		// 왼쪽은 공간, 오른쪽은 안에 들어있는 값

	printf("result1의 값은 %d \n", result1);

	result5 = result1 + result4;
	result5 = 10;		//대입을 하면 안에 있는 값을 없애고 덮어씀

}