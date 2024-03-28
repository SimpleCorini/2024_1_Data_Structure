#include <stdio.h>

void print_one(int *ptr, int rows);     // 함수 선언

int main() {
    int one[] = {0, 1, 2, 3, 4};    // 정수형 배열 one 선언 및 초기화

    printf("----- 2021084046 박덕열 -----\n");

    printf("one = %p\n", one);      // 배열 one의 주소 출력
    printf("&one = %p\n", &one);    // 배열 one의 주소 출력
    printf("&one[0] = %p\n", &one[0]);  // 배열 one의 첫 번째 주소 출력
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5);  // 함수 호출

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5);      // 함수 호출

    return 0;
}

void print_one(int *ptr, int rows) {
    /* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));
        // 반복문을 통해 배열의 첫 번째 주소부터 주소와 값을 출력(정수형 배열이므로 주소는 4씩 증가)
    printf("\n");
}