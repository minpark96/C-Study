#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//char* my_strcpy(char* pd, char* ps);
//char* my_strncpy(char* pd, char* ps, int len);
//char* my_strcat(char* pd, char* ps);
//char* my_strncat(char* pd, char* ps, int len);
//int my_strlen(char* ps);
//int my_strcmp(char* pa, char* pb);
//int my_strncmp(char* pa, char* pb, int len);
//
//int main()
//{
	//printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
	//printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1);
	//printf("ù ��° ���� : %c\n", *"apple");
	//printf("�� ��° ���� : %c\n", *("apple" + 1));
	//printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[3]);

	/*char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';

	printf("�Էµ� ���ڿ��� %s�Դϴ�\n", str);*/

	/*int age;
	char name[20];

	printf("���� �Է� : ");
	scanf("%d", &age);
	getchar();

	printf("�̸� �Է� : ");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);*/

	/*char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");*/

	/*int a = 10;
	int b = 20;

	char c[10] = "apple";
	char d[10] = "pie";

	printf("%d\n", a + b);
	printf("%s\n", c + d);*/

	/*char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("���� ���ڿ� : %s\n", str1);
	strcpy(str1, str2);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps1);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps2);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, "banana");
	printf("�ٲ� ���ڿ� : %s\n", str1);*/

	//char str[80] = "straw";

	//strcat(str, "berry");
	//printf("%s\n", str);
	//strncat(str, "piece", 1);
	//printf("%s\n", str);

	/*char str1[80], str2[80];
	char* resp;

	printf("2���� ���� �̸� �Է� : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
		resp = str1;
	else
		resp = str2;
	printf("�̸��� �� ������ : %s\n", resp);*/

	/*char str1[80] = "pear";
	char str2[80] = "peach";

	
	if (strncmp(str1, str2, 3) > 0)
	{
		printf("������ ���߿� ������ ���� �̸� : ");
		printf("%s\n", str1);
	}
	else if (strncmp(str1, str2, 3) == 0)
	{
		printf("���� ���� �̸� : ");
		printf("%s\n", str1);
	}
	else
	{
		printf("������ ���߿� ������ ���� �̸� : ");
		printf("%s\n", str2);
	}*/

//	char str[80] = "strawberry";
//	char str2[80] = "kiwiapplestrawberry";
//
//	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
//	my_strcpy(str, "apple");
//	printf("�ٲ� �� ���ڿ� : %s\n", str);
//	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));
//	my_strncpy(str, "apple", 3);
//	printf("���� ���� �ٲ� �� ���ڿ� : %s\n", str);
//	printf("���� ���� �ٸ� ���ڿ� ���� : %s\n", my_strncpy(str, "kiwi", 3));
//	my_strcat(str, "ing");
//	printf("�ٲ� �� ���ڿ� : %s\n", str);
//	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcat(str, "and"));
//	my_strncat(str, "ing", 2);
//	printf("���� ���� �ٲ� �� ���ڿ� : %s\n", str);
//	printf("���� ���� �ٸ� ���ڿ� ���� : %s\n", my_strncat(str, "and", 1));
//	printf("�� ���ڿ� : %d\n", my_strcmp(str, str2));
//	printf("���� ���ڿ� �� : %d\n", my_strcmp(str, str));
//	printf("���� ���� �� ���ڿ� : %d\n", my_strncmp(str, str2, 4));
//	printf("���ڿ� ���� : %d\n", my_strlen(str));
//
//	return 0;
//}
//
//char* my_strcpy(char* pd, char* ps)
//{
//	char* p0 = pd;
//
//	while (*ps != '\0')
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//	*pd = '\0';
//
//	return p0;
//}
//
//char* my_strncpy(char* pd, char* ps, int len)
//{
//	char* p0 = pd;
//
//	while (len > 0)
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//		len--;
//	}
//
//	return p0;
//}
//
//char* my_strcat(char* pd, char* ps)
//{
//	char* p0 = pd;
//
//	while (*pd != '\0')
//	{
//		pd++;
//	}
//	while (*ps != '\0')
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//	*pd = '\0';
//
//	return p0;
//}
//
//char* my_strncat(char* pd, char* ps, int len)
//{
//	char* p0 = pd;
//
//	while (*pd != '\0')
//	{
//		pd++;
//	}
//	while (len > 0)
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//		len--;
//	}
//	*pd = '\0';
//
//	return p0;
//}
//
//int my_strlen(char* ps)
//{
//	int cnt = 0;
//	while (*ps != '\0')
//	{
//		cnt++;
//		ps++;
//	}
//	return cnt;
//}
//
//int my_strcmp(char* pa, char* pb)
//{
//	while ((*pa == *pb) && (*pa != '\0'))
//	{
//		pa++;
//		pb++;
//	}
//
//	if (*pa > *pb) return 1;
//	else if (*pa < *pb) return -1;
//	else return 0;
//}
//
//int my_strncmp(char* pa, char* pb, int len)
//{
//	while ((*pa == *pb) && (*pa != '\0') && len != 0)
//	{
//		pa++;
//		pb++;
//		len--;
//	}
//
//	if (*pa > *pb) return 1;
//	else if (*pa < *pb) return -1;
//	else return 0;
//}

#pragma region ���� ���� �ٲٱ�

//int my_strcmp(char* pa, char* pb);
//void to_lowercase(char* pa, char* pb);
//void swap(char* pa, char* pb);
//void line_up(char* first, char* second, char* third);
//
//int main()
//{
//	char str1[80], str2[80], str3[80];
//
//	printf("�� �ܾ� �Է� : ");
//	scanf("%s%s%s", str1, str2, str3);
//	line_up(str1, str2, str3);
//	printf("%s, %s, %s\n", str1, str2, str3);
//
//	return 0;
//}
//
//int my_strcmp(char* pa, char* pb)
//{
//	char tempA[80] = "";
//	char tempB[80] = "";
//	int i = 0;
//
//	strcpy(tempA, pa);
//	strcpy(tempB, pb);
//
//	to_lowercase(tempA, tempB);
//
//	while (tempA[i] == tempB[i] && tempA[i] != '\0')
//		i++;
//
//	if (tempA[i] > tempB[i]) return 1;
//	else if (tempA[i] < tempB[i]) return -1;
//	else
//	{
//		while (*pa == *pb && *pa != '\0')
//		{
//			pa++;
//			pb++;
//		}
//
//		if (*pa <= 90 && *pa >= 65) return -1;
//		if (*pb <= 90 && *pb >= 65) return 1;
//		return 0;
//	}
//}
//
//void to_lowercase(char *pa, char *pb)
//{
//	while ((*pa != '\0') || (*pb != '\0'))
//	{
//		if (*pa <= 90 && *pa >= 65) *pa += 32;
//		if (*pb <= 90 && *pb >= 65) *pb += 32;
//
//		pa++;
//		pb++;
//	}
//}
//
//void swap(char *pa, char *pb)
//{
//	char temp[80];
//	strcpy(temp, pa);
//	strcpy(pa, pb);
//	strcpy(pb, temp);
//}
//
//void line_up(char* first, char* second, char* third)
//{
//	if (my_strcmp(first, second) > 0)
//		swap(first, second);
//
//	if (my_strcmp(second, third) > 0)
//		swap(second, third);
//
//	if (my_strcmp(first, second) > 0)
//		swap(first, second);
//}

#pragma endregion

#pragma region ���ڿ� �ٲٱ�

void input_string(char* str);

int main()
{
	char strInput[80];
	char strTarget[80];
	char strChange[80];
	char temp[80] = "";
	int length = 0;
	char* address = 0;

	printf("���ڿ��� �Է��ϼ��� : ");
	input_string(strInput);
	printf("ã�� �ܾ �Է��ϼ��� : ");
	input_string(strTarget);
	printf("������ �ܾ �Է��ϼ��� : ");
	input_string(strChange);


	for (int i = 0; i < strlen(strInput); i++)
	{
		if (!strncmp(strInput + i, strTarget, strlen(strTarget)))
		{
			address = &strInput[i];
			length = i;
			break;
		}
	}

	strncpy(temp, strInput, length);
	strncat(temp, strChange, strlen(strChange));
	strcat(temp, address + strlen(strTarget));
	strcpy(strInput, temp);

	printf("%s ��ġ �ּ� : %p\n", strTarget, address);
	printf("�ٲ� ���ڿ� : %s\n", strInput);

	return 0;
}

void input_string(char* str)
{
	char temp[80] = "";
	fgets(temp, sizeof(temp), stdin);
	temp[strlen(temp) - 1] = '\0';
	strcpy(str, temp);
}

#pragma endregion

//void assign10(void);
//void assign20(void);
//
//int a;
//
//
//int main()
//{
//
//	printf("�Լ� ȣ�� �� a �� : %d\n", a);
//
//	assign10();
//	assign20();
//
//	printf("�Լ� ȣ�� �� a �� : %d\n", a);
//
//	return 0;
//}
//
//void assign10(void)
//{
//	a = 10;
//}
//
//void assign20(void)
//{
//	int a;
//
//	a = 20;
//}

//void auto_func(void);
//void static_func(void);
//
//int main()
//{
//	int i;
//
//	printf("�Ϲ� ���� ����(auto)�� ����� �Լ�...\n");
//	for(i = 0; i < 3; i++)
//	{
//		auto_func();
//	}
//
//	printf("���� ���� ����(static)�� ����� �Լ�...\n");
//	for (i = 0; i < 3; i++)
//	{
//		static_func();
//	}
//
//	return 0;
//}
//
//void auto_func(void)
//{
//	auto int a = 0;
//
//	a++;
//	printf("%d\n", a);
//}
//
//void static_func(void)
//{
//	static int a;
//
//	a++;
//	printf("%d\n", a);
//}