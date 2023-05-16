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
//		printf("입력 파일을 열지 못했습니다.\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");
//	if (ofp = NULL)
//	{
//		printf("출력 파일을 열지 못했습니다.\n");
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
//		printf("입력 파일을 열지 못했습니다.\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");
//	if (ofp == NULL)
//	{
//		printf("출력 파일을 열지 못했습니다.\n");
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
//	printf("나이 : %d, 이름 : %s", age, name);
//	fclose(fp);
//
//	return 0;
//}

#pragma region 도전 실전 예제

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
//		printf("a.txt 파일을 열지 못했습니다.\n");
//		return 1;
//	}
//
//	bfp = fopen("b.txt", "w");
//	if (bfp == NULL)
//	{
//		printf("b.txt 파일을 열지 못했습니다.\n");
//		return 1;
//	}
//
//	cfp = fopen("c.txt", "w");
//	if (cfp == NULL)
//	{
//		printf("c.txt 파일을 열지 못했습니다.\n");
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

#pragma region 연습 문제

//int main()
//{
//	FILE* fp;
//	int target;
//	const int MAX_TIMES_TABLE = 9; // 몇 단까지?
//	char str[20];
//
//	fp = fopen("99.txt", "w+");
//	if (fp == NULL)
//	{
//		printf("파일을 만들지 못했습니다.\n");
//		return 1;
//	}
//	// 파일 입력
//	for (int i = 2; i < MAX_TIMES_TABLE + 1; i++)
//	{
//		for (int j = 1; j < MAX_TIMES_TABLE + 1; j++)
//		{
//			fprintf(fp, "%2d  x %2d = %3d\n", i, j, i * j);
//		}
//	}
//	// 목표 단수 입력
//	printf("몇 단을 출력 ? ");
//	scanf("%d%*c", &target);
//	// 출력부
//	printf("%d단\n", target);
//	printf("========================\n");
//	fseek(fp, 0, SEEK_SET); // 맨처음으로 가서
//	fgets(str, sizeof(str), fp); // 한줄 읽고 길이 파악
//	// 목표 단수 이동
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

#pragma region 파일 복사 프로그램

int main()
{
	FILE* sfp, * dfp;
	char sourceFileName[20];
	char destFileName[20];
	int copyBytes;
	int destFileSize = 0;
	int sourceFileSize;
	char buffer[20];

	printf("복사할 파일명 : ");
	scanf("%s%*c", sourceFileName);
	printf("대상 파일명 : ");
	scanf("%s%*c", destFileName);
	printf("복사 바이트 크기 : ");
	scanf("%d%*c", &copyBytes);

	sfp = fopen(sourceFileName, "rb");
	if (sfp == NULL)
	{
		printf("%s 파일을 열지 못했습니다.\n", sourceFileName);
		return 1;
	}

	dfp = fopen(destFileName, "wb");
	if (dfp == NULL)
	{
		printf("%s 파일을 만들지 못했습니다.\n", destFileName);
		return 1;
	}

	fseek(sfp, 0, SEEK_END);
	sourceFileSize = ftell(sfp); // 파일 사이즈 파악
	fseek(sfp, 0, SEEK_SET);
	while (destFileSize < sourceFileSize)
	{
		if (sourceFileSize - destFileSize < copyBytes)
		{ // 마지막에 destFileSize 사이즈가 sourceFileSize보다 더 커지는걸 방지
			fread(buffer, sourceFileSize - destFileSize, 1, sfp);
			fwrite(buffer, sourceFileSize - destFileSize, 1, dfp);
		}
		else 
		{
			fread(buffer, copyBytes, 1, sfp);
			fwrite(buffer, copyBytes, 1, dfp);
		}
		destFileSize = ftell(dfp); // 복사된 사이즈 파악
		Sleep(5);
		system("CLS");
		printf("원본 파일 : %s\n", sourceFileName);
		printf("대상 파일 : %s\n", destFileName);
		printf("복사중... %.1lf%%\n", (double)destFileSize / (double)sourceFileSize * 100.0);
	}
	system("CLS");
	printf("원본 파일 : %s\n", sourceFileName);
	printf("대상 파일 : %s\n", destFileName);
	printf("복사 완료!\n");

	fclose(sfp);
	fclose(dfp);

	return 0;
}

#pragma endregion
