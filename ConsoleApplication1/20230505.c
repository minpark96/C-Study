#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#pragma region ������ �����ͷ�
//int main()
//{
//	int ary[5] = { 10, 20, 30, 40, 50 };
//	int* pa = ary;
//	int *pb = pa + 3;
//
//	printf("pa : %u\n", pa);
//	printf("pb : %u\n", pb);
//
//	pa++;
//	printf("pb - pa : %u\n", pb - pa);
//
//	printf("�տ� �ִ� �迭 ����� �� ��� : ");
//	if (pa < pb) printf("%d\n", *pa);
//	else printf("%d\n", *pb);
//
//	return 0;
//}

//void NeonSign(char* str, int* size);
//
//int main()
//{
//	char str[102];
//	int size = sizeof(str) / sizeof(str[0]);
//	
//	printf("���ڿ��� �Է��ϼ���(�ִ� 100��) : ");
//	fgets(str, sizeof(str), stdin);
//	NeonSign(str, &size);
//
//	return 0;
//}
//
//void NeonSign(char* str, int* size)
//{
//	const int SLEEP_TIME = 400;
//	char temp;
//
//	// fgets '\n' ����� + �� �� ���� ����
//	*(str + strlen(str) - 1) = ' ';
//	*(str + strlen(str)) = '\0';
//
//	while (1)
//	{
//		system("cls");
//		puts(str);
//		Sleep(SLEEP_TIME);
//
//		temp = *str;
//
//		for (int i = 1; i < *size + 1; i++)
//		{
//			if (*(str + i) == '\0')
//			{
//				*(str + i - 1) = temp;
//				break;
//			}
//			else
//				*(str + i - 1) = *(str + i);
//		}
//	} 
//}
#pragma endregion

#pragma region ������
//void ReverseString(char* str);
//
//int main()
//{
//	char str[20];
//	int size = sizeof(str) / sizeof(str[0]);
//
//	printf("input  : ");
//	fgets(str, sizeof(str), stdin);
//	// fgets '\n' �����
//	*(str + strlen(str) - 1) = '\0';
//
//	ReverseString(str);
//
//	printf("output : ");
//	puts(str);
//
//	return 0;
//}
//
//void ReverseString(char* str) 
//{
//	char temp;
//
//	for (int i = 0; i < strlen(str) / 2; i++)
//	{
//		temp = *(str + strlen(str) - i - 1);
//		*(str + strlen(str) - i - 1) = *(str + i);
//		*(str + i) = temp;
//	}
//}
#pragma endregion

#pragma region �迭�� &����
//int main()
//{
//	char Arr[64] = { 0 };
//	printf("%d\n", Arr);
//	printf("%d\n", Arr + 64);
//	printf("-----------------\n");
//	printf("%d\n", &Arr);
//	printf("%d\n", &Arr + 64);
//
//	return 0;
//}
#pragma endregion

#pragma region MyRegion

//void output_ary(double* pa, double max, int size);
//void input_ary(double* pa, int size);
//void find_max(double* pa, int size, double* max);
//
//int main()
//{
//	double ary[5];
//	double max;
//	int size = sizeof(ary) / sizeof(ary[0]);
//	input_ary(ary, size);
//	find_max(ary, size, &max);
//	output_ary(ary, max, size);
//
//	return 0;
//}
//
//void output_ary(double *pa, double max, int size)
//{
//	int i;
//
//	for (i = 0; i < size; i++)
//	{
//		printf("%.1lf ", *(pa + i));
//	}
//	printf("\n�迭�� �ִ� : %.1lf\n", max);
//}
//
//void input_ary(double *pa, int size)
//{
//	int i;
//
//	printf("%d���� �Ǽ��� �Է� : ", size);
//	for (i = 0; i < size; i++)
//	{
//		scanf("%lf", pa + i);
//	}
//}
//
//void find_max(double *pa, int size, double* max)
//{
//	int i;
//
//	*max = pa[0];
//	for (i = 1; i < size; i++)
//	{
//		if (pa[i] > *max) *max = pa[i];
//	}
//}

#pragma endregion

#pragma region �ζ�

//void input_nums(int* lotto_nums, int size);
//void print_nums(int* lotto_nums, int size);
//int CheckVaild(int* lotto_nums, int* idx);
//void CheckDuplication(int* lotto_nums, int* idx);
//
//int main()
//{
//	int lotto_nums[6];
//	int size = sizeof(lotto_nums) / sizeof(lotto_nums[0]);
//
//	input_nums(lotto_nums, size);
//	print_nums(lotto_nums, size);
//	return 0;
//}
//
//void input_nums(int* lotto_nums, int size)
//{
//	for (int i = 0;i < size;i++)
//	{
//		printf("��ȣ �Է� : ");
//		scanf("%d", &lotto_nums[i]);
//
//		if (CheckVaild(lotto_nums, &i))
//			continue;
//
//		if(i > 0)
//			CheckDuplication(lotto_nums, &i);
//	}
//}
//
//void print_nums(int* lotto_nums, int size)
//{
//	printf("�ζ� ��ȣ : ");
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", lotto_nums[i]);
//	}
//}
//
//int CheckVaild(int* lotto_nums, int* idx)
//{
//	const int MAX_NUM = 45, MIN_NUM = 1;
//
//	if (lotto_nums[*idx] > MAX_NUM || lotto_nums[*idx] < MIN_NUM)
//	{
//		printf("1~45�� ���� �Է��ϼ���!\n");
//		--(*idx);
//		return 1;
//	}
//	else
//		return 0;
//}
//
//void CheckDuplication(int* lotto_nums, int* idx)
//{
//	for (int j = 0; j < *idx; j++)
//	{
//		if (lotto_nums[j] == lotto_nums[*idx])
//		{
//			printf("���� ��ȣ�� �ֽ��ϴ�!\n");
//			--(*idx);
//		}
//	}
//}

#pragma endregion

#pragma region ������1

//int main()
//{
//	int Arr[6] = { 1, 2, 3, 4, 5, 6 };
//	int* head = Arr, *tail = &Arr[5];
//	int temp;
//
//	for (int i = 0; i < 6 / 2; i++)
//	{
//		temp = *(head + i);
//		*(head + i) = *(tail - i);
//		*(tail - i) = temp;
//	}
//
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", Arr[i]);
//	}
//}

#pragma endregion

//void my_gets(char* str, int size);
//
//int main(void)
//{
//	/*char ch;
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%c", &ch);
//		printf("%c", ch);
//	}
//	while ( (ch = getchar()) != EOF && ch!='\n')
//	{
//		
//	}
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%c", &ch);
//		printf("%c", ch);
//	}
//
//	return 0;*/
//
//	char str[7];
//
//	my_gets(str, sizeof(str));
//	printf("�Է��� ���ڿ� : %s\n", str);
//
//	return 0;
//}
//
//void my_gets(char* str, int size)
//{
//	int ch;
//	int i = 0;
//
//	ch = getchar();
//	while ((ch != '\n') && (i < size - 1))
//	{
//		str[i] = ch;
//		i++;
//		ch = getchar();
//	}
//
//	str[i] = '\0';
//}

//int main(void)
//{
//	int num, grade;
//
//	printf("�й� �Է� : ");
//	scanf("%d", &num);
//	
//	clear_stdin();
//	getchar();
//	printf("���� �Է� : ");
//	grade = getchar();
//	printf("�й� : %d, ���� : %c", num, grade);
//
//	return 0;
//}

int main()
{
	int count = 0, max = 0;
	int res;
	char ch;

	while (1)
	{
		/*res = scanf("%c", &ch);
		if (ch == '\n') count = 0;
		else ++count;
		if (res == EOF) break;
		if (count > max) max = count;*/
		ch = getchar();
		if (ch == EOF) break;
		else count++;
		if (count > max) max = count;
	}

	printf("���� �� �ܾ��� ���� : %d", max);

	return 0;
}