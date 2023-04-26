#define _CRT_SECURE_NO_WARNINGS_

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int age = 25;
    const int day = 25;

    printf("Hello World! 1\n");
    printf("%s 의 나이는 %d \
이다. 키는 %.1lfcm입니다\n\b",  
        "홍길동", 25, 180.3);
    printf("%d\n", 65);
    printf("Hello World! 2\n");

    printf("Be happy ");
    printf("My friend\n");
    printf("goat\rd\t\t!!\n\a\a\a\a\a");
    printf("abcdefg\rzz");

    system("pause"); // ctrl+K+C 주석 / ctrl+K+U 주석해제

    /*10 : 1 2 3 4 5 6 7 8 9 10 11 ...
    8 : 1 2 3 4 5 6 7 10 11 12 ...
    16 : 1 2 3 4 5 6 7 8 9 a b c d e f 10 ...
    2 : 1 10 11 100 101 110 111 ...*/

    //010 -> 8 8진수
    //0x11 -> 17 16진수

    printf("%d %o %x\n", 12, 12, 12);

    printf("%.7f \n", 3.14e-5);

    // 3.4 .5 0.5 -10.

    /*
    * 
    * 여러줄 주석
    */
    return 0;
}

