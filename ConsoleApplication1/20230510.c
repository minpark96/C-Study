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
//		matrix[i][j] = currentNum;
//		currentNum++;
//
//		switch (dir)
//		{
//		case 1: // ������
//			if (j == col - 1 || matrix[i][j + 1] != 0) // ���� col - 1�� ���� �߰ų�, 0�� �ƴ� ���� ������ �� ���� ����
//			{
//				dir++; // �ð� ���� ��ȯ ������(1) -> �Ʒ�(2)
//				i++; // �Ʒ��� ��ĭ �̵�
//			}
//			else
//				j++; // ������ ��ĭ �̵�
//
//			break;
//		case 2: // �Ʒ�
//			if (i == row - 1 || matrix[i + 1][j] != 0) // ���� row - 1�� ���� �߰ų�, 0�� �ƴ� ���� ������ �� ���� ����
//			{ // 
//				dir++; // �ð� ���� ��ȯ �Ʒ�(2) -> ����(3)
//				j--; // ���� ��ĭ �̵�
//			}
//			else
//				i++; // �Ʒ� ��ĭ �̵�
//
//			break;
//		case 3: // ���� 
//			if (j == 0 || matrix[i][j - 1] != 0) // ���� 0�� ���� �߰ų�, 0�� �ƴ� ���� ������ �� ���� ����
//			{
//				dir++; // �ð� ���� ��ȯ ����(3) -> ��(4)
//				i--; // ���� ��ĭ �̵�
//			}
//			else
//				j--; // ���� ��ĭ �̵�
//
//			break;
//		case 4: // ��
//			if (matrix[i - 1][j] != 0) // 0�� �ƴ� ���� ������ �� ���� ����
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

int main()
{
	int row = 0, col = 0;
	int length; // ��� ���� ����
	int distance; // �̵� �Ÿ�
	int count = 1;
	int dir = 1; // 1-������, 2-�Ʒ�, 3-����, 4-��
	int matrix[10][10] = { 0 };

	printf("���簢 ����� ���̸� �Է��ϼ��� : ");
	scanf("%d", &length);

	distance = length;
	// ��Ģ : �� -> ��, �� -> ���� �ٲ� �� �̵� �Ÿ��� 1�� �پ���.
	while (count < length * length + 1) // �迭�� ���� ä������ ���� 
	{
		for (int i = distance; i > 0; i--) 
		{
			matrix[row][col] = count;
			count++;

			switch (dir)
			{
			case 1: // ������ �̵�
				if (i > 1)
					col++;
				else
				{
					row++;
					dir++;
					distance--;
				}
				break;
			case 2: // �Ʒ��� �̵�
				if (i > 1)
					row++;
				else
				{
					col--;
					dir++;
				}
				break;
			case 3: // ���� �̵�
				if (i > 1)
					col--;
				else
				{
					row--;
					dir++;
					distance--;
				}
				break;
			case 4: // ���� �̵�
				if (i > 1)
					row--;
				else
				{
					col++;
					dir = 1;
				}
				break;
			default:
				;
			}
		}
	}

	// ���
	printf("���\n");
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			printf("%3d", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}

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
//	int matrix[MAX_ROW][MAX_COL] = { 0 };
//	//int* pmatrix[MAX_ROW] = { 0 };
//	int num = 1;
//
//	// �ʱ�ȭ �ϸ鼭 ���� ���� �ջ�
//	for (int i = 0; i < MAX_ROW - 1; i++)
//	{
//		for (int j = 0; j < MAX_COL - 1; j++)
//		{
//			matrix[i][j] = num++;
//			matrix[i][MAX_COL - 1] += matrix[i][j];
//		}
//	}
//
//	// ���� ���� �ջ�
//	for (int i = 0; i < MAX_COL; i++)
//	{
//		for (int j = 0; j < MAX_ROW - 1; j++)
//		{
//			matrix[MAX_ROW - 1][i] += matrix[j][i];
//		}
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

//#define MAX_ROWCOL 5
//
//int get_abs(int x, int y);
//
//int main()
//{
//	int matrix[MAX_ROWCOL][MAX_ROWCOL] = { 0 };
//	int edgeDir = 0; // �𼭸� ���� ���� : 0-������, 1-�Ʒ���
//	int diagonalDir = 0; // �밢�� ���� ���� : 0-���, 1-����
//	int distance = 0; // �밢�� �̵� �Ÿ� : ������ȯ �Ҷ� (row-col) ���밪
//	int row = 0, col = 0; // row-��, col-��
//	int count = 1;
//
//	printf("N�� ũ�� : %d\n", MAX_ROWCOL);
//	while (count < MAX_ROWCOL * MAX_ROWCOL + 1)
//	{
//		matrix[row][col] = count;
//		count++;
//
//		if (distance > 0) // �밢�� �̵�
//		{
//			if (diagonalDir) // ���� ���� �̵�
//			{
//				row++;
//				col--;
//				distance--;
//
//				if (row == MAX_ROWCOL - 1) // �Ʒ��� �� ���� �� ������ �̵�
//					edgeDir = 0;
//				else // �ƴ� �� �Ʒ��� �̵�
//					edgeDir = 1;
//			}
//			else // ��� ���� �̵�
//			{
//				row--;
//				col++;
//				distance--;
//
//				if (col == MAX_ROWCOL - 1) // ������ �� ���� �� �Ʒ��� �̵�
//					edgeDir = 1;
//				else // �ƴ� �� ������ �̵�
//					edgeDir = 0;
//			}
//		}
//		else // �𼭸� �̵�
//		{
//			if (edgeDir) // �Ʒ��� �̵�
//			{
//				row++;
//				distance = get_abs(row, col); // �밢�� �̵� �Ÿ��� |row - col|
//				diagonalDir ^= 1; // �밢�� ������ �ݴ�� �ٲ� (diagonalDir XOR 1)
//			}
//			else // ������ �̵�
//			{
//				col++;
//				distance = get_abs(row, col); // �밢�� �̵� �Ÿ��� |row - col|
//				diagonalDir ^= 1; // �밢�� ������ �ݴ�� �ٲ� (diagonalDir XOR 1)
//			}
//		}
//	}
//
//	// ���
//	for (int i = 0; i < MAX_ROWCOL; i++)
//	{
//		for (int j = 0; j < MAX_ROWCOL; j++)
//		{
//			printf("%3d", matrix[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//// ���밪 ���ϱ�
//int get_abs(int x, int y) 
//{
//	if (x - y > 0) return x - y;
//	else return -(x - y);
//}

#pragma endregion
