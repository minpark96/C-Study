#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
#pragma region 형변환

	/*int i = 10;
	double d = 10.111111;
	int i2 = (int)d;
	double d2 = (double)i2;*/

	/*int a = 20, b = 3;
	double res;

	res = ((double)a / (double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf의 결과 : %d\n", res, a);
	*/

	
#pragma endregion

#pragma region 복합 대입 연산
	/*int a = 10, b = 20;
	int res = 2;

	a += 20;
	res *= b + 10;

	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);*/

	
#pragma endregion

#pragma region 콤마 연산
	/*int a = 10, b = 20;
	int res;

	res = (++a, ++b);

	printf("a:%d, b:%d\n", a, b);
	printf("res:%d\n", res);*/

#pragma endregion

#pragma region 조건 연산

	/*int a = 10, b = 20, res;

	res = (a > b) ? a : b;
	printf("큰 값 : %d\n", res);*/
#pragma endregion

#pragma region 조건 연산 연습 문제
	/*int _a, _b, _c;
	int _res;


	printf(" 정수 a를 입력 하세요:");
	scanf("%d", &_a);
	printf(" 정수 b를 입력 하세요:");
	scanf("%d", &_b);
	printf(" 정수 c를 입력 하세요:");
	scanf("%d", &_c);

	_res = (_a > _b) ? _a : _b;
	_res = (_res > _c) ? _res : _c;


	printf(" 정수 a : %d, 정수 b : %d, 정수 c : %d\n", _a, _b, _c);
	printf(" 가장 큰 값 : %d\n", _res);*/
#pragma endregion

#pragma region 비트 연산
	/*int a = 10;
	int b = 12;

	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b);
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << 1 : %d\n", a << 1);
	printf("a >> 2 : %d\n", a >> 2);*/

#pragma endregion

#pragma region if문
	/*int a = 20;
	int b = 0;

	if (a > 10)
	{
		b = a;

	}
	printf("a : %d, b : %d\n", a, b);*/
	
	/*int a = 10;

	if (a >= 0)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}

	printf("a : %d\n", a);*/

	/*int a = 0, b = 0;

	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}

	printf("b : %d\n", b);*/

#pragma endregion

#pragma region if문 연습 문제

	//int _a, _b, _res;

	//printf("첫번째 정수를 입력하시오 : ");
	//scanf("%d", &_a);
	//printf("두번째 정수를 입력하시오 : ");
	//scanf("%d", &_b);

	//// case1
	//if (_a > _b)
	//	_res = _a - _b;
	//else
	//	_res = _b - _a;
	//printf(" case1. 두 수의 차 : %d\n", _res);
	//// case2
	//_res = (_a > _b) ? (_a - _b) : (_b - _a);
	//printf(" case2. 두 수의 차 : %d\n", _res);

#pragma endregion

#pragma region switch ~ case
	/*int rank = 1, m = 0;

	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}

	printf("m : %d\n", m);*/


#pragma endregion

#pragma region if/switch~case 연습 문제

//int _numSub = 0;
//	const int _iA = 90, _iB = 80, _iC = 70, _iD = 60;
//	float _scoreKor, _scoreEng, _scoreMat, _avg;
//	char _grade;
//
//	printf(" 국어, 영어, 수학 성적을 입력하세요 : ");
//	_numSub = scanf("%f%f%f", &_scoreKor, &_scoreEng, &_scoreMat);
//
//	_avg = (_scoreKor + _scoreEng + _scoreMat) / _numSub;
//
//	if (_avg >= _iA)
//	{
//		_grade = 'A';
//	}
//	else if (_avg >= _iB)
//	{
//		_grade = 'B';
//	}
//	else if (_avg >= _iC)
//	{
//		_grade = 'C';
//	}
//	else if (_avg >= _iD)
//	{
//		_grade = 'D';
//	}
//	else
//	{
//		_grade = 'F';
//	}
//
//	printf(" 평균 점수는 %.2f, 학점은 %c입니다.\n", _avg, _grade);

	
#pragma endregion

#pragma region while

	//int a = 1;
	// 
	//while (a < 10)
	//{
	//	printf("a : %d\n", a);
	//	a *= 2;
	//}

	//a = 1;
	//for ( ; a < 10; )
	//{
	//	printf("a : %d\n", a);
	//	a *= 2;
	//}

#pragma endregion

#pragma region 반복문 연습 문제1

		/*int _temp = 0, _iN = 0, _result = 1;

		printf(" 정수 n값을 입력하세요 : ");
		scanf("%d", &_iN);

		_temp = _iN;
		while (_temp)
		{
			_result *= _temp;
			--_temp;
		}

		if (!_iN)
			_result = 0;

		printf(" %d! : %d\n", _iN, _result);*/

#pragma endregion

#pragma region 반복문 연습 문제2

	/*int _num1, _num2, _min = 0, _max = 0, _res = 0;

	printf(" 두 수를 입력하세요 : ");
	scanf("%d%d", &_num1, &_num2);

	if (_num1 > _num2)
	{
		_max = _num1;
		_min = _num2;
	}
	else if (_num2 > _num1)
	{
		_min = _num1;
		_max = _num2;
	}
	else
	{
		printf(" 같은 값을 입력하셨습니다.\n");
		_res += _num1;
	}

	for (; _min <= _max; _min++)
	{

		_res += _min;
	}

	printf(" 두 수 사이에 존재하는 정수의 합:%d\n", _res);*/

#pragma endregion

#pragma region 반복문 연습문제3


	/*int _iM, _iN, _res = 0;

	while (1)
	{
		printf(" 양의 정수 M과 N을 입력하세요 : ");
		int _ret = scanf("%d%d", &_iM, &_iN);
		if ((_ret == 2) && (_iM > 0) && (_iN > 0))
		{
			printf(" 결과 : ");
			while (_iN)
			{
				_res += _iM;
				printf(" %d ", _res);
				_iN--;
			}
			break;
		}
		else
		{
			rewind(stdin);
			printf(" 양의 정수를 입력하세요!\n");
			
		}
		
	}*/

#pragma endregion

#pragma region 반복문 연습문제4

	int _input, _sum = 0;

	//do~while
	do
	{
		printf(" 정수를 입력하세요(0을 입력 시 합산을 중단합니다) : ");
		scanf("%d", &_input);
		_sum += _input;
	} while (_input);

	printf(" (#do~while)입력된 모든 정수의 합 : %d\n", _sum);
	_sum = 0;
	_input++;

	//while

	while (_input)
	{
		printf(" 정수를 입력하세요(0을 입력 시 합산을 중단합니다) : ");
		scanf("%d", &_input);
		_sum += _input;
	}

	printf(" (#while)입력된 모든 정수의 합 : %d\n", _sum);
	_sum = 0;
	_input++;

	//for

	for (; _input != 0 ;)
	{
		printf(" 정수를 입력하세요(0을 입력 시 합산을 중단합니다) : ");
		scanf("%d", &_input);
		_sum += _input;
	}

	printf(" (#for)입력된 모든 정수의 합 : %d\n", _sum);

#pragma endregion


	return 0;
}