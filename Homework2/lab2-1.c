#include <stdio.h>
int main()
{
    char charType;      // 문자형 변수
    int integerType;    // 정수형 변수
    float floatType;    // 실수(float)형 변수
    double doubleType;  // 실수(double)형 변수

    printf("----- 2021084046    박덕열 -----\n");     // 제출자 학번, 성명 출력

    printf("Size of char: %ld byte\n",sizeof(charType));    // 문자형 변수의 크기 출력
    printf("Size of int: %ld bytes\n",sizeof(integerType)); // 정수형 변수의 크기 출력
    printf("Size of float: %ld bytes\n",sizeof(floatType));   // 실수(float)형 변수의 크기 출력
    printf("Size of double: %ld bytes\n",sizeof(doubleType));  // 실수(double)형 변수의 크기 출력

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char));    // 문자형 데이터 타입의 크기 출력
    printf("Size of int: %ld bytes\n",sizeof(int));     // 정수형 데이터 타입의 크기 출력
    printf("Size of float: %ld bytes\n",sizeof(float));   // 실수(float)형 데이터 타입의 크기 출력
    printf("Size of double: %ld bytes\n",sizeof(double));  // 실수(double)형 데이터 타입의 크기 출력

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*));      // 문자형 포인터 타입의 크기 출력
    printf("Size of int*: %ld bytes\n",sizeof(int*));       // 정수형 포인터 타입의 크기 출력
    printf("Size of float*: %ld bytes\n",sizeof(float*));     // 실수(float)형 포인터 타입의 크기 출력
    printf("Size of double*: %ld bytes\n",sizeof(double*));    // 실수(float)형 포인터 타입의 크기 출력
    // 포인터 타입의 크기는 변수의 데이터 타입의 크기와 관련이 없다
    // 포인터 타입의 크기는 CPU에 따라 달라진다(32bits -> 4bytes, 64bits -> 8bytes)

    
    return 0;
}