#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#pragma region 배열
//int main()
//{
//	int ary[5];
//
//	ary[0] = 10;
//	ary[1] = 20;
//	ary[2] = ary[0] + ary[1];
//	ary[4] = 100;
//	scanf("%d", &ary[3]);
//
//	printf("%d\n", ary[2]);
//	printf("%d\n", ary[3]);
//	printf("%d\n", ary[4]);
//
//	int score[5];
//	int i;
//	int total = 0;
//	double avg;
//	int count;
//
//	count = sizeof(score) / sizeof(score[0]);
//
//	for (i = 0; i < count; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	for (i = 0; i < count; i++)
//	{
//		total += score[i];
//	}
//	avg = total / (double)count;
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%5d", score[i]);
//	}
//	printf("\n");
//
//	printf("평균 : %.1f\n", avg);
//
//
//	return 0;
//}
#pragma endregion



#pragma region 연습문제
//void GetInt(int ary[], int size);
//void PrintResult(int max, int min, int sum);
//int Max(int ary[], int size);
//int Min(int ary[], int size);
//int Sum(int ary[], int size);
//
//int main()
//{
//	int ary[5];
//	int count = sizeof(ary) / sizeof(ary[0]);
//
//	GetInt(ary, count);
//
//	PrintResult(Max(ary, count), Min(ary, count), Sum(ary, count));
//
//	return 0;
//
//}
//
//void GetInt(int ary[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		scanf("%d", &ary[i]);
//	}
//}
//
//void PrintResult(int max, int min, int sum)
//{
//	printf("max:%d, min:%d, sum:%d", max, min, sum);
//}
//
//int Max(int ary[], int size)
//{
//	int max = ary[0];
//
//	for (int i = 0; i < size; i++)
//	{
//		if (ary[i] > max)
//			max = ary[i];
//	}
//	return max;
//}
//
//int Min(int ary[], int size)
//{
//	int min = ary[0];
//
//	for (int i = 0; i < size; i++)
//	{
//		if (ary[i] < min)
//			min = ary[i];
//	}
//	return min;
//}
//
//int Sum(int ary[], int size)
//{
//	int sum = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		sum += ary[i];
//	}
//	return sum;
//}
#pragma endregion

//int main()
//{
//	char str[80];
//	char str1[80] = "applejam";
//	char str2[80];
//
//	/*scanf("%s", str);
//
//	printf("%s\n", str);
//	
//	for (int i = 0; i < 80; i++)
//	{
//		printf("%c", str[i]);
//
//	}*/
//
//	/*strcpy(str1, "tiger");
//	strcpy(str2, str1);
//	printf("%s, %s\n", str1, str2);*/
//
//	printf("문자열을 입력 : ");
//	gets(str);
//	printf("입력된 문자열 : ");
//	puts(str);
//
//
//	return 0;
//}


#pragma region 연습 문제
//void UpperCase(char str[], int size);
//void LowerCase(char str[], int size);
//
//int main()
//{
//	char str[100];
//
//	int size = sizeof(str) / sizeof(str[0]);
//
//	// 소->대
//	printf("(#소->대)문자열을 입력하세요 : ");
//	gets(str);
//
//	UpperCase(str, size);
//
//	printf("변환된 문자열 : ");
//	puts(str);
//
//	// 대->소
//	printf("(#대->소)문자열을 입력하세요 : ");
//	gets(str);
//
//	LowerCase(str, size);
//
//	printf("변환된 문자열 : ");
//	puts(str);
//
//	return 0;
//}
//
//void UpperCase(char str[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (str[i] == '\0')
//			break;
//
//		if (str[i] >= 97 && str[i] <= 122)
//			str[i] -= 32;
//	}
//}
//
//void LowerCase(char str[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (str[i] == '\0')
//			break;
//
//		if (str[i] >= 65 && str[i] <= 90)
//			str[i] += 32;
//	}
//}
#pragma endregion

#pragma region 연습문제

//void NeonSign(char str[], int size);
//
//int main()
//{
//	char str[102];
//	int size = sizeof(str) / sizeof(str[0]);
//	
//	printf("문자열을 입력하세요(최대 100자) : ");
//	fgets(str, sizeof(str), stdin);
//	// fgets '\n' 지우기 + 맨 뒤 한줄 띄우기
//	str[strlen(str) - 1] = ' ';
//	str[strlen(str)] = '\0';
//
//	NeonSign(str, size);
//
//	return 0;
//}
//
//void NeonSign(char str[], int size)
//{
//	const int sleepTime = 400;
//	char temp;
//
//	do
//	{
//		system("cls");
//		puts(str);
//		Sleep(sleepTime);
//
//		temp = str[0];
//
//		for (int i = 1; i < size + 1; i++)
//		{
//			if (str[i] == '\0')
//			{
//				str[i - 1] = temp;
//				break;
//			}
//			else
//				str[i - 1] = str[i];
//		}
//	} while (1);
//}

#pragma endregion


#pragma region 포인터
//int main()
//{
	/*int a;
	double b;
	char c;

	printf("int형 변수의 주소 : %u\n", &a);
	printf("double형 변수의 주소 : %u\n", &b);
	printf("char형 변수의 주소 : %u\n", &c);*/

	/*int a = 0;
	int* pA;
	int* pB;

	pA = &a;

	printf("%u\n", &a);
	printf("%x\n", &a);
	printf("%d\n", *pA);
	printf("%d\n", pA);

	scanf("%d", pA);

	printf("%d\n", a);*/

	/*int a = 10, b = 15, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);*/

	//return 0;
//}

//int main()
//{
//	char ch;
//	int in;
//	double db;
//
//	char* pc = &ch;
//	int* pi = &in;
//	double* pd = &db;
//
//	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
//	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
//	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));
//
//	printf("char * 포인터의 크기 : %d\n", sizeof(pc));
//	printf("int * 포인터의 크기 : %d\n", sizeof(pi));
//	printf("double * 포인터의 크기 : %d\n", sizeof(pd));
//
//	printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
//	printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
//	printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));
//
//	return 0;
//}
#pragma endregion

#pragma region 포인터 연습 문제

//int main()
//{
//	int num1 = 10, num2 = 20;
//	int* ptr1 = &num1, * ptr2 = &num2;
//	int* temp;
//
//
//	*ptr1 += 10;
//	*ptr2 -= 10;
//
//	temp = ptr1;
//	ptr1 = ptr2;
//	ptr2 = temp;
//
//	printf("ptr1이 가리키는 변수의 값 : %d\n", *ptr1);
//	printf("ptr2이 가리키는 변수의 값 : %d\n", *ptr2);
//	printf("num1에 저장된 값 : %d\n", num1);
//	printf("num2에 저장된 값 : %d\n", num2);
//	
//	return 0;
//}
	
#pragma endregion

#pragma region swap

//void swap(int* pa, int* pb);
//
//int main()
//{
//	int a = 10, b = 20;
//
//	swap(&a, &b);
//	printf("a:%d, b:%d\n", a, b);
//
//	return 0;
//}
//
//void swap(int* pa, int* pb)
//{
//	int temp;
//
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}

#pragma endregion

#pragma region 연습 문제

//void swap(double* pa, double* pb);
//void line_up(double* maxp, double* midp, double* minp);
//
//int main()
//{
//	double max, mid, min;
//
//	printf("실수값 3개 입력 : ");
//	scanf("%lf%lf%lf", &max, &mid, &min);
//	line_up(&max, &mid, &min);
//	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);
//
//	return 0;
//}
//
//void swap(double* pa, double* pb)
//{
//	double temp;
//
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//void line_up(double* maxp, double* midp, double* minp)
//{
//	if (*midp > *maxp)
//	{
//		swap(maxp, midp);
//	}
//	if (*minp > *midp)
//	{
//		swap(midp, minp);
//	}
//	if (*midp > *maxp)
//	{
//		swap(maxp, midp);
//	}
//}

#pragma endregion