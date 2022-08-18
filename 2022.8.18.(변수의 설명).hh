#include <stdio.h>
void main()
{
	// 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로 수행하는 명령문입니다.

	// 증감 연산자란?
	/*
	// 피연산자를 하나씩 증가시키거나 감소시킬 때 사용하는 연산자입니다.

	// 전위 (증가, 감소)
	// 변수의 값을 증감시킨 후에 연산을 수행합니다.

	int value = 0;

	int result = ++value;

	printf("value 변수의 전위 증가한 값 : %d\n", result);

	// 후위 (증가, 감소)
	// 연산을 수행한 후에 변수의 값을 증가시킵니다.

	result = value++;

	printf("value 변수의 후위 증가한 값 : %d", result);

	printf("result의 결과 : %d", value);
	*/

	// for문
	
	// 초기식을 연산하여 조건식의 결과에 따라 특정한 횟수만큼 반복하는 반복문입니다.

	// 안녕하세요? 를 5번 출력해주세요.

	// 1. 초기식 (i = 0)
	// 2. 조건식 (i가 5보다 작을 때)
	// 3. 실행하고 싶은 명령문 (printf("안녕하세요?"))
	// 4. 증감식 (i++)

	for (int i = 0; i > 10; i++)
	{
		printf("안녕하세요?\n");
	}

	// for문을 이용해서 순차적으로 증가하는 초기식의 값을 출력해주세요.
	// 초기식이 5 ~ 1 까지의 수를 출력해주세요.
	for (int i = 5; i >= 1; i--)
	{
		printf("%d\n", i);
	}
	

	// 약수
	// 어떤 수를 나누어 떨어지게하는 수입니다.
	/*
	int value = 6;

	for (int i = 1; i <= value; i++)

	{
		if (value % i == 0)
		{
			printf("%d\n", i);
		}
	}
	*/

	// 2중 for문
	/*
	for (int i = 0; i < 3; i++)
	{
		printf("주황색.\n");

		for (int j = 0; j < 3; j++)
		{
			printf("검은색.\n");
		}
	}
	*/

	// while 문이란?
	// 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 실행하는 반복문입니다.


	// do while 문이란?
	/*
	// 조건과 상관없이 한 번의 작업을 수행한 다음 조건에 따라 명령문을 실행하는 반복문입니다.

	int value = 5;

	do
	{    
	    // do에서 선언한 변수는 while의 조건으로 사용할 수 없습니다.
		// int x = 10;
		printf("조건이 거짓입니다.");
	}
	while (value == 10);
	*/

	// continue 문이란?
	/*
	// 해당 조건문만 실행하지 않고, 반복문은 이어서 실행하는 제어문입니다.
	// 1 ~ 10까지의 수를 출력하는데 3의 배수만 제외하고 출력해주세요.
	for (int i = 0; i < 5; i++)
	{
		if (i % 3 == 0)
			continue;

		printf("%n", i);
	}
	*/

	// 형 변환이란?
	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이 이루어질 때 기존에 지정했던 자료형을 다른 자료형으로 변환하는 과정입니다.
	// C언어에서는 정수와 정수를 연산하게 되면 무조건 정수의 값만 가질 수 있습니다.

	// 암묵적 형 변환
	/*
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의 크기가 큰 자료형으로 변환되는 과정입니다.

	int value;

	printf("char의 크기 : %d\n", sizeof(char));
	printf("short의 크기 : %d\n", sizeof(short));
	printf("int의 크기 : %d\n", sizeof(value));
	printf("long의 크기 : %d\n", sizeof(long));
	printf("float의 크기 : %d\n", sizeof(float));
	*/

	char x = 10;
	short y = 20;

	// 30 = 4 byte (int) + 4 byte (int)
	int sum = x + y;

	int z = 500; // [] [] [] []
	char temp = z; // []
	/*
	printf("temp의 값 : %d", temp);
	*/

	// 명시적 형 변환
	/*
	int p0 = 10; 
	int p1 = 3;

	// result <- p0 float / p1 float
	float result = (float)p0 / p1;
	printf("result의 값 : %f", result);

	// int와 long의 차이
	// int는 32비트 운영체제와 64비트 운영체제에서도 4 byte의 크기를 가집니다.
	// long은 32비트 운영체제에서는 4 byte이고 64비트 운영체제에서는 8 byte의 크기를 가집니다.
	// 단, long도 윈도우즈 64비트 운영체제에서는 4 byte입니다.

	}
	*/