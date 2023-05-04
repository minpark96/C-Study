#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

#pragma region 연습 문제1

	/*int inputM, inputN;

	printf(" 1이상 100미만인 정수 m과 n을 입력하세요 : ");
	scanf("%d%d", &inputM, &inputN);

	printf(" 결과 :");
	for (int i = 1; i <= 100; i++)
	{	
		if ((i % inputM == 0) || (i % inputN == 0))
		{
			printf("%d ", i);
		}
	}*/

#pragma endregion


#pragma region 연습 문제2

	/*int inputN;
	int i = 1;

	while (1)
	{
		printf(" N을 입력하세요 : ");
		scanf("%d", &inputN);

		if (inputN < 1)
		{
			printf("1 이상 값을 입력하세요!\n\n");
			continue;
		}

		for (; i <= inputN; i++)
		{
			printf(" ");

			for (int j = 1; j <= i; j++)
			{
				printf("*");
			}

			printf("\n");
		}

		for (int k = 1; k <= inputN; k++)
		{
			printf(" ");

			for (int j = 1; j <= inputN; j++)
			{
				if((inputN - k) >= j)
					printf(" ");
				else
					printf("*");
			}

			printf("\n");
		}

		if (i == inputN + 1)
			break;
	}*/

#pragma endregion

#pragma region 연습 문제3

	/*int inputN;

	printf(" N을 입력하세요 : ");
	scanf("%d", &inputN);

	for (int i = 0; i < inputN; i++)
	{
		for (int j = 0; j < inputN; j++)
		{
			if (i == j)
			{
				printf("*");
			}
			else if (i + j == inputN - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}


		}

		printf("\n");
	}*/

#pragma endregion

#pragma region 연습 문제4

	/*int inputN;

	printf(" N을 입력하세요 : ");
	scanf("%d", &inputN);

	for (int i = 0; i < inputN; i++)
	{
		for (int j = 0; j < inputN; j++)
		{
			if (i >= j && inputN - 1 >= i + j)
			{
				printf("*");
			}
			else if (j >= i && i + j >= inputN - 1)
			{
				printf("*");
			}
			else
				printf(" ");

		}

		printf("\n");
	}*/

#pragma endregion

#pragma region 연습 문제5

	int inputN;
	const int MAX_COLUMNS = 5, NUM_START = 2, NUM_END = 18;

	printf(" N을 입력하세요 (%d이상 ~ %d이하) : ", NUM_START, NUM_END);
	scanf("%d", &inputN);

	if (inputN < NUM_START || inputN > NUM_END) // 입력 예외 처리
	{
		printf(" %d이상 ~ %d이하 값을 입력하세요! ", NUM_START, NUM_END);
		return 0;
	}

	printf("\n 한 라인에 출력할 수 있는 단 수 : %d / 시작 단 : %d / 최대 계산 가능한 단 : %d\n\n", MAX_COLUMNS, NUM_START, NUM_END);

	for (int m = 0; m < MAX_COLUMNS - 1; m++) // MAX_COLUMNS - 1번 만큼 타이틀 옆 공백 출력
	{
		printf("         ");
	}

	printf("구 구 단\n");

	for (int i = NUM_START; i <= inputN; i += MAX_COLUMNS) // i => MAX_COLUMNS씩 증가
	{
		for (int n = 0; n < MAX_COLUMNS; n++)  // MAX_COLUMNS번 만큼 "-" 묶음 출력
		{
			printf("-----------------");
		}

		printf("\n");

		for (int j = 1; j < 10; j++) // 1 ~ 9까지 행 출력 => 구구단
		{

			for (int k = i; k < i + MAX_COLUMNS; k++) // 마지막 줄 제외 MAX_COLUMNS번 만큼 열 출력
			{
				if (k <= inputN) // 마지막인지 체크
					printf("%2d  x %2d = %3d   ", k, j, k * j);
			}

			printf("\n");
		}
	}
	

	
#pragma endregion



	return 0;
}