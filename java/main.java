import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("Java container test start");

        Scanner sc = new Scanner(System.in);

        System.out.print("이름 입력: ");
        String name = sc.nextLine();

        System.out.print("나이 입력: ");
        int age = sc.nextInt();

        System.out.println("---- 결과 ----");
        System.out.println("이름: " + name);
        System.out.println("나이: " + age);
        System.out.println("내년 나이: " + (age + 1));

        sc.close();
    }
}
