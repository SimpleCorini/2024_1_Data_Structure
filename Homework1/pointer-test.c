#include <stdio.h>

int main(){
    int i, *p;  // 정수형 변수 i와 포인터 변수 p 선언

    i = 10;     // 변수 i에 10 저장

    printf("value of i = %d\n", i);     // 변수 i의 값 출력
    printf("address of i = %p\n", &i);  // 변수 i의 주소 출력

    printf("value of p = %p\n", p);     // 포인터 변수 p의 값 출력
    // p는 어떠한 객체나 함수도 가리키지 않는 널포인터이므로 쓰레기값 출력
    printf("address of p = %p\n", &p);  // 포인터 변수 p의 주소 출력

    p = &i;     // 포인터 변수 p에 변수 i의 주소 저장

    printf("\n\n----- after p = &i ----------\n\n");

    printf("value of p = %p\n", p);     // 포인터 변수 p의 값 출력
    printf("address of p = %p\n", &p);  // 포인터 변수 p의 주소 출력
    printf("dereferencing *p = %d\n", *p);  // 역참조 연산자(*)를 이용해 p가 가리키는 변수의 값 출력

    return 0;
}