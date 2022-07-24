#include <stdio.h>
void main3()
{

	int num1 = 0, num2 = 0, num3=0, num4=0;
	char name[50];

	// 학습지 : 사칙연산
	// 이릅을 입력하세요

	printf("이름을 입력하세요 >> ");
	scanf("%s", &name);
	printf("%s 님의 학습지입니다. 문제를 풀어주세요.\n", name);
	
	printf("\n문제 1.   1 + 1 = ");
	scanf("%d", &num1);
	
	printf("\n문제 2.   3 - 1 = ");
	scanf("%d", &num2);
	
	printf("\n문제 3.   3 × 3 = ");
	scanf("%d", &num3);
	
	printf("\n문제 4.   10 ÷ 2 = ");
	scanf("%d", &num4);
	

	printf("\n1 + 1 = %d\n", num1);
	printf("3 - 1 = %d\n", num2);
	printf("3 × 3 = %d\n", num3);
	printf("10 ÷ 2 = %d\n", num4);

}