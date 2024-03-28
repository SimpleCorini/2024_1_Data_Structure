#include <stdio.h>
#include <stdlib.h>

void main(){
    int list[5];                // 크기가 5인 정수형 배열 선언
    int *plist[5] = {NULL,};    // 크기가 5인 정수형 포인터 배열 선언과 초기화

    plist[0] = (int *)malloc(sizeof(int));  // plist의 첫 번째 자리에 정수형 크기(4bytes)만큼 동적 메모리 할당

    list[0] = 1;        // list의 첫 번째 자리에 1 할당
    list[1] = 100;      // list의 두 번째 자리에 100 할당

    *plist[0] = 200;    // plist[0]이 가리키는 곳에 200 할당

    printf("----- 2021084046 박덕열 -----\n");

    printf("list[0] = %d\n", list[0]);      // list의 첫 번째 자리의 값 출력
    printf("&list[0] = %p\n", &list[0]);    // list의 첫 번째 자리의 주소 출력
    printf("list = %p\n", list);            // list의 주소 출력(list의 첫 번째 자리 주소를 가리키는 포인터)
    printf("&list = %p\n", &list);          // list의 주소 출력(배열 자체를 가리키는 포인터)

    printf("----------------------------------------\n\n");

    printf("list[1] = %d\n", list[1]);      // list의 두 번째 자리의 값 출력
    printf("&list[1] = %p\n", &list[1]);    // list의 두 번째 자리의 주소 출력
    printf("*(list+1) = %d\n", *(list + 1));    // list의 두 번째 자리의 값 출력(포인터 연산을 사용)
    printf("list+1 = %p\n", list+1);        // list의 두 번째 자리의 주소 출력(포인터 연산을 사용)

    printf("----------------------------------------\n\n");

    printf("&plist[0] = %p\n", &plist[0]);  // plist의 첫 번째 자리 주소 출력
    printf("*plist[0] = %d\n", *plist[0]);  // plist의 첫 번째 자리가 가리키는 값 출력
    printf("&plist = %p\n", &plist);        // plist의 주소 출력(배열 자체를 가리키는 포인터)
    printf("plist = %p\n", plist);          // plist의 주소 출력(plist의 첫 번째 자리 주소를 가리키는 포인터)
    printf("plist[0] = %p\n", plist[0]);    // plist의 첫 번째 자리 값 출력

    /*plist의 두 번째 ~ 다섯 번째 자리 값 출력 / 포인터 배열의 각 요소들에 값이 할당되지 않아 정상 출력되지 않음*/
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);

    free(plist[0]);     // 동적 할당된 메모리 해제

}