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
		printf("5과목의 점수 입력 : ");
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
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);
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
		printf("%d반 점수...\n", i + 1);
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
//	printf("행과 열을 입력하세요 : ");
//	scanf("%d%d", &row, &col);
//
//	printf("A행렬을 입력하세요 : \n");
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
//	printf("원본 행렬\n");
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", inputMatrix[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("회전 행렬\n");
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
//	int dir = 1; // 1-오른쪽, 2-아래, 3-왼쪽, 4-위
//	int matrix[10][10] = { 0 };
//
//	printf("행과 열을 입력하세요 : ");
//	scanf("%d%d", &row, &col);
//
//	int i = 0, j = 0;
//	while (currentNum < row * col + 1) // 배열을 전부 채웠으면 종료 
//	{
//		matrix[i][j] = currentNum;
//		currentNum++;
//
//		switch (dir)
//		{
//		case 1: // 오른쪽
//			if (j == col - 1 || matrix[i][j + 1] != 0) // 열이 col - 1에 도달 했거나, 0이 아닌 수를 만났을 때 방향 변경
//			{
//				dir++; // 시계 방향 전환 오른쪽(1) -> 아래(2)
//				i++; // 아래로 한칸 이동
//			}
//			else
//				j++; // 오른쪽 한칸 이동
//
//			break;
//		case 2: // 아래
//			if (i == row - 1 || matrix[i + 1][j] != 0) // 행이 row - 1에 도달 했거나, 0이 아닌 수를 만났을 때 방향 변경
//			{ // 
//				dir++; // 시계 방향 전환 아래(2) -> 왼쪽(3)
//				j--; // 왼쪽 한칸 이동
//			}
//			else
//				i++; // 아래 한칸 이동
//
//			break;
//		case 3: // 왼쪽 
//			if (j == 0 || matrix[i][j - 1] != 0) // 열이 0에 도달 했거나, 0이 아닌 수를 만났을 때 방향 변경
//			{
//				dir++; // 시계 방향 전환 왼쪽(3) -> 위(4)
//				i--; // 위로 한칸 이동
//			}
//			else
//				j--; // 왼쪽 한칸 이동
//
//			break;
//		case 4: // 위
//			if (matrix[i - 1][j] != 0) // 0이 아닌 수를 만났을 때 방향 변경
//			{
//				dir = 1; // 시계 방향 전환 위(4) -> 오른쪽(1)
//				j++; // 오른쪽 한칸 이동
//			}
//			else
//				i--; // 위로 한칸 이동
//
//			break;
//		default :
//			;
//		}
//	}
//
//	// 출력
//	printf("결과\n");
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
	int length; // 행과 열의 길이
	int distance; // 이동 거리
	int count = 1;
	int dir = 1; // 1-오른쪽, 2-아래, 3-왼쪽, 4-위
	int matrix[10][10] = { 0 };

	printf("정사각 행렬의 길이를 입력하세요 : ");
	scanf("%d", &length);

	distance = length;
	// 규칙 : 오 -> 아, 왼 -> 위로 바뀔 때 이동 거리가 1씩 줄어든다.
	while (count < length * length + 1) // 배열을 전부 채웠으면 종료 
	{
		for (int i = distance; i > 0; i--) 
		{
			matrix[row][col] = count;
			count++;

			switch (dir)
			{
			case 1: // 오른쪽 이동
				if (i > 1)
					col++;
				else
				{
					row++;
					dir++;
					distance--;
				}
				break;
			case 2: // 아래쪽 이동
				if (i > 1)
					row++;
				else
				{
					col--;
					dir++;
				}
				break;
			case 3: // 왼쪽 이동
				if (i > 1)
					col--;
				else
				{
					row--;
					dir++;
					distance--;
				}
				break;
			case 4: // 위쪽 이동
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

	// 출력
	printf("결과\n");
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
//	printf("ary1의 주소 : %p\n", ary1);
//	printf("ary2의 주소 : %p\n", ary2);
//	printf("ary3의 주소 : %p\n", ary3);
//	printf("pary[0]의 주소 : %p\n", pary[0]);
//	printf("pary[1]의 주소 : %p\n", pary[1]);
//	printf("pary[2]의 주소 : %p\n", pary[2]);
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
//	// 초기화 하면서 가로 방향 합산
//	for (int i = 0; i < MAX_ROW - 1; i++)
//	{
//		for (int j = 0; j < MAX_COL - 1; j++)
//		{
//			matrix[i][j] = num++;
//			matrix[i][MAX_COL - 1] += matrix[i][j];
//		}
//	}
//
//	// 세로 방향 합산
//	for (int i = 0; i < MAX_COL; i++)
//	{
//		for (int j = 0; j < MAX_ROW - 1; j++)
//		{
//			matrix[MAX_ROW - 1][i] += matrix[j][i];
//		}
//	}
//
//	// 출력
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

#pragma region 지그재그 출력

//#define MAX_ROWCOL 5
//
//int get_abs(int x, int y);
//
//int main()
//{
//	int matrix[MAX_ROWCOL][MAX_ROWCOL] = { 0 };
//	int edgeDir = 0; // 모서리 진행 방향 : 0-오른쪽, 1-아래쪽
//	int diagonalDir = 0; // 대각선 진행 방향 : 0-우상, 1-좌하
//	int distance = 0; // 대각선 이동 거리 : 방향전환 할때 (row-col) 절대값
//	int row = 0, col = 0; // row-행, col-열
//	int count = 1;
//
//	printf("N의 크기 : %d\n", MAX_ROWCOL);
//	while (count < MAX_ROWCOL * MAX_ROWCOL + 1)
//	{
//		matrix[row][col] = count;
//		count++;
//
//		if (distance > 0) // 대각선 이동
//		{
//			if (diagonalDir) // 좌하 방향 이동
//			{
//				row++;
//				col--;
//				distance--;
//
//				if (row == MAX_ROWCOL - 1) // 아래쪽 끝 도달 시 오른쪽 이동
//					edgeDir = 0;
//				else // 아닐 시 아래쪽 이동
//					edgeDir = 1;
//			}
//			else // 우상 방향 이동
//			{
//				row--;
//				col++;
//				distance--;
//
//				if (col == MAX_ROWCOL - 1) // 오른쪽 끝 도달 시 아래쪽 이동
//					edgeDir = 1;
//				else // 아닐 시 오른쪽 이동
//					edgeDir = 0;
//			}
//		}
//		else // 모서리 이동
//		{
//			if (edgeDir) // 아래쪽 이동
//			{
//				row++;
//				distance = get_abs(row, col); // 대각선 이동 거리는 |row - col|
//				diagonalDir ^= 1; // 대각선 뱡향은 반대로 바뀜 (diagonalDir XOR 1)
//			}
//			else // 오른쪽 이동
//			{
//				col++;
//				distance = get_abs(row, col); // 대각선 이동 거리는 |row - col|
//				diagonalDir ^= 1; // 대각선 뱡향은 반대로 바뀜 (diagonalDir XOR 1)
//			}
//		}
//	}
//
//	// 출력
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
//// 절대값 구하기
//int get_abs(int x, int y) 
//{
//	if (x - y > 0) return x - y;
//	else return -(x - y);
//}

#pragma endregion
