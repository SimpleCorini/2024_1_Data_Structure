#include <stdio.h>
#include <stdlib.h>
void main() {
    int list[5];    // 크기가 5인 정수형 배열 선언
    int *plist[5];  // 크기가 5인 정수형 포인터 배열 선언

    list[0] = 10;   // list의 첫 번째 자리에 10 할당
    list[1] = 11;   // list의 두 번째 자리에 11 할당

    plist[0] = (int*)malloc(sizeof(int));   // plist의 첫 번째 자리에 정수형 변수의 크기(4bytes)만큼 동적으로 할당한 메모리의 주소 저장

    printf("----- 2021084046 박덕열 -----");
    
    printf("list[0] \t= %d\n", list[0]);    // 배열의 첫 번째 자리의 값 출력
    printf("list \t\t= %p\n", list);        // 배열의 시작 주소 출력
    printf("&list[0] \t= %p\n", &list[0]);  // 배열의 첫 번째 자리의 주소 출력
    printf("list + 0 \t= %p\n", list+0);    // 배열의 시작 주소 출력
    printf("list + 1 \t= %p\n", list+1);    // 배열의 두 번째 자리의 주소 출력
    printf("list + 2 \t= %p\n", list+2);    // 배열의 세 번째 자리의 주소 출력
    printf("list + 3 \t= %p\n", list+3);    // 배열의 네 번째 자리의 주소 출력
    printf("list + 4 \t= %p\n", list+4);    // 배열의 다섯 번째 자리의 주소 출력
    printf("&list[4] \t= %p\n", &list[4]);  // 배열의 다섯 번째 자리의 주소 출력
    
    free(plist[0]);     // 동적 할당된 메모리 해제
}