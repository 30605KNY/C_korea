#include <stdio.h>
void main1()
{

	// 출력 : printf
	// 입력 : scanf
	// 보안검사 해제를 위해 sdl 검사를 '아니오'
	// 상단의 프로젝트 -> 속성 -> C/C++ -> sdl검사 '아니오'

	// 입력을 위해선 입력한 값을 저장해놓을 공간이 필요합니다 (변수)
	int num = 0;

	printf("%d \n", num);		// 출력

	//입력
	printf("숫자를 입력하세요 >> ");
	scanf("%d", &num);
	printf("내가 입력한 값은 : %d \n", num);

}