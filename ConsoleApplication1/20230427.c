#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//unsigned char alphabet1, alphabet2;
	//unsigned int year, month;
	//float pi;
	//double doublePI;

	//alphabet1 = 'A';
	//alphabet2 = 65;
	//year = 2023;
	//pi = 3.14f;
	//doublePI = 3.14f;
	//month = 4;
	//year = month; 

	//// 문자열 안쓰면
	//char name1 = 'h';
	//char name2 = 'o';
	//char name3 = 'n';
	//char name4 = 'g';
	//// 문자열 쓰면
	//char nameA[4] = "hong"; // X
	//char nameB[5] = "hong"; // O  => 문자일 때, 글자수 + 1

	//printf("%s, %s \n", nameA, nameB);

	//printf("%c, %d, %.2f, %lf\n", alphabet1, year, pi, doublePI);

	//printf("%c, %d\n", alphabet1, alphabet1);
	//printf("%d, %c\n", alphabet2, alphabet2);

	//short sh = 1000;
	//if (sh > 32767)
	//	printf("short 크기 이상의 값 입니다.\n"); // 이렇게 사용하면 안됨

	//int sh_max = 32767; // 하나 더 큰 자료형으로 선언
	//int sh_min = -32768;
	//int sh_test = 61000; // short 값으로 대입하려는 수
	//if (sh_test > sh_max)
	//	printf("short 크기 이상의 값 입니다.\n");
	//if (sh_test < sh_min)
	//	printf("short 크기 이하의 값 입니다.\n");

	//float ft = 1.234567890123456789f;
	//double db = 1.234567890123456789;

	//printf("float형 %.20f, %d바이트\n", ft, sizeof(ft));
	//printf("double형 %.20lf, %d바이트\n", db, sizeof(db));

	//float f1 = 0.1;
	//float f2 = 0;
	//for (int a = 0; a < 10; a++)
	//{
	//	f2 = f2 + f1;
	//}
	//if (f2 == 1)
	//	printf("f2=1\n");
	//if (f2 == 1.0)
	//	printf("f2=1.0\n");
	//if (f2 >= 1.0)
	//	printf("f2>=1.0\n"); // 이걸 사용해야함 실수형의 오차를 허용 해야한다!


	// 확인 문제
	/*int kor = 70, eng = 80, mat = 90;
	int tot = 0;
	tot = kor + eng + mat;
	printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, mat);
	printf("총점 : %d\n", tot);*/

	//int age;
	//double height;
	//printf("나이와 키를 입력하시오 : ");
	//scanf("%d%lf", &age, &height); 
	//// ret안쓰는데 선언해버리면 메모리 공간 어딘가를 차지하기 때문에 안좋음
	//printf("나이는 %d살, 키는 %.1lfcm 입니다\n", age, height);
	//getchar();

	//char grade;
	//char name[20];

	//printf("학점 입력 : ");
	//scanf("%c", &grade);
	//printf("이름 입력 : ");
	//scanf("%s", name);
	//printf("%s의 학점은 %c 입니다.\n", name, grade);
	//getchar();


	//int a = 5 + 1;

	/*int a = 5.0 / 2;
	int b = 5 / 2.0;*/

	/*printf("a : %d\n", a);
	printf("b : %d\n", b);*/
	
	//double apple;
	//double banana;
	//double orange;

	//apple = 5.0 / 2.0;
	//banana = 5.0 / 2;
	//orange = 5 / 2.0;

	//printf("apple : %f\n", apple);
	//printf("banana : %f\n", banana);
	//printf("orange : %f\n", orange);

	//int c = 5;
	//printf("%d\n", c++); // 후위연산 : 실행 후 연산
	//printf("%d\n", c);
	//printf("%d\n", ++c); // 전위연산 : 연산 후 실행

	/*int a = 5, b = 5;
	int pre, post;

	printf("초깃값 a = %d, b = %d\n", a, b);

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("초깃값 a = %d, b = %d\n", a, b);
	printf("전위형: (++a) * 3 = %d, 후위형: (b++) * 3 = %d\n", pre, post);*/
	/*
	int a = 5;
	int b = 2;

	printf("%d\n", a != b);
	printf("%d\n", a >= b);
	printf("%d\n", a <= b);
	printf("%d\n", a == b);
	printf("%d\n", a > b);
	printf("%d\n", a < b);
	*/

	//double a = 4.0, b = 1.2;

	//printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
	//printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
	//printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
	//printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);

	//int c, d, tot;
	//double avg;

	//printf("두 과목의 점수 : ");
	//scanf("%d%d", &c, &d);
	//tot = c + d;
	//avg = tot / 2.0;
	//printf("평균 : %.1lf\n", avg);


	int numCigarettes;
	int totCigarettes;
	int totDecreseTime;
	int numYears;

	int lifeExpectancyYears = 0;
	int lifeExpectancyDays = 0;
	int lifeExpectancyHours = 0;
	int lifeExpectancyMinutes = 0;
	

	int decreseDays = 0;
	int decreseHours = 0;
	int decreseMinutes = 0;
	int decreseYears = 0;

	const int initLifeExpectancy = 100;
	const int initAge = 20;
	const int Days = 365;
	const int Hours = 24;
	const int Minutes = 60;

	const int initTime = initLifeExpectancy * Days * Hours * Minutes;
	const int decreseMinutesPerSmoke = 40 + 3 * Minutes;

	printf(" N년 : ");
	scanf("%d", &numYears);
	printf(" M개피 : ");
	scanf("%d", &numCigarettes);

	totCigarettes = numCigarettes * numYears * Days;

	totDecreseTime = decreseMinutesPerSmoke * totCigarettes;

	decreseMinutes = totDecreseTime % Minutes;
	decreseHours = totDecreseTime / Minutes % Hours;
	decreseDays = totDecreseTime / Minutes / Hours % Days;
	decreseYears = totDecreseTime / Minutes / Hours / Days;

	lifeExpectancyMinutes = (initTime - totDecreseTime) % Minutes;
	lifeExpectancyHours = (initTime - totDecreseTime) / Minutes % Hours;
	lifeExpectancyDays = (initTime - totDecreseTime) / Minutes / Hours % Days;
	lifeExpectancyYears = (initTime - totDecreseTime) / Minutes / Hours / Days;
	
	printf(" 줄어든 수명: %d년 %d일 %d시 %d분\n", decreseYears, decreseDays, decreseHours, decreseMinutes);
	printf(" 기대 수명: %d살 %d일 %d시 %d분\n", lifeExpectancyYears, lifeExpectancyDays, lifeExpectancyHours, lifeExpectancyMinutes);

	return 0;
}