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
	//printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
	//printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
	//printf("첫 번째 문자 : %c\n", *"apple");
	//printf("두 번째 문자 : %c\n", *("apple" + 1));
	//printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[3]);

	/*char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';

	printf("입력된 문자열은 %s입니다\n", str);*/

	/*int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);
	getchar();

	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);*/

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

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);*/

	//char str[80] = "straw";

	//strcat(str, "berry");
	//printf("%s\n", str);
	//strncat(str, "piece", 1);
	//printf("%s\n", str);

	/*char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
		resp = str1;
	else
		resp = str2;
	printf("이름이 긴 과일은 : %s\n", resp);*/

	/*char str1[80] = "pear";
	char str2[80] = "peach";

	
	if (strncmp(str1, str2, 3) > 0)
	{
		printf("사전에 나중에 나오는 과일 이름 : ");
		printf("%s\n", str1);
	}
	else if (strncmp(str1, str2, 3) == 0)
	{
		printf("같은 과일 이름 : ");
		printf("%s\n", str1);
	}
	else
	{
		printf("사전에 나중에 나오는 과일 이름 : ");
		printf("%s\n", str2);
	}*/

//	char str[80] = "strawberry";
//	char str2[80] = "kiwiapplestrawberry";
//
//	printf("바꾸기 전 문자열 : %s\n", str);
//	my_strcpy(str, "apple");
//	printf("바꾼 후 문자열 : %s\n", str);
//	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));
//	my_strncpy(str, "apple", 3);
//	printf("길이 지정 바꾼 후 문자열 : %s\n", str);
//	printf("길이 지정 다른 문자열 대입 : %s\n", my_strncpy(str, "kiwi", 3));
//	my_strcat(str, "ing");
//	printf("바꾼 후 문자열 : %s\n", str);
//	printf("다른 문자열 대입 : %s\n", my_strcat(str, "and"));
//	my_strncat(str, "ing", 2);
//	printf("길이 지정 바꾼 후 문자열 : %s\n", str);
//	printf("길이 지정 다른 문자열 대입 : %s\n", my_strncat(str, "and", 1));
//	printf("비교 문자열 : %d\n", my_strcmp(str, str2));
//	printf("같은 문자열 비교 : %d\n", my_strcmp(str, str));
//	printf("길이 지정 비교 문자열 : %d\n", my_strncmp(str, str2, 4));
//	printf("문자열 길이 : %d\n", my_strlen(str));
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

//int my_strcmp(char* pa, char* pb);
//
//int main()
//{
//	char str1[80], str2[80], str3[80];
//	char* first = str1, *second = str2, *third = str3;
//	char* temp;
//
//	printf("세 단어 입력 : ");
//	scanf("%s%s%s", str1, str2, str3);
//
//	if (my_strcmp(first, second) > 0)
//	{
//		temp = first;
//		first = second;
//		second = temp;
//	}
//
//	if (my_strcmp(second, third) > 0)
//	{
//		temp = second;
//		second = third;
//		third = temp;
//	}
//
//	if (my_strcmp(first, second) > 0)
//	{
//		temp = first;
//		first = second;
//		second = temp;
//	}
//
//	printf("%s, %s, %s\n", first, second, third);
//
//
//	return 0;
//}
//
//int my_strcmp(char* pa, char* pb)
//{
//	char tempA;
//	char tempB;
//
//	while (*pa == *pb && *pa != '\0')
//	{
//		pa++;
//		pb++;
//	}
//
//	tempA = *pa;
//	tempB = *pb;
//
//	if (*pa <= 90)
//	{
//		tempA += 32;
//		if (tempA == tempB) return -1;
//	}
//	
//	if (*pb <= 90)
//	{
//		tempB += 32;
//		if (tempA == tempB) return 1;
//	}
//
//	if (tempA > tempB) return 1;
//	else if (tempA < tempB) return -1;
//	else return 0;
//}

//int main()
//{
//	char str[80] = "I am a Hello World!. I'm happy!";
//	char temp[80] = "";
//	int length = 0;
//	char* address = 0;
//
//	/*fgets(str, sizeof(str), stdin);
//	str[strlen(str) - 1] = '\0';*/
//
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (!strncmp(str + i, "Hello World!", strlen("Hello World!")))
//		{
//			address = &str[i];
//			length = i;
//			break;
//		}
//	}
//	strncpy(temp, str, length);
//	strncat(temp, "boy", strlen("boy"));
//	strcat(temp, address + strlen("Hello World!"));
//	strcpy(str, temp);
//
//	printf("Hello World! 위치 주소 : %p\n", address);
//	printf("바뀐 문자열 : %s\n", str);
//
//	return 0;
//}

//void assign10(void);
//void assign20(void);
//
//int a;
//
//
//int main()
//{
//
//	printf("함수 호출 전 a 값 : %d\n", a);
//
//	assign10();
//	assign20();
//
//	printf("함수 호출 후 a 값 : %d\n", a);
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

void auto_func(void);
void static_func(void);

int main()
{
	int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for(i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
}

void auto_func(void)
{
	auto int a = 0;

	a++;
	printf("%d\n", a);
}

void static_func(void)
{
	static int a;

	a++;
	printf("%d\n", a);
}