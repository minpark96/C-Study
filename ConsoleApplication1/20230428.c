#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
#pragma region ����ȯ

	/*int i = 10;
	double d = 10.111111;
	int i2 = (int)d;
	double d2 = (double)i2;*/

	/*int a = 20, b = 3;
	double res;

	res = ((double)a / (double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a / b�� ��� : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf�� ��� : %d\n", res, a);
	*/

	
#pragma endregion

#pragma region ���� ���� ����
	/*int a = 10, b = 20;
	int res = 2;

	a += 20;
	res *= b + 10;

	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);*/

	
#pragma endregion

#pragma region �޸� ����
	/*int a = 10, b = 20;
	int res;

	res = (++a, ++b);

	printf("a:%d, b:%d\n", a, b);
	printf("res:%d\n", res);*/

#pragma endregion

#pragma region ���� ����

	/*int a = 10, b = 20, res;

	res = (a > b) ? a : b;
	printf("ū �� : %d\n", res);*/
#pragma endregion

#pragma region ���� ���� ���� ����
	/*int _a, _b, _c;
	int _res;


	printf(" ���� a�� �Է� �ϼ���:");
	scanf("%d", &_a);
	printf(" ���� b�� �Է� �ϼ���:");
	scanf("%d", &_b);
	printf(" ���� c�� �Է� �ϼ���:");
	scanf("%d", &_c);

	_res = (_a > _b) ? _a : _b;
	_res = (_res > _c) ? _res : _c;


	printf(" ���� a : %d, ���� b : %d, ���� c : %d\n", _a, _b, _c);
	printf(" ���� ū �� : %d\n", _res);*/
#pragma endregion

#pragma region ��Ʈ ����
	/*int a = 10;
	int b = 12;

	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b);
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << 1 : %d\n", a << 1);
	printf("a >> 2 : %d\n", a >> 2);*/

#pragma endregion

#pragma region if��
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

#pragma region if�� ���� ����

	//int _a, _b, _res;

	//printf("ù��° ������ �Է��Ͻÿ� : ");
	//scanf("%d", &_a);
	//printf("�ι�° ������ �Է��Ͻÿ� : ");
	//scanf("%d", &_b);

	//// case1
	//if (_a > _b)
	//	_res = _a - _b;
	//else
	//	_res = _b - _a;
	//printf(" case1. �� ���� �� : %d\n", _res);
	//// case2
	//_res = (_a > _b) ? (_a - _b) : (_b - _a);
	//printf(" case2. �� ���� �� : %d\n", _res);

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

#pragma region if/switch~case ���� ����

//int _numSub = 0;
//	const int _iA = 90, _iB = 80, _iC = 70, _iD = 60;
//	float _scoreKor, _scoreEng, _scoreMat, _avg;
//	char _grade;
//
//	printf(" ����, ����, ���� ������ �Է��ϼ��� : ");
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
//	printf(" ��� ������ %.2f, ������ %c�Դϴ�.\n", _avg, _grade);

	
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

#pragma region �ݺ��� ���� ����1

		/*int _temp = 0, _iN = 0, _result = 1;

		printf(" ���� n���� �Է��ϼ��� : ");
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

#pragma region �ݺ��� ���� ����2

	/*int _num1, _num2, _min = 0, _max = 0, _res = 0;

	printf(" �� ���� �Է��ϼ��� : ");
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
		printf(" ���� ���� �Է��ϼ̽��ϴ�.\n");
		_res += _num1;
	}

	for (; _min <= _max; _min++)
	{

		_res += _min;
	}

	printf(" �� �� ���̿� �����ϴ� ������ ��:%d\n", _res);*/

#pragma endregion

#pragma region �ݺ��� ��������3


	/*int _iM, _iN, _res = 0;

	while (1)
	{
		printf(" ���� ���� M�� N�� �Է��ϼ��� : ");
		int _ret = scanf("%d%d", &_iM, &_iN);
		if ((_ret == 2) && (_iM > 0) && (_iN > 0))
		{
			printf(" ��� : ");
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
			printf(" ���� ������ �Է��ϼ���!\n");
			
		}
		
	}*/

#pragma endregion

#pragma region �ݺ��� ��������4

	int _input, _sum = 0;

	//do~while
	do
	{
		printf(" ������ �Է��ϼ���(0�� �Է� �� �ջ��� �ߴ��մϴ�) : ");
		scanf("%d", &_input);
		_sum += _input;
	} while (_input);

	printf(" (#do~while)�Էµ� ��� ������ �� : %d\n", _sum);
	_sum = 0;
	_input++;

	//while

	while (_input)
	{
		printf(" ������ �Է��ϼ���(0�� �Է� �� �ջ��� �ߴ��մϴ�) : ");
		scanf("%d", &_input);
		_sum += _input;
	}

	printf(" (#while)�Էµ� ��� ������ �� : %d\n", _sum);
	_sum = 0;
	_input++;

	//for

	for (; _input != 0 ;)
	{
		printf(" ������ �Է��ϼ���(0�� �Է� �� �ջ��� �ߴ��մϴ�) : ");
		scanf("%d", &_input);
		_sum += _input;
	}

	printf(" (#for)�Էµ� ��� ������ �� : %d\n", _sum);

#pragma endregion


	return 0;
}