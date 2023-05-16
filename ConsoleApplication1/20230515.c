#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

//int main(void)
//{
//	FILE *ifp, *ofp;
//	char str[80];
//	char *res;
//
//	ifp = fopen("a.txt", "r");
//	if (ifp == NULL)
//	{
//		printf("�Է� ������ ���� ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");
//	if (ofp = NULL)
//	{
//		printf("��� ������ ���� ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	while (1)
//	{
//		res = fgets(str, sizeof(str), ifp);
//		if (res == NULL)
//		{
//			break;
//		}
//		str[strlen(str) - 1] = '\0';
//		fputs(str, ofp);
//		fputs(" ", ofp);
//	}
//
//	fclose(ifp);
//	fclose(ofp);
//
//	return 0;
//}

//int main(void)
//{
//	FILE* ifp, * ofp;
//	char name[20];
//	int kor, eng, math;
//	int total;
//	double avg;
//	int res;
//
//	ifp = fopen("a.txt", "r");
//	if (ifp == NULL)
//	{
//		printf("�Է� ������ ���� ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");
//	if (ofp == NULL)
//	{
//		printf("��� ������ ���� ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	while (1)
//	{
//		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
//		if (res == EOF)
//		{
//			break;
//		}
//		total = kor + eng + math;
//		avg = total / 3.0;
//		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
//	}
//
//	fclose(ifp);
//	fclose(ofp);
//
//	return 0;
//}

//int main()
//{
//	FILE* fp;
//	int age;
//	char name[20];
//
//	fp = fopen("a.txt", "r");
//
//	fscanf(fp, "%d", &age);
//	fgets(name, sizeof(name), fp);
//
//	printf("���� : %d, �̸� : %s", age, name);
//	fclose(fp);
//
//	return 0;
//}

#pragma region ���� ���� ����

//int main()
//{
//	FILE* afp, * bfp, * cfp;
//	char openName[21];
//	char inputName[21];
//	int count = 10;
//
//	afp = fopen("a.txt", "r");
//	if (afp == NULL)
//	{
//		printf("a.txt ������ ���� ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	bfp = fopen("b.txt", "w");
//	if (bfp == NULL)
//	{
//		printf("b.txt ������ ���� ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	cfp = fopen("c.txt", "w");
//	if (cfp == NULL)
//	{
//		printf("c.txt ������ ���� ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	while (count > 0)
//	{
//		fgets(inputName, sizeof(inputName), stdin);
//		fputs(inputName, bfp);
//		fseek(afp, 0, SEEK_SET);
//		while (1)
//		{
//			fgets(openName, sizeof(openName), afp);
//			if (feof(afp))
//			{
//				fputs(inputName, cfp);
//				break;
//			}
//			if (strcmp(openName, inputName) == 0)
//			{
//				break;
//			}
//		}
//		count--;
//	}
//
//	fclose(afp);
//	fclose(bfp);
//	fclose(cfp);
//
//	return 0;
//}

#pragma endregion

#pragma region ���� ����

//int main()
//{
//	FILE* fp;
//	int target;
//	const int MAX_TIMES_TABLE = 9; // �� �ܱ���?
//	char str[20];
//
//	fp = fopen("99.txt", "w+");
//	if (fp == NULL)
//	{
//		printf("������ ������ ���߽��ϴ�.\n");
//		return 1;
//	}
//	// ���� �Է�
//	for (int i = 2; i < MAX_TIMES_TABLE + 1; i++)
//	{
//		for (int j = 1; j < MAX_TIMES_TABLE + 1; j++)
//		{
//			fprintf(fp, "%2d  x %2d = %3d\n", i, j, i * j);
//		}
//	}
//	// ��ǥ �ܼ� �Է�
//	printf("�� ���� ��� ? ");
//	scanf("%d%*c", &target);
//	// ��º�
//	printf("%d��\n", target);
//	printf("========================\n");
//	fseek(fp, 0, SEEK_SET); // ��ó������ ����
//	fgets(str, sizeof(str), fp); // ���� �а� ���� �ľ�
//	// ��ǥ �ܼ� �̵�
//	fseek(fp, (target - 2) * 9 * (strlen(str) + 1), SEEK_SET);
//	for (int i = 9; i > 0; i--)
//	{
//		fgets(str, sizeof(str), fp);
//		fputs(str, stdout);
//	}
//	printf("========================");
//	fclose(fp);
//
//	return 0;
//}

#pragma endregion

#pragma region ���� ���� ���α׷�

int main()
{
	FILE* sfp, * dfp;
	char sourceFileName[20];
	char destFileName[20];
	int copyBytes;
	int destFileSize = 0;
	int sourceFileSize;
	char buffer[20];

	printf("������ ���ϸ� : ");
	scanf("%s%*c", sourceFileName);
	printf("��� ���ϸ� : ");
	scanf("%s%*c", destFileName);
	printf("���� ����Ʈ ũ�� : ");
	scanf("%d%*c", &copyBytes);

	sfp = fopen(sourceFileName, "rb");
	if (sfp == NULL)
	{
		printf("%s ������ ���� ���߽��ϴ�.\n", sourceFileName);
		return 1;
	}

	dfp = fopen(destFileName, "wb");
	if (dfp == NULL)
	{
		printf("%s ������ ������ ���߽��ϴ�.\n", destFileName);
		return 1;
	}

	fseek(sfp, 0, SEEK_END);
	sourceFileSize = ftell(sfp); // ���� ������ �ľ�
	fseek(sfp, 0, SEEK_SET);
	while (destFileSize < sourceFileSize)
	{
		if (sourceFileSize - destFileSize < copyBytes)
		{ // �������� destFileSize ����� sourceFileSize���� �� Ŀ���°� ����
			fread(buffer, sourceFileSize - destFileSize, 1, sfp);
			fwrite(buffer, sourceFileSize - destFileSize, 1, dfp);
		}
		else 
		{
			fread(buffer, copyBytes, 1, sfp);
			fwrite(buffer, copyBytes, 1, dfp);
		}
		destFileSize = ftell(dfp); // ����� ������ �ľ�
		Sleep(5);
		system("CLS");
		printf("���� ���� : %s\n", sourceFileName);
		printf("��� ���� : %s\n", destFileName);
		printf("������... %.1lf%%\n", (double)destFileSize / (double)sourceFileSize * 100.0);
	}
	system("CLS");
	printf("���� ���� : %s\n", sourceFileName);
	printf("��� ���� : %s\n", destFileName);
	printf("���� �Ϸ�!\n");

	fclose(sfp);
	fclose(dfp);

	return 0;
}

#pragma endregion
