#include <stdio.h>
int main()
{
    int i;      // 정수형 변수 i
    int *ptr;   // 정수형 포인터 변수 ptr
    int **dptr; // 포인터 변수의 포인터 변수(이중 포인터) dptr

    printf("----- 2021084046    박덕열 -----\n");     // 제출자 학번, 성명 출력

    i = 1234;

    printf("[checking values before ptr = &i] \n");     // 포인터에 주소 할당하지 않았을 때 결과 출력
    printf("value of i == %d\n", i);            // 변수 i의 값 출력
    printf("address of i == %p\n", &i);         // 변수 i의 주소 출력
    printf("value of ptr == %p\n", ptr);        // 포인터 ptr의 값 출력
    printf("address of ptr == %p\n", &ptr);     // 포인터 ptr의 주소 출력

    ptr = &i; // 포인터 ptr에 i의 주소 할당

    printf("\n[checking values after ptr = &i] \n");    // 포인터에 주소 할당했을 때 결과 출력
    printf("value of i == %d\n", i);            // 변수 i의 값 출력
    printf("address of i == %p\n", &i);         // 변수 i의 주소 출력
    printf("value of ptr == %p\n", ptr);        // 포인터 ptr의 값 출력
    printf("address of ptr == %p\n", &ptr);     // 포인터 ptr의 주소 출력
    printf("value of *ptr == %d\n", *ptr);      // 포인터 ptr을 역참조해서 변수 i의 값 출력

    dptr = &ptr; // 포인터 dptr에 ptr의 주소 할당

    printf("\n[checking values after dptr = &ptr] \n");     // 이중 포인터에 주소 할당했을 때 결과 출력
    printf("value of i == %d\n", i);            // 변수 i의 값 출력
    printf("address of i == %p\n", &i);         // 변수 i의 주소 출력
    printf("value of ptr == %p\n", ptr);        // 포인터 ptr의 값 출력
    printf("address of ptr == %p\n", &ptr);     // 포인터 ptr의 주소 출력
    printf("value of *ptr == %d\n", *ptr);      // 포인터 ptr을 역참조해서 변수 i의 값 출력
    printf("value of dptr == %p\n", dptr);      // 포인터 dptr의 값 출력
    printf("address of dptr == %p\n", &dptr);   // 포인터 dptr의 주소 출력
    printf("value of *dptr == %p\n", *dptr);    // 포인터 dptr을 역참조해서 ptr의 값 출력
    printf("value of **dptr == %d\n", **dptr);  // 포인터 dptr을 이중 역참조해서 i의 값 출력

    *ptr = 7777; // ptr을 역참조해서 i의 값을 변경

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);            // 변수 i의 값 출력
    printf("value of *ptr == %d\n", *ptr);      // 포인터 ptr을 역참조해서 i의 값 출력
    printf("value of **dptr == %d\n", **dptr);  // 포인터 dptr을 이중 역참조해서 i의 값 출력

    **dptr = 8888; // dptr을 이중 역참조해서 i의 값 변경

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);            // 변수 i의 값 출력
    printf("value of *ptr == %d\n", *ptr);      // 포인터 ptr을 역참조해서 i의 값 출력
    printf("value of **dptr == %d\n", **dptr);  // 포인터 dptr을 이중 역참조해서 i의 값 출력
    
    return 0;
}