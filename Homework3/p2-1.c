#include <stdio.h>

#define MAX_SIZE 100    // 상수 MAX_SIZE = 100

// 함수 선언
float sum1(float list[], int n);  // 배열과 정수를 받는 함수
float sum2(float *list, int n);   // 포인터와 정수를 받는 함수
float sum3(int n, float *list);   // 정수와 포인터를 받는 함수

// 전역 변수 선언
float input[MAX_SIZE], answer;
int i;

void main(void) {
    for(i=0; i < MAX_SIZE; i++)     // input 배열에 0~99 삽입
        input[i] = i;
    
    printf("----- 2021084046 박덕열 -----\n");

    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);        // input 배열의 주소 출력

    answer = sum1(input, MAX_SIZE);         // sum1 함수 호출
    printf("The sum is: %f\n\n", answer);   // 합 출력

    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);        // input 배열의 주소 출력

    answer = sum2(input, MAX_SIZE);         // sum2 함수 호출
    printf("The sum is: %f\n\n", answer);   // 합 출력

    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);        // input 배열의 주소 출력

    answer = sum3(MAX_SIZE, input);         // sum3 함수 호출
    printf("The sum is: %f\n\n", answer);   // 합 출력
}

float sum1(float list[], int n) {   // 배열과 정수를 받는 함수
    printf("list \t= %p\n", list);      // list 주소 출력
    printf("&list \t= %p\n\n", &list);  // list를 가리키는 포인터의 주소 출력

    int i;  // 반복문을 통해 list에 삽입할 정수형 변수 i
    float tempsum = 0;  // 반복문을 통해 합을 계산할 실수형 변수 tempsum
    for(i = 0; i < n; i++)
        tempsum += list[i]; // 배열의 각 주소마다 i의 값을 증가시켜가며 0~99까지 삽입
    return tempsum;     // 0~99까지 합 반환
}

float sum2(float *list, int n) {    // 포인터와 정수를 받는 함수
    printf("list \t= %p\n", list);      // list 주소 출력
    printf("&list \t= %p\n\n", &list);  // list를 가리키는 포인터의 주소 출력

    int i;  // 반복문을 통해 list에 삽입할 정수형 변수 i
    float tempsum = 0;  // 반복문을 통해 합을 계산할 실수형 변수 tempsum
    for(i = 0; i < n; i++)
        tempsum += *(list + i); // 배열의 각 주소마다 i의 값을 증가시켜가며 0~99까지 삽입
    return tempsum;     // 0~99까지 합 반환
}

/* stack variable reuse test */
float sum3(int n, float *list) {    // 정수와 포인터를 받는 함수
    printf("list \t= %p\n", list);  // list 주소 출력
    printf("&list \t= %p\n\n", &list);  //
    
    int i;  // 반복문을 통해 list에 삽입할 정수형 변수 i
    float tempsum = 0;  // 반복문을 통해 합을 계산할 실수형 변수 tempsum
    for(i = 0; i < n; i++)
        tempsum += *(list + i); // 배열의 각 주소마다 i의 값을 증가시켜가며 0~99까지 삽입
    return tempsum;     // 0~99까지 합 반환
}