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

	//// ���ڿ� �Ⱦ���
	//char name1 = 'h';
	//char name2 = 'o';
	//char name3 = 'n';
	//char name4 = 'g';
	//// ���ڿ� ����
	//char nameA[4] = "hong"; // X
	//char nameB[5] = "hong"; // O  => ������ ��, ���ڼ� + 1

	//printf("%s, %s \n", nameA, nameB);

	//printf("%c, %d, %.2f, %lf\n", alphabet1, year, pi, doublePI);

	//printf("%c, %d\n", alphabet1, alphabet1);
	//printf("%d, %c\n", alphabet2, alphabet2);

	//short sh = 1000;
	//if (sh > 32767)
	//	printf("short ũ�� �̻��� �� �Դϴ�.\n"); // �̷��� ����ϸ� �ȵ�

	//int sh_max = 32767; // �ϳ� �� ū �ڷ������� ����
	//int sh_min = -32768;
	//int sh_test = 61000; // short ������ �����Ϸ��� ��
	//if (sh_test > sh_max)
	//	printf("short ũ�� �̻��� �� �Դϴ�.\n");
	//if (sh_test < sh_min)
	//	printf("short ũ�� ������ �� �Դϴ�.\n");

	//float ft = 1.234567890123456789f;
	//double db = 1.234567890123456789;

	//printf("float�� %.20f, %d����Ʈ\n", ft, sizeof(ft));
	//printf("double�� %.20lf, %d����Ʈ\n", db, sizeof(db));

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
	//	printf("f2>=1.0\n"); // �̰� ����ؾ��� �Ǽ����� ������ ��� �ؾ��Ѵ�!


	// Ȯ�� ����
	/*int kor = 70, eng = 80, mat = 90;
	int tot = 0;
	tot = kor + eng + mat;
	printf("���� : %d, ���� : %d, ���� : %d\n", kor, eng, mat);
	printf("���� : %d\n", tot);*/

	//int age;
	//double height;
	//printf("���̿� Ű�� �Է��Ͻÿ� : ");
	//scanf("%d%lf", &age, &height); 
	//// ret�Ⱦ��µ� �����ع����� �޸� ���� ��򰡸� �����ϱ� ������ ������
	//printf("���̴� %d��, Ű�� %.1lfcm �Դϴ�\n", age, height);
	//getchar();

	//char grade;
	//char name[20];

	//printf("���� �Է� : ");
	//scanf("%c", &grade);
	//printf("�̸� �Է� : ");
	//scanf("%s", name);
	//printf("%s�� ������ %c �Դϴ�.\n", name, grade);
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
	//printf("%d\n", c++); // �������� : ���� �� ����
	//printf("%d\n", c);
	//printf("%d\n", ++c); // �������� : ���� �� ����

	/*int a = 5, b = 5;
	int pre, post;

	printf("�ʱ갪 a = %d, b = %d\n", a, b);

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("�ʱ갪 a = %d, b = %d\n", a, b);
	printf("������: (++a) * 3 = %d, ������: (b++) * 3 = %d\n", pre, post);*/
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

	//printf("�� ������ ���� : ");
	//scanf("%d%d", &c, &d);
	//tot = c + d;
	//avg = tot / 2.0;
	//printf("��� : %.1lf\n", avg);


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

	printf(" N�� : ");
	scanf("%d", &numYears);
	printf(" M���� : ");
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
	
	printf(" �پ�� ����: %d�� %d�� %d�� %d��\n", decreseYears, decreseDays, decreseHours, decreseMinutes);
	printf(" ��� ����: %d�� %d�� %d�� %d��\n", lifeExpectancyYears, lifeExpectancyDays, lifeExpectancyHours, lifeExpectancyMinutes);

	return 0;
}