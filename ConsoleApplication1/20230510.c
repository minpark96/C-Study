#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
	/*int score[4][5];
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 4; i++)
	{
		printf("5������ ���� �Է� : ");
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		total = 0;
		for (j = 0; j < 5; j++)
		{
			total += score[i][j];
		}
		avg = total / 5.0;
		printf("���� : %d, ��� : %.2lf\n", total, avg);
	}*/

	/*char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);
	for (i = 0; i < count; i++)
	{
		scanf("%s", animal[i]);
	}

	for (i = 0; i < count; i++)
	{
		printf("%s ", animal[i]);
	}*/

	/*int score[2][3][4] = {
		{ { 72, 80, 95, 60 }, { 68, 98, 83, 90 }, { 75, 72, 84, 90 } },
		{ { 66, 85, 90, 88 }, { 95, 92, 88, 95 }, { 43, 72, 56, 75 } }
	};

	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		printf("%d�� ����...\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}*/

	//return 0;
//}

//int main()
//{
//	int row, col;
//	int input;
//	int inputMatrix[10][10] = { 0 };
//	int outputMatrix[10][10] = { 0 };
//
//	printf("��� ���� �Է��ϼ��� : ");
//	scanf("%d%d", &row, &col);
//
//	printf("A����� �Է��ϼ��� : \n");
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			scanf("%d", &input);
//			inputMatrix[i][j] = input;
//		}
//	}
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++) 
//		{
//			outputMatrix[j][i] = inputMatrix[row - 1 - i][j];
//		}
//	}
//
//	printf("���� ���\n");
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", inputMatrix[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("ȸ�� ���\n");
//	for (int i = 0; i < col; i++)
//	{
//		for (int j = 0; j < row; j++)
//		{
//			printf("%d ", outputMatrix[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int row, col;
//	int currentNum = 1;
//	int dir = 1; // 1-������, 2-�Ʒ�, 3-����, 4-��
//	int matrix[10][10] = { 0 };
//
//	printf("��� ���� �Է��ϼ��� : ");
//	scanf("%d%d", &row, &col);
//
//	int i = 0, j = 0;
//	while (currentNum < row * col + 1) // �迭�� ���� ä������ ���� 
//	{
//		switch (dir)
//		{
//		case 1: // ������
//			matrix[i][j] = currentNum;
//			currentNum++;
//
//			if (j == col - 1 || matrix[i][j + 1] != 0) // �ִ� ũ�⿡ ���� �߰ų�(�ֿܰ�), 0�� �ƴ� ���� ������ �� ���� ����(����)
//			{
//				dir++; // �ð� ���� ��ȯ ������(1) -> �Ʒ�(2)
//				i++; // �Ʒ��� ��ĭ �̵�
//			}
//			else
//				j++; // ������ ��ĭ �̵�
//
//			break;
//		case 2: // �Ʒ�
//			matrix[i][j] = currentNum;
//			currentNum++;
//
//			if ((i == row - 1 && j == col - 1) || matrix[i + 1][j] != 0) // �ִ� ũ�⿡ ���� �߰ų�(�ֿܰ�), 0�� �ƴ� ���� ������ �� ���� ����(����)
//			{
//				dir++; // �ð� ���� ��ȯ �Ʒ�(2) -> ����(3)
//				j--; // ���� ��ĭ �̵�
//			}
//			else
//				i++; // �Ʒ� ��ĭ �̵�
//
//			break;
//		case 3: // ����
//			matrix[i][j] = currentNum;
//			currentNum++;
//
//			if (j == 0 || matrix[i][j - 1] != 0) // �ִ� ũ�⿡ ���� �߰ų�(�ֿܰ�), 0�� �ƴ� ���� ������ �� ���� ����(����)
//			{
//				dir++; // �ð� ���� ��ȯ ����(3) -> ��(4)
//				i--; // ���� ��ĭ �̵�
//			}
//			else
//				j--; // ���� ��ĭ �̵�
//
//			break;
//		case 4: // ��
//			matrix[i][j] = currentNum;
//			currentNum++;
//
//			if (matrix[i - 1][j] != 0) // 0�� �ƴ� ���� ������ �� ���� ����(����)
//			{
//				dir = 1; // �ð� ���� ��ȯ ��(4) -> ������(1)
//				j++; // ������ ��ĭ �̵�
//			}
//			else
//				i--; // ���� ��ĭ �̵�
//
//			break;
//		default :
//			;
//		}
//	}
//
//	// ���
//	printf("���\n");
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%3d", matrix[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//char* pary[5];
//	//int i;
//
//	//pary[0] = "dog";
//	//pary[1] = "elephant";
//	//pary[2] = "horse";
//	//pary[3] = "tiger";
//	//pary[4] = "lion";
//
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%s\n", pary[i]);
//	//}
//
//	int ary1[4] = { 1, 2, 3, 4 };
//	int ary2[4] = { 11, 12, 13, 14 };
//	int ary3[4] = { 21, 22, 23, 24 };
//	int* pary[3] = { ary1, ary2, ary3 };
//	int i, j;
//
//	printf("ary1�� �ּ� : %p\n", ary1);
//	printf("ary2�� �ּ� : %p\n", ary2);
//	printf("ary3�� �ּ� : %p\n", ary3);
//	printf("pary[0]�� �ּ� : %p\n", pary[0]);
//	printf("pary[1]�� �ּ� : %p\n", pary[1]);
//	printf("pary[2]�� �ּ� : %p\n", pary[2]);
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%5d", pary[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#define MAX_ROW 5
//#define MAX_COL 6
//
//int main()
//{
//	int matrix[MAX_ROW][MAX_COL];
//	int* pmatrix[MAX_ROW] = { 0 };
//	int num = 1;
//	int sumX = 0;
//	int sumY = 0;
//
//	// �ʱ�ȭ �ϸ鼭 ���� ���� �ջ�
//	for (int i = 0; i < MAX_ROW - 1; i++)
//	{
//		for (int j = 0; j < MAX_COL - 1; j++)
//		{
//			matrix[i][j] = num++;
//			sumX += matrix[i][j];
//		}
//		
//		matrix[i][MAX_COL - 1] = sumX;
//		sumX = 0;
//	}
//
//	// ���� ���� �ջ�
//	for (int i = 0; i < MAX_COL; i++)
//	{
//		for (int j = 0; j < MAX_ROW - 1; j++)
//		{
//			sumY += matrix[j][i];
//		}
//
//		matrix[MAX_ROW - 1][i] = sumY;
//		sumY = 0;
//	}
//
//	// ���
//	for (int i = 0; i < MAX_ROW; i++)
//	{
//		for (int j = 0; j < MAX_COL; j++)
//		{
//			printf("%4d", matrix[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0; 
//}

#pragma region ������� ���

#define MAX_ROWCOL 4

int main()
{
	int matrix[MAX_ROWCOL][MAX_ROWCOL] = { 0 };
	int dir = 1; // 1�϶� ���, 0�϶� ����
	int currentNum = 1; // ���� ����
	int i = 0, j = 0; // i - ��, j - ��

	printf("N�� ũ�� : %d\n", MAX_ROWCOL);

	while (currentNum <= MAX_ROWCOL * MAX_ROWCOL)
	{
		matrix[i][j] = currentNum;
		currentNum++;

		if (dir) // ������ �� �밢�� �̵�
		{
			if (j + 1 <= MAX_ROWCOL)
			{
				j++;
				dir = 0;
			}
			else if (i != 0 && j != MAX_ROWCOL - 1)
			{
				j++;
				i--;
			}
			else
			{
				i++;
				dir = 0;
			}
		}
		else // ���� �Ʒ� �밢�� �̵�
		{
			if (i + 1 <= MAX_ROWCOL)
			{
				i++;
				dir = 0;
			}
			else if (j != 0 && i != MAX_ROWCOL - 1)
			{
				i++;
				j--;
			}
			else
			{
				j++;
				dir = 0;
			}
		}
	}

	// ���
	for (int i = 0; i < MAX_ROWCOL; i++)
	{
		for (int j = 0; j < MAX_ROWCOL; j++)
		{
			printf("%3d", matrix[i][j]);
		}
		printf("\n");
	}



	return 0;
}

#pragma endregion
