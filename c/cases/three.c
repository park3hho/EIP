#include <stdio.h>
#include <string.h>

int main() {
    int answer;
    int score = 0;

    printf("=================================\n");
    printf("     C 언어 중급 퀴즈 프로그램\n");
    printf("=================================\n\n");

    /* 문제 1 */
    printf("[문제 1]\n");
    printf("다음 중 int형 포인터 선언으로 올바른 것은?\n");
    printf("1) int p;\n");
    printf("2) int *p;\n");
    printf("3) *int p;\n");
    printf("4) pointer int p;\n");
    printf("정답: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("정답!\n\n");
        score++;
    } else {
        printf("오답! 정답은 2번입니다.\n\n");
    }

    /* 문제 2 */
    printf("[문제 2]\n");
    printf("char str[] = \"ABC\"; 일 때 sizeof(str)의 값은?\n");
    printf("1) 3\n");
    printf("2) 4\n");
    printf("3) 5\n");
    printf("4) 컴파일러마다 다르다\n");
    printf("정답: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("정답! 문자열 끝에는 '\\0'이 포함됩니다.\n\n");
        score++;
    } else {
        printf("오답! 정답은 2번입니다.\n\n");
    }

    /* 문제 3 */
    printf("[문제 3]\n");
    printf("다음 코드의 출력 결과는?\n");
    printf("int x = 2 + 3 * 4;\n");
    printf("printf(\"%%d\", x);\n");
    printf("1) 20  2) 14  3) 24  4) 에러\n");
    printf("정답: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("정답! 곱셈이 덧셈보다 우선입니다.\n\n");
        score++;
    } else {
        printf("오답! 정답은 2번입니다.\n\n");
    }

    /* 문제 4 */
    printf("[문제 4]\n");
    printf("다음 중 Undefined Behavior에 해당하는 코드는?\n");
    printf("1) int a = 0; a++;\n");
    printf("2) printf(\"%%d\", a);\n");
    printf("3) printf(\"%%d %%d\", i++, i++);\n");
    printf("4) int *p = NULL;\n");
    printf("정답: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("정답! 시퀀스 포인트 문제입니다.\n\n");
        score++;
    } else {
        printf("오답! 정답은 3번입니다.\n\n");
    }

    /* 문제 5 */
    printf("[문제 5]\n");
    printf("64비트 환경에서 다음 중 sizeof 결과로 올바른 것은?\n");
    printf("1) sizeof(int) == 8\n");
    printf("2) sizeof(char) == 2\n");
    printf("3) sizeof(int*) == 8\n");
    printf("4) sizeof(double) == 16\n");
    printf("정답: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("정답! 포인터 크기는 주소 크기입니다.\n\n");
        score++;
    } else {
        printf("오답! 정답은 3번입니다.\n\n");
    }

    /* 결과 */
    printf("=================================\n");
    printf("점수: %d / 5\n", score);

    if (score == 5) {
        printf("🔥 완벽합니다. C 고수 인정.\n");
    } else if (score >= 3) {
        printf("👍 준수합니다. 개념은 잘 잡혀있네요.\n");
    } else {
        printf("📘 기초 복습 추천드립니다.\n");
    }

    printf("=================================\n");

    return 0;
}
