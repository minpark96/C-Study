#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma region �߱�����

#define MAX_NUM 9
#define MIN_NUM 1

int main()
{
	int inputNum[3] = { 0, -1, -2 };
	int randNum[3];
	int exeCount = 1;
	int strikeCount = 0;
	int ballCount = 0;
	int isHomerun = 0;

	// 1 ~ 9  ���� ������ ����
	for (int idx = 0; idx < 3; idx++)
	{
		srand(time(NULL));
		randNum[idx] = rand() % 9 + 1;

		// �ߺ� üũ
		for (int i = 0; i < idx; i++)
		{
			if (randNum[i] == randNum[idx])
			{
				idx--;
				break;
			}
		}
	}

	// ������
	printf("���� : ");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", randNum[i]);
	}
	printf("\n");

	// �Է� �� Ȩ�� �Ǻ� �� ���
	while (!isHomerun)
	{
		printf("%d >> ", exeCount);
		// ���� �Է� �ޱ�
		for (int idx = 0; idx < 3; idx++)
		{
			scanf("%d", &inputNum[idx]);

			if (inputNum[idx] > MAX_NUM || inputNum[idx] < MIN_NUM)
			{
				exeCount++;
				printf("%d ~ %d ������ ���� �ƴմϴ�. ���Է� �ϼ���!\n", MIN_NUM, MAX_NUM);
				printf("%d >> ", exeCount);
				while (getchar() != '\n') {} // ���� �ʱ�ȭ
				for (int i = 0, j = 0; j < 3; i--, j++) // �Է� �迭 �ʱ�ȭ
				{
					inputNum[j] = i;
				}
				idx = -1;
				continue;
			}

			for (int i = 0; i < idx; i++)
			{
				if (inputNum[i] == inputNum[idx])
				{
					exeCount++;
					printf("�ߺ� ���ڰ� �ֽ��ϴ�. ���Է� �ϼ���!\n");
					printf("%d >> ", exeCount);
					while (getchar() != '\n') {} // ���� �ʱ�ȭ
					for (int i = 0, j = 0; j < 3; i--, j++) // �Է� �迭 �ʱ�ȭ
					{
						inputNum[j] = i;
					}
					idx = -1;
					break;
				}
			}
		}

		// ���� üũ
		for (int idxRand = 0; idxRand < 3; idxRand++)
		{
			for (int idxInput = 0; idxInput < 3; idxInput++)
			{
				if (inputNum[idxInput] == randNum[idxRand])
				{
					if (idxInput == idxRand)
						strikeCount++;
					else
						ballCount++;
				}
			}
		}
		
		if (strikeCount == 3) // Ȩ��
		{
			printf(" -> HR\n");
			isHomerun ^= 1;
		}
		else
		{
			if (strikeCount == 0 && ballCount == 0) // �ƿ�
				printf(" -> out\n");
			else // �� or ��Ʈ����ũ
				printf(" -> %ds %db\n", strikeCount, ballCount); 

			for (int i = 0, j = 0; j < 3; i--, j++) // �Է� �迭 �ʱ�ȭ
			{
				inputNum[j] = i;
			}

			strikeCount = 0;
			ballCount = 0;
			exeCount++;
		}
	}

	return 0;
}

#pragma endregion

/*void swap_ptr(char** ppa, char** ppb);

int main()
{
	int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("------------------------------------------------------------------------\n");
	printf("����       ������      &����        *����       **����\n");
	printf("------------------------------------------------------------------------\n");
	printf("     a%10d%10u\n", a, &a);
	printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("------------------------------------------------------------------------\n");*/

	/*char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);

	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}*/

#pragma region ��������

//void MaxAndMin(int** ptrMax, int** ptrMin, int* ptrArr);
//
//int main()
//{
//	int* maxPtr;
//	int* minPtr;
//	int arr[5];
//
//	printf("���� 5�� �Է�\n");
//	// �Է�
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	MaxAndMin(&maxPtr, &minPtr, arr);
//
//	printf("arr �ּ� : %p, &arr �ּ� : %p, maxPtr �ּ� : %p, minPtr �ּ� : %p\n", arr, &arr, maxPtr, minPtr);
//	printf("maxPtr �ּҿ� ����� ��: %d\n", *maxPtr);
//	printf("minPtr �ּҿ� ����� ��: %d\n", *minPtr);
//
//	return 0;
//}
//

//
//void MaxAndMin(int** ptrMax, int** ptrMin, int* ptrArr)
//{
//	*ptrMax = ptrArr;
//	*ptrMin = ptrArr;
//
//	for (int i = 1; i < 5; i++)
//	{
//		if (ptrArr[i] > **ptrMax)
//		{
//			*ptrMax = &ptrArr[i];
//		}
//
//		if (ptrArr[i] < **ptrMin)
//		{
//			*ptrMin = &ptrArr[i];
//		}
//	}
//}

#pragma endregion

//void func(int (*fp)(int, int));
//int sum(int a, int b);
//int mul(int a, int b);
//int max(int a, int b);
//
//int main(void)
//{
//	int sel;
//
//	printf("01 �� ������ ��\n");
//	printf("02 �� ������ ��\n");
//	printf("03 �� �������� ū �� ���\n");
//	printf("���ϴ� ������ �����ϼ��� : ");
//	scanf("%d", &sel);
//
//	switch (sel)
//	{
//	case 1: func(sum); break;
//	case 2: func(mul); break;
//	case 3: func(max); break;
//	}
//
//	return 0;
//}
//
//void func(int (*fp)(int, int))
//{
//	int a, b;
//	int res;
//
//	printf("�� ������ ���� �Է��ϼ��� : ");
//	scanf("%d%d", &a, &b);
//	res = fp(a, b);
//	printf("�ᱣ���� : %d\n", res);
//}
//
//int sum(int a, int b)
//{
//	return (a + b);
//}
//
//int mul(int a, int b)
//{
//	return (a * b);
//}
//
//int max(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}

//void swap(char* type, void* vp1, void* vp2);
//
//int main()
//{
//	int age1, age2;
//	double height1, height2;
//
//	printf("ù ��° ����� ���̿� Ű �Է� : ");
//	scanf("%d%lf", &age1, &height1);
//	printf("�� ��° ����� ���̿� Ű �Է� : ");
//	scanf("%d%lf", &age2, &height2);
//
//	swap("int", &age1, &age2);
//	swap("double", &height1, &height2);
//
//	printf("ù ��° ����� ���̿� Ű : %d, %.1lf\n", age1, height1);
//	printf("�� ��° ����� ���̿� Ű : %d, %.1lf\n", age2, height2);
//
//	return 0;
//}
//
//void swap(char* type, void* vp1, void* vp2)
//{
//	if (!strcmp("int", type))
//	{
//		int itemp = 0;
//		itemp = *(int*)vp1;
//		*(int*)vp1 = *(int*)vp2;
//		*(int*)vp2 = itemp;
//	}
//	else if (!strcmp("double", type))
//	{
//		double dtemp = 0.0;
//		dtemp = *(double*)vp1;
//		*(double*)vp1 = *(double*)vp2;
//		*(double*)vp2 = dtemp;
//	}
//	else
//		;
//}

//int main(void)
//{
	//int* pi;
	//double* pd;

	//pi = (int*)malloc(sizeof(int));
	//memset(pi, 0, sizeof(int)); // Ư�� ������ �ʱ�ȭ

	//int *pi2 = calloc(5, sizeof(int)); // �ڵ����� 0

	//realloc(pi2, sizeof(int) * 10);

	//if (pi == NULL)
	//{
	//	printf("# �޸𸮰� �����մϴ�.\n");
	//	exit(1);
	//}
	//pd = (double*)malloc(sizeof(double));

	//*pi = 10;
	//*pd = 3.4;

	//printf("���������� ��� : %d\n", *pi);
	//printf("�Ǽ������� ��� : %.1lf\n", *pd);

	//free(pi);
	//free(pd);
//	
//	int* pi;
//	int size = 5;
//	int count = 0;
//	int num;
//	int i;
//
//	pi = (int*)calloc(size, sizeof(int));
//	while (1)
//	{
//		printf("����� �Է��ϼ��� => ");
//		scanf("%d", &num);
//		if (num <= 0) break;
//		if (count == size)
//		{
//			size += 5;
//			pi = (int*)realloc(pi, size * sizeof(int));
//		}
//		pi[count++] = num;
//	}
//	for (i = 0; i < count; i++)
//	{
//		printf("%5d", pi[i]);
//
//	}
//	free(pi);
//	
//	return 0;
//}

#pragma region ���� ����

//#define MAX_SIZE 100
//
//int main()
//{
//	char* ptrInput = (char*)calloc(MAX_SIZE, sizeof(char));
//	char* ptrOutput = (char*)calloc(MAX_SIZE, sizeof(char));
//	char* ptrTarget = (char*)calloc(MAX_SIZE, sizeof(char));
//
//	if (ptrInput == NULL)
//	{
//		printf("�޸� �Ҵ� ����!\n");
//		exit(1);
//	}
//	if (ptrOutput == NULL)
//	{
//		printf("�޸� �Ҵ� ����!\n");
//		exit(1);
//	}
//	if (ptrTarget == NULL)
//	{
//		printf("�޸� �Ҵ� ����!\n");
//		exit(1);
//	}
//	// Target���� �� ���ڿ� ũ�� ��ŭ ���Ҵ�
//	strcpy(ptrTarget, "Quit");
//	ptrTarget = (char*)realloc(ptrTarget, (strlen(ptrTarget) + 1) * sizeof(char)); 
//
//	while (strcmp(ptrTarget, ptrInput)) // Target�� �Է� ���������� ����
//	{
//		printf("�Է� > ");
//
//		fgets(ptrInput, MAX_SIZE, stdin); // ���ڿ� �Է�
//		ptrInput[strlen(ptrInput) - 1] = '\0'; // ���๮�� ����
//		// �Է� ���� ���ڿ� ������ ��ŭ ���Ҵ�
//		ptrInput = (char*)realloc(ptrInput, (strlen(ptrInput) + 1) * sizeof(char)); 
//		ptrOutput = (char*)realloc(ptrOutput, (strlen(ptrInput) + 1) * sizeof(char));
//
//		printf("��� > ");
//		// ������ " " ������ ���������� Ž��
//		for (int idx = strlen(ptrInput) - 1, count = 1; idx > -1; idx--, count++) 
//		{
//			if (idx == 0) // ù���ڱ��� Ž���� �Ϸ����� ��
//			{
//				strncpy(ptrOutput, ptrInput + idx, count);
//				printf("%s", ptrOutput);
//			}
//			else
//			{
//				if (ptrInput[idx - 1] == ' ') // ���� �ε����� ������ ���
//				{
//					// ������� ���ڸ� ��� �����Ϳ� ���̸�ŭ ����
//					strncpy(ptrOutput, ptrInput + idx, count); 
//					printf("%s", ptrOutput); // ������ ���� ���
//					printf(" "); // ���� ���� ���
//					count = -1; // ���� ���ڰ� �����̹Ƿ� count�� -1�� �ʱ�ȭ
//					// ��� ������ �ʱ�ȭ
//					memset(ptrOutput, 0, (strlen(ptrInput) + 1) * sizeof(char)); 
//				}
//			}
//		}
//		printf("\n");
//		
//		if (strcmp(ptrTarget, ptrInput)) // �Է¹��ڰ� Target�� �ƴ� ��
//		{
//			// �ִ� ��������� ������
//			ptrInput = (char*)realloc(ptrInput, MAX_SIZE * sizeof(char)); 
//			ptrOutput = (char*)realloc(ptrOutput, MAX_SIZE * sizeof(char));
//			memset(ptrInput, 0, MAX_SIZE * sizeof(char)); // 0���� �ʱ�ȭ
//			memset(ptrOutput, 0, MAX_SIZE * sizeof(char));
//		}
//	}
//
//	printf("���α׷��� �����մϴ�.\n");
//	free(ptrInput); // �޸� ��ȯ
//	free(ptrOutput);
//	free(ptrTarget);
//
//	return 0;
//}

#pragma endregion
