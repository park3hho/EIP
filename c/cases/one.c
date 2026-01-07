#include <stdio.h>

int main() {
    int answer;

    printf("=== C언어 기초 퀴즈 ===\n");
    printf("C언어에서 정수형 데이터를 저장할 때 사용하는 키워드는 무엇일까요?\n");
    printf("1. float  2. char  3. int  4. double\n");
    printf("정답 번호를 입력하세요: ");

    // 사용자로부터 정수 입력 받기
    scanf("%d", &answer);

    // 조건문을 통한 정답 확인
    if (answer == 3) {
        printf("정답입니다! 'int'는 integer의 약자로 정수를 의미합니다.\n");
    } else {
        printf("아쉽네요. 정답은 3번 'int'입니다.\n");
    }

    return 0;
}