#include <stdio.h>
void main2()
{

	int 숫자;
	//char 문자 = 'A';
	char 문자열[100];
	float 실수;

	//입력
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &숫자);

	printf("문자열을 입력하세요 : ");
	scanf("%s", &문자열);

	printf("실수를 입력하세요 : ");
	scanf_s("%f", &실수);

	//출력
	printf("\n");
	printf("당신이 입력한 숫자는 %d 입니다. \n", 숫자);
	printf("당신이 입력한 문자열은 %s 입니다. \n", 문자열);
	printf("당신이 입력한 실수는 %f 입니다. \n", 실수);

}