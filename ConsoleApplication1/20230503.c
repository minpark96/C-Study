#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int main()
//{
#pragma region ���� ���� 1

//	int inputNum, currentCol = 0, isPrime = 1;
//	const int MAX_COULMNS = 5;
//
//	printf(" 2 �̻��� ������ �Է��ϼ��� : ");
//	scanf("%d", &inputNum);
//
//
//	for (int i = 2; i <= inputNum; i++)
//	{
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				isPrime = 0;
//				break;
//			}
//			else
//				isPrime = 1;
//		}
//
//		if (isPrime)
//		{
//			printf("%3d  ", i);
//			++currentCol;
//
//			if (currentCol == MAX_COULMNS)
//			{
//				printf("\n");
//				currentCol = 0;
//			}
//		}
//	}
//
//	return 0;
//}


#pragma endregion

#pragma region ���� ���� 2

	/*int input;

	printf(" 10�̸��� n�� �Է��ϼ��� : ");
	scanf("%d", &input);

	for (int i = 0; i < input; i++)
	{
		if ((i + (input - i) == input))
		{
			printf("A = %d, Z = %d\n", i, input - i);
		}
	}*/

#pragma endregion

#pragma region �Լ�

//	int sum(int x, int y);
//
//	int x = 10, y = 20;
//	int s = 0;
//	s = sum(x, y);
//
//	printf("%d", s);
//
//	return 0;
//}
//
//	int sum(int x, int y)
//	{
//		return x + y;
//	}

#pragma endregion

#pragma region ���� ���� 3
//
//int InputFunc();
//void OutputFunc(int inputNum);
//int PrimeCheck(int x);
//int PrintPrime(int x, int col);
//
//int number = InputFunc();
//OutputFunc(number);
//
//return 0;
//}
//
//
//int InputFunc()
//{
//	int inputNum;
//	printf(" 2 �̻��� ������ �Է��ϼ��� : ");
//	scanf("%d", &inputNum);
//	return inputNum;
//}
//
//void OutputFunc(int inputNum)
//{
//	int currentCol = 0, isPrime = 1;
//
//	for (int i = 2; i <= inputNum; i++)
//	{
//		isPrime = PrimeCheck(i);
//
//		if (isPrime)
//			currentCol = PrintPrime(i, currentCol);
//	}
//}
//
//int PrimeCheck(int x)
//{
//	for (int i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//
//	return 1;
//}
//
//int PrintPrime(int x, int col)
//{
//	const int MAX_COLUMNS = 5;
//	printf("%3d  ", x);
//	++col;
//
//	if (col == MAX_COLUMNS)
//	{
//		printf("\n");
//		return 0;
//	}
//
//	return col;
//}

#pragma endregion

#pragma region ���� ���� 4

//int ABS(int x);
//int InputFunc();
//void OutputFunc(int x);
//
//	int num = 0;
//
//	while (1)
//	{
//		num = InputFunc();
//
//		if (!num)
//			break;
//		
//		ABS(num);
//
//		OutputFunc(num);
//	}
//
//	return 0;
//}
//
//int InputFunc()
//{
//	int input;
//	printf(" ������ �Է��ϼ��� (�����Ϸ��� 0 �Է�) : ");
//	scanf("%d", &input);
//	return input;
//}
//
//int ABS(int x)
//{
//	if (x < 0)
//		return -x;
//	else
//		return x;
//}
//
//void OutputFunc(int x)
//{
//	printf(" �Է°��� ���밪 : %d\n", x);
//}

#pragma endregion

#pragma region ��� �Լ� ���� ����

//int InputFunc();
//void OutputFunc(int n);
//int rec_func(int n);
//int Factorial(int n);
//
//int main()
//{
//	int n, res;
//	
//	printf(" ��� ��\n");
//	n = InputFunc();
//	res = rec_func(n);
//	OutputFunc(res);
//
//	printf(" ���丮��\n");
//	n = InputFunc();
//	res = Factorial(n);
//	OutputFunc(res);
//
//	return 0;
//}
//
//int InputFunc()
//{
//	int input;
//	printf(" ������ �Է��ϼ��� : ");
//	scanf("%d", &input);
//	return input;
//}
//
//void OutputFunc(int x)
//{
//	printf(" ��� : %d\n", x);
//}
//
//int rec_func(int n)
//{
//	if (n < 1) return 0;
//	return n += rec_func(n - 1);
//}
//	
//int Factorial(int n)
//{
//	if (n < 1) return 1;
//	return n *= Factorial(n - 1);
//}

#pragma endregion

#pragma region ������ ���� ���� (�Ǻ���ġ ����)
//
//int Snail(int x, int y, int end);
//int InputFunc();
//void OutputFunc(int x, int end);
//
//int main()
//{
//	int month, res;
//	int numChildSnail = 1, numDaddySnail = 0;
//
//	month = InputFunc();
//	res = Snail(numChildSnail, numDaddySnail, month);
//	OutputFunc(res, month);
//
//	return 0;
//}
//
//int Snail(int x, int y, int end)
//{
//	if (end == 0) return x + y;
//	return Snail(y, y + x, end - 1);
//}
//
//
//int InputFunc()
//{
//	int input;
//	printf(" ��(month)�� �Է��ϼ��� : ");
//	scanf("%d", &input);
//	return input;
//}
//
//void OutputFunc(int x, int end)
//{
//	printf(" %d�� �� : %d����\n", end, x);
//}

#pragma endregion

void MyCalculator();
int ChooseOperation();
int InputInteger(int type);
void OutputFunc(int res);
int Add(int x, int y);
int Sub(int x, int y);
int Mul(int x, int y);
int Div(int x, int y);

int main()
{
	MyCalculator();

	return 0;
}

void MyCalculator()
{
	while (1)
	{
		int type = ChooseOperation();
		if (!type)
			break;
		int res = InputInteger(type);
		OutputFunc(res);
	}
}

int ChooseOperation()
{
	int input;
	printf(" ���ϴ� ������ �����ϼ��� : \n 1:����, 2:����, 3:����, 4:������, 0:����\n ");
	scanf("%d", &input);
	return input;
}

int InputInteger(int type)
{
	int input1, input2;
	printf(" �� ������ �Է��Ͻÿ� : ");
	scanf("%d%d", &input1, &input2);

	switch (type)
	{
		case 1:
			return Add(input1, input2);
		case 2:
			return Sub(input1, input2);
		case 3:
			return Mul(input1, input2);
		case 4:
			return Div(input1, input2);
		default:
			;
	}
}

void OutputFunc(int res)
{
	printf(" ����� %d �Դϴ�.\n", res);
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}



