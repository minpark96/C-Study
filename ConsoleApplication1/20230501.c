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

	int inputN;
	const int MAX_COLUMNS = 5, NUM_START = 2, NUM_END = 18;

	printf(" N�� �Է��ϼ��� (%d�̻� ~ %d����) : ", NUM_START, NUM_END);
	scanf("%d", &inputN);

	if (inputN < NUM_START || inputN > NUM_END) // �Է� ���� ó��
	{
		printf(" %d�̻� ~ %d���� ���� �Է��ϼ���! ", NUM_START, NUM_END);
		return 0;
	}

	printf("\n �� ���ο� ����� �� �ִ� �� �� : %d / ���� �� : %d / �ִ� ��� ������ �� : %d\n\n", MAX_COLUMNS, NUM_START, NUM_END);

	for (int m = 0; m < MAX_COLUMNS - 1; m++) // MAX_COLUMNS - 1�� ��ŭ Ÿ��Ʋ �� ���� ���
	{
		printf("         ");
	}

	printf("�� �� ��\n");

	for (int i = NUM_START; i <= inputN; i += MAX_COLUMNS) // i => MAX_COLUMNS�� ����
	{
		for (int n = 0; n < MAX_COLUMNS; n++)  // MAX_COLUMNS�� ��ŭ "-" ���� ���
		{
			printf("-----------------");
		}

		printf("\n");

		for (int j = 1; j < 10; j++) // 1 ~ 9���� �� ��� => ������
		{

			for (int k = i; k < i + MAX_COLUMNS; k++) // ������ �� ���� MAX_COLUMNS�� ��ŭ �� ���
			{
				if (k <= inputN) // ���������� üũ
					printf("%2d  x %2d = %3d   ", k, j, k * j);
			}

			printf("\n");
		}
	}
	

	
#pragma endregion



	return 0;
}