import java.util.Scanner;

public class Main {
    public static final int MAX_T = 1000000;

    public static int n, m, k;
    public static int[] Students;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();
        k = sc.nextInt();

        Students = new int[n];

        for (int i = 0; i < m; i++) {
            int num = sc.nextInt();
            Students[num - 1]++;
            if (Students[num - 1] == k) {
                System.out.println(num);
                return;
            }
        }
        System.out.println(-1);
    }
}