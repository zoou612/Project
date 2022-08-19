#include <stdio.h>
// scanf를 쓰고 싶을 때 전처리기로 Erorr 코드 4996을 비활성화합니다.
#pragma warning(disable:4996)

void main()
{
	// scanf 함수
	int value = 50;

	for (int i = 0; i < 5; i++)
	{
		// 버퍼 오버플로에 대한 문제점 때문에 scanf_s를 사용하도록 권장합니다.
		scanf_s("%d", &value);
		printf("value의 값 : %d", value);
	}

}
