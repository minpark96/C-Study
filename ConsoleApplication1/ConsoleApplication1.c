#define _CRT_SECURE_NO_WARNINGS_

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int age = 25; // 상수 const
    const int day = 25;

    printf("Hello World! 1\n"); 
    printf("%s 의 나이는 %d \
이다. 키는 %.1lfcm입니다\n\b",  
        "홍길동", 25, 180.3); // \ "" 안에 있으면 개행 \->개행을 나타냄
    printf("%d\n", 65); // 정수 출력
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

    //010 -> 8      앞에 0붙으면 8진수
    //0x11 -> 17        앞에 0x 16진수

    printf("%d %o %x\n", 12, 12, 12); // 10진수, 8진수, 16진수 출력

    printf("%.7f \n", 3.14e-5); // 소수 출력 (지수 가능)
    printf("%.2le\n", 0.0000314); // 3.14의 지수적 표현

    printf("%c", '1'); // 문자 출력 / A의 ASCII 아스키코드 -> 65
    // 문자 상수 4바이트, char 1바이트
    printf("%s", "A"); // 문자열 출력

    // 비트당 표현 범위 1비트, 8비트, 32비트

    // 음수변환 -> 2의 보수법



    // 3.4 .5 0.5 -10.

    /*
    * 
    * 여러줄 주석
    */
    return 0;
}

