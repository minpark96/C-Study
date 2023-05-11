#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma region 야구게임

#define MAX_NUM 9
#define MIN_NUM 1

int main()
{
	int inputNum[3] = { 0, -1, -2 };
	int randNum[3];
	int exeCount = 1;
	int strikeCount = 0;
	int ballCount = 0;
	int isHomerun = 0;

	// 1 ~ 9  사이 랜덤값 생성
	for (int idx = 0; idx < 3; idx++)
	{
		srand(time(NULL));
		randNum[idx] = rand() % 9 + 1;

		// 중복 체크
		for (int i = 0; i < idx; i++)
		{
			if (randNum[i] == randNum[idx])
			{
				idx--;
				break;
			}
		}
	}

	// 검증용
	printf("정답 : ");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", randNum[i]);
	}
	printf("\n");

	// 입력 및 홈런 판별 및 출력
	while (!isHomerun)
	{
		printf("%d >> ", exeCount);
		// 숫자 입력 받기
		for (int idx = 0; idx < 3; idx++)
		{
			scanf("%d", &inputNum[idx]);

			if (inputNum[idx] > MAX_NUM || inputNum[idx] < MIN_NUM)
			{
				exeCount++;
				printf("%d ~ %d 사이의 값이 아닙니다. 재입력 하세요!\n", MIN_NUM, MAX_NUM);
				printf("%d >> ", exeCount);
				while (getchar() != '\n') {} // 버퍼 초기화
				for (int i = 0, j = 0; j < 3; i--, j++) // 입력 배열 초기화
				{
					inputNum[j] = i;
				}
				idx = -1;
				continue;
			}

			for (int i = 0; i < idx; i++)
			{
				if (inputNum[i] == inputNum[idx])
				{
					exeCount++;
					printf("중복 숫자가 있습니다. 재입력 하세요!\n");
					printf("%d >> ", exeCount);
					while (getchar() != '\n') {} // 버퍼 초기화
					for (int i = 0, j = 0; j < 3; i--, j++) // 입력 배열 초기화
					{
						inputNum[j] = i;
					}
					idx = -1;
					break;
				}
			}
		}

		// 정답 체크
		for (int idxRand = 0; idxRand < 3; idxRand++)
		{
			for (int idxInput = 0; idxInput < 3; idxInput++)
			{
				if (inputNum[idxInput] == randNum[idxRand])
				{
					if (idxInput == idxRand)
						strikeCount++;
					else
						ballCount++;
				}
			}
		}
		
		if (strikeCount == 3) // 홈런
		{
			printf(" -> HR\n");
			isHomerun ^= 1;
		}
		else
		{
			if (strikeCount == 0 && ballCount == 0) // 아웃
				printf(" -> out\n");
			else // 볼 or 스트라이크
				printf(" -> %ds %db\n", strikeCount, ballCount); 

			for (int i = 0, j = 0; j < 3; i--, j++) // 입력 배열 초기화
			{
				inputNum[j] = i;
			}

			strikeCount = 0;
			ballCount = 0;
			exeCount++;
		}
	}

	return 0;
}

#pragma endregion

/*void swap_ptr(char** ppa, char** ppb);

int main()
{
	int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("------------------------------------------------------------------------\n");
	printf("변수       변숫값      &연산        *연산       **연산\n");
	printf("------------------------------------------------------------------------\n");
	printf("     a%10d%10u\n", a, &a);
	printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("------------------------------------------------------------------------\n");*/

	/*char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);

	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}*/

#pragma region 연습문제

//void MaxAndMin(int** ptrMax, int** ptrMin, int* ptrArr);
//
//int main()
//{
//	int* maxPtr;
//	int* minPtr;
//	int arr[5];
//
//	printf("숫자 5개 입력\n");
//	// 입력
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	MaxAndMin(&maxPtr, &minPtr, arr);
//
//	printf("arr 주소 : %p, &arr 주소 : %p, maxPtr 주소 : %p, minPtr 주소 : %p\n", arr, &arr, maxPtr, minPtr);
//	printf("maxPtr 주소에 저장된 값: %d\n", *maxPtr);
//	printf("minPtr 주소에 저장된 값: %d\n", *minPtr);
//
//	return 0;
//}
//

//
//void MaxAndMin(int** ptrMax, int** ptrMin, int* ptrArr)
//{
//	*ptrMax = ptrArr;
//	*ptrMin = ptrArr;
//
//	for (int i = 1; i < 5; i++)
//	{
//		if (ptrArr[i] > **ptrMax)
//		{
//			*ptrMax = &ptrArr[i];
//		}
//
//		if (ptrArr[i] < **ptrMin)
//		{
//			*ptrMin = &ptrArr[i];
//		}
//	}
//}

#pragma endregion

//void func(int (*fp)(int, int));
//int sum(int a, int b);
//int mul(int a, int b);
//int max(int a, int b);
//
//int main(void)
//{
//	int sel;
//
//	printf("01 두 정수의 합\n");
//	printf("02 두 정수의 곱\n");
//	printf("03 두 정수에서 큰 값 계산\n");
//	printf("원하는 연산을 선택하세요 : ");
//	scanf("%d", &sel);
//
//	switch (sel)
//	{
//	case 1: func(sum); break;
//	case 2: func(mul); break;
//	case 3: func(max); break;
//	}
//
//	return 0;
//}
//
//void func(int (*fp)(int, int))
//{
//	int a, b;
//	int res;
//
//	printf("두 정수의 값을 입력하세요 : ");
//	scanf("%d%d", &a, &b);
//	res = fp(a, b);
//	printf("결괏값은 : %d\n", res);
//}
//
//int sum(int a, int b)
//{
//	return (a + b);
//}
//
//int mul(int a, int b)
//{
//	return (a * b);
//}
//
//int max(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}

//void swap(char* type, void* vp1, void* vp2);
//
//int main()
//{
//	int age1, age2;
//	double height1, height2;
//
//	printf("첫 번째 사람의 나이와 키 입력 : ");
//	scanf("%d%lf", &age1, &height1);
//	printf("두 번째 사람의 나이와 키 입력 : ");
//	scanf("%d%lf", &age2, &height2);
//
//	swap("int", &age1, &age2);
//	swap("double", &height1, &height2);
//
//	printf("첫 번째 사람의 나이와 키 : %d, %.1lf\n", age1, height1);
//	printf("두 번째 사람의 나이와 키 : %d, %.1lf\n", age2, height2);
//
//	return 0;
//}
//
//void swap(char* type, void* vp1, void* vp2)
//{
//	if (!strcmp("int", type))
//	{
//		int itemp = 0;
//		itemp = *(int*)vp1;
//		*(int*)vp1 = *(int*)vp2;
//		*(int*)vp2 = itemp;
//	}
//	else if (!strcmp("double", type))
//	{
//		double dtemp = 0.0;
//		dtemp = *(double*)vp1;
//		*(double*)vp1 = *(double*)vp2;
//		*(double*)vp2 = dtemp;
//	}
//	else
//		;
//}

//int main(void)
//{
	//int* pi;
	//double* pd;

	//pi = (int*)malloc(sizeof(int));
	//memset(pi, 0, sizeof(int)); // 특정 값으로 초기화

	//int *pi2 = calloc(5, sizeof(int)); // 자동으로 0

	//realloc(pi2, sizeof(int) * 10);

	//if (pi == NULL)
	//{
	//	printf("# 메모리가 부족합니다.\n");
	//	exit(1);
	//}
	//pd = (double*)malloc(sizeof(double));

	//*pi = 10;
	//*pd = 3.4;

	//printf("정수형으로 사용 : %d\n", *pi);
	//printf("실수형으로 사용 : %.1lf\n", *pd);

	//free(pi);
	//free(pd);
//	
//	int* pi;
//	int size = 5;
//	int count = 0;
//	int num;
//	int i;
//
//	pi = (int*)calloc(size, sizeof(int));
//	while (1)
//	{
//		printf("양수만 입력하세요 => ");
//		scanf("%d", &num);
//		if (num <= 0) break;
//		if (count == size)
//		{
//			size += 5;
//			pi = (int*)realloc(pi, size * sizeof(int));
//		}
//		pi[count++] = num;
//	}
//	for (i = 0; i < count; i++)
//	{
//		printf("%5d", pi[i]);
//
//	}
//	free(pi);
//	
//	return 0;
//}

#pragma region 연습 문제

//#define MAX_SIZE 100
//
//int main()
//{
//	char* ptrInput = (char*)calloc(MAX_SIZE, sizeof(char));
//	char* ptrOutput = (char*)calloc(MAX_SIZE, sizeof(char));
//	char* ptrTarget = (char*)calloc(MAX_SIZE, sizeof(char));
//
//	if (ptrInput == NULL)
//	{
//		printf("메모리 할당 실패!\n");
//		exit(1);
//	}
//	if (ptrOutput == NULL)
//	{
//		printf("메모리 할당 실패!\n");
//		exit(1);
//	}
//	if (ptrTarget == NULL)
//	{
//		printf("메모리 할당 실패!\n");
//		exit(1);
//	}
//	// Target설정 후 문자열 크기 만큼 재할당
//	strcpy(ptrTarget, "Quit");
//	ptrTarget = (char*)realloc(ptrTarget, (strlen(ptrTarget) + 1) * sizeof(char)); 
//
//	while (strcmp(ptrTarget, ptrInput)) // Target을 입력 받을때까지 진행
//	{
//		printf("입력 > ");
//
//		fgets(ptrInput, MAX_SIZE, stdin); // 문자열 입력
//		ptrInput[strlen(ptrInput) - 1] = '\0'; // 개행문자 제거
//		// 입력 받은 문자열 사이즈 만큼 재할당
//		ptrInput = (char*)realloc(ptrInput, (strlen(ptrInput) + 1) * sizeof(char)); 
//		ptrOutput = (char*)realloc(ptrOutput, (strlen(ptrInput) + 1) * sizeof(char));
//
//		printf("출력 > ");
//		// 끝부터 " " 공백을 만날때까지 탐색
//		for (int idx = strlen(ptrInput) - 1, count = 1; idx > -1; idx--, count++) 
//		{
//			if (idx == 0) // 첫문자까지 탐색을 완료했을 때
//			{
//				strncpy(ptrOutput, ptrInput + idx, count);
//				printf("%s", ptrOutput);
//			}
//			else
//			{
//				if (ptrInput[idx - 1] == ' ') // 다음 인덱스가 공백인 경우
//				{
//					// 현재까지 문자를 출력 포인터에 길이만큼 복사
//					strncpy(ptrOutput, ptrInput + idx, count); 
//					printf("%s", ptrOutput); // 복사한 것을 출력
//					printf(" "); // 다음 공백 출력
//					count = -1; // 다음 문자가 공백이므로 count는 -1로 초기화
//					// 출력 포인터 초기화
//					memset(ptrOutput, 0, (strlen(ptrInput) + 1) * sizeof(char)); 
//				}
//			}
//		}
//		printf("\n");
//		
//		if (strcmp(ptrTarget, ptrInput)) // 입력문자가 Target이 아닐 시
//		{
//			// 최대 사이즈까지 재조정
//			ptrInput = (char*)realloc(ptrInput, MAX_SIZE * sizeof(char)); 
//			ptrOutput = (char*)realloc(ptrOutput, MAX_SIZE * sizeof(char));
//			memset(ptrInput, 0, MAX_SIZE * sizeof(char)); // 0으로 초기화
//			memset(ptrOutput, 0, MAX_SIZE * sizeof(char));
//		}
//	}
//
//	printf("프로그램을 종료합니다.\n");
//	free(ptrInput); // 메모리 반환
//	free(ptrOutput);
//	free(ptrTarget);
//
//	return 0;
//}

#pragma endregion
