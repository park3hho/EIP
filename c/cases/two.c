#include <stdio.h>

int main() {
    int answer;
    int score = 0;

    printf("=== C언어 중급 퀴즈 ===\n\n");

    // Q1: sizeof
    printf("[문제 1]\n");
    printf("64비트 시스템에서 int형 변수 하나의 sizeof 값으로 가장 일반적인 것은?\n");
    printf("1. 2  2. 4  3. 8  4. 시스템마다 다르다\n");
    printf("정답: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("정답!\n\n");
        score++;
    } else {
        printf("오답! 일반적으로 int는 4바이트입니다.\n\n");
    }

    // Q2: 포인터
    printf("[문제 2]\n");
    printf("다음 중 int형 포인터를 선언한 것은?\n");
    printf("1. int p;\n");
    printf("2. int *p;\n");
    printf("3. *int p;\n");
    printf("4. pointer int p;\n");
    printf("정답: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("정답!\n\n");
        score++;
    } else {
        printf("오답! 포인터는 자료형 뒤에 * 를 붙입니다.\n\n");
    }

    // Q3: 연산자 우선순위
    printf("[문제 3]\n");
    printf("int x = 2 + 3 * 4; 의 결과값은?\n");
    printf("1. 20  2. 14  3. 24  4. 컴파일 에러\n");
    printf("정답: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("정답! 곱셈이 덧셈보다 우선입니다.\n\n");
        score++;
    } else {
        printf("오답! * 연산자가 + 보다 우선입니다.\n\n");
    }

    // Q4: 배열
    printf("[문제 4]\n");
    printf("int arr[5]; 일 때, arr의 유효한 인덱스 범위는?\n");
    printf("1. 1 ~ 5\n");
    printf("2. 0 ~ 5\n");
    printf("3. 0 ~ 4\n");
    printf("4. 1 ~ 4\n");
    printf("정답: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("정답!\n\n");
        score++;
    } else {
        printf("오답! 배열 인덱스는 0부터 시작합니다.\n\n");
    }

    // Q5: 문자열
    printf("[문제 5]\n");
    printf("char str[] = \"ABC\"; 일 때 sizeof(str)의 값은?\n");
    printf("1. 3  2. 4  3. 5  4. 컴파일러마다 다르다\n");
    printf("정답: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("정답! 문자열 끝에는 '\\0'이 포함됩니다.\n\n");
        score++;
    } else {
        printf("오답! \"ABC\"는 'A','B','C','\\0' 총 4바이트입니다.\n\n");
    }

    printf("=== 결과 ===\n");
    printf("총 점수: %d / 5\n", score);

    if (score == 5) {
        printf("👏 완벽합니다! C 개념이 아주 탄탄합니다.\n");
    } else if (score >= 3) {
        printf("👍 잘하셨습니다. 조금만 더 하면 고수입니다.\n");
    } else {
        printf("📘 기초 복습을 추천드립니다.\n");
    }

    return 0;
}
