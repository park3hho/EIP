#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("C container test start\n");

    printf("이름 입력: ");
    scanf("%49s", name);

    printf("나이 입력: ");
    scanf("%d", &age);

    printf("---- 결과 ----\n");
    printf("이름: %s\n", name);
    printf("나이: %d\n", age);
    printf("내년 나이: %d\n", age + 1);

    return 0;
}
