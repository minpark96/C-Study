#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

#pragma region ���� ����1

	/*int inputM, inputN;

	printf(" 1�̻� 100�̸��� ���� m�� n�� �Է��ϼ��� : ");
	scanf("%d%d", &inputM, &inputN);

	printf(" ��� :");
	for (int i = 1; i <= 100; i++)
	{	
		if ((i % inputM == 0) || (i % inputN == 0))
		{
			printf("%d ", i);
		}
	}*/

#pragma endregion


#pragma region ���� ����2

	/*int inputN;
	int i = 1;

	while (1)
	{
		printf(" N�� �Է��ϼ��� : ");
		scanf("%d", &inputN);

		if (inputN < 1)
		{
			printf("1 �̻� ���� �Է��ϼ���!\n\n");
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

#pragma region ���� ����3

	/*int inputN;

	printf(" N�� �Է��ϼ��� : ");
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

#pragma region ���� ����4

	/*int inputN;

	printf(" N�� �Է��ϼ��� : ");
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

#pragma region ���� ����5

	int inputN, temp, numLoop;
	const int numPrint = 4, numStart = 2;


	printf(" N�� �Է��ϼ��� (2�̻� ~ 18����) : ");
	scanf("%d", &inputN);

	if (inputN < 2 || inputN > 18)
	{
		printf(" 2�̻� ~ 18���� ���� �Է��ϼ���! ");
		return 0;
	}

	temp = inputN;

	printf("\t\t   �� �� ��\n");

	for (int i = numStart; i <= inputN; i += numPrint)
	{
		if ((temp - numStart) / numPrint > 0)
		{
			numLoop = numPrint;
		}
		else
		{
			numLoop = temp % numPrint + temp % numStart;
		}
		printf("-------------------------------------------------\n");

		for (int j = 1; j < 10; j++)
		{

			for (int k = 0; k < numLoop; k++)
			{
				printf("%2d  x %2d = %3d   ", i + k, j, (i + k) * j);
			}

			printf("\n");
		}

		temp -= numPrint;
	}
	

	
#pragma endregion



	return 0;
}