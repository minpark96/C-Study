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
//		switch (dir)
//		{
//		case 1: // 오른쪽
//			matrix[i][j] = currentNum;
//			currentNum++;
//
//			if (j == col - 1 || matrix[i][j + 1] != 0) // 최대 크기에 도달 했거나(최외곽), 0이 아닌 수를 만났을 때 방향 변경(내부)
//			{
//				dir++; // 시계 방향 전환 오른쪽(1) -> 아래(2)
//				i++; // 아래로 한칸 이동
//			}
//			else
//				j++; // 오른쪽 한칸 이동
//
//			break;
//		case 2: // 아래
//			matrix[i][j] = currentNum;
//			currentNum++;
//
//			if ((i == row - 1 && j == col - 1) || matrix[i + 1][j] != 0) // 최대 크기에 도달 했거나(최외곽), 0이 아닌 수를 만났을 때 방향 변경(내부)
//			{
//				dir++; // 시계 방향 전환 아래(2) -> 왼쪽(3)
//				j--; // 왼쪽 한칸 이동
//			}
//			else
//				i++; // 아래 한칸 이동
//
//			break;
//		case 3: // 왼쪽
//			matrix[i][j] = currentNum;
//			currentNum++;
//
//			if (j == 0 || matrix[i][j - 1] != 0) // 최대 크기에 도달 했거나(최외곽), 0이 아닌 수를 만났을 때 방향 변경(내부)
//			{
//				dir++; // 시계 방향 전환 왼쪽(3) -> 위(4)
//				i--; // 위로 한칸 이동
//			}
//			else
//				j--; // 왼쪽 한칸 이동
//
//			break;
//		case 4: // 위
//			matrix[i][j] = currentNum;
//			currentNum++;
//
//			if (matrix[i - 1][j] != 0) // 0이 아닌 수를 만났을 때 방향 변경(내부)
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
//	int matrix[MAX_ROW][MAX_COL];
//	int* pmatrix[MAX_ROW] = { 0 };
//	int num = 1;
//	int sumX = 0;
//	int sumY = 0;
//
//	// 초기화 하면서 가로 방향 합산
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
//	// 세로 방향 합산
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

#define MAX_ROWCOL 4

int main()
{
	int matrix[MAX_ROWCOL][MAX_ROWCOL] = { 0 };
	int dir = 1; // 1일때 우상, 0일때 좌하
	int currentNum = 1; // 현재 숫자
	int i = 0, j = 0; // i - 행, j - 열

	printf("N의 크기 : %d\n", MAX_ROWCOL);

	while (currentNum <= MAX_ROWCOL * MAX_ROWCOL)
	{
		matrix[i][j] = currentNum;
		currentNum++;

		if (dir) // 오른쪽 위 대각선 이동
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
		else // 왼쪽 아래 대각선 이동
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

	// 출력
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
