#include <stdio.h>
void main7()
{

		int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
		char name[50];

		// 학습지 : 사칙연산
		// 이릅을 입력하세요

		printf("이름을 입력하세요 >> ");
		scanf("%s", &name);
		printf("%s 님의 학습지입니다. 문제를 풀어주세요.\n", name);

		printf("\n문제 1.   1 + 1 = ");
		scanf("%d", &num1);
		(2 == num1) ? printf("정답입니다. \n") : printf("오답입니다. \n");

		printf("\n문제 2.   3 - 1 = ");
		scanf("%d", &num2);
		(2 == num2) ? printf("정답입니다. \n") : printf("오답입니다. \n");

		printf("\n문제 3.   3 × 3 = ");
		scanf("%d", &num3);
		(9 == num3) ? printf("정답입니다. \n") : printf("오답입니다. \n");

		printf("\n문제 4.   10 ÷ 2 = ");
		scanf("%d", &num4);
		(5 == num4) ? printf("정답입니다. \n") : printf("오답입니다. \n");

}