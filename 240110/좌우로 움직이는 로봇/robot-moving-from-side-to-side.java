import java.util.Scanner;

public class Main {
    public static int n, m, r;
    public static char dir;
    public static int[] A = new int[2000001];
    public static int[] B = new int[2000001];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();

        int timeA = 1;
        for (int i = 0; i < n; i++) {
            r = sc.nextInt();
            dir = sc.next().charAt(0);
            for (int j = 1; j <= r; j++) {
                if (dir == 'L') {
                    A[timeA] = A[timeA - 1] - 1;
                } else {
                    A[timeA] = A[timeA - 1] + 1;
                }
                timeA++;
            }
        }

        int timeB = 1;
        for (int i = 0; i < m; i++) {
            r = sc.nextInt();
            dir = sc.next().charAt(0);
            for (int j = 1; j <= r; j++) {
                if (dir == 'L') {
                    B[timeB] = B[timeB - 1] - 1;
                } else {
                    B[timeB] = B[timeB - 1] + 1;
                }
                timeB++;
            }
        }

        int meet = 0;

        if (timeA <= timeB) {
            for (int i = 1; i < timeA; i++) {
                if (A[i] == B[i] && A[i - 1] != B[i - 1]) {
                    meet++;
                }
            }
            int last = A[timeA - 1];
            for (int i = timeA; i < timeB; i++) {
                if (last == B[i] && B[i - 1] != B[i]) {
                    meet++;
                }
            }
        } else {
            for (int i = 1; i < timeB; i++) {
                if (A[i] == B[i] && A[i - 1] != B[i - 1]) {
                    meet++;
                }
            }
            int last = B[timeB - 1];
            for (int i = timeB; i < timeA; i++) {
                if (last == A[i] && A[i - 1] != A[i]) {
                    meet++;
                }
            }
        }
        System.out.println(meet);
    }
}