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
            for (int i = timeA; i < timeB; i++) {
                A[i] = A[i - 1];
            }
        } else {
            for (int i = timeB; i < timeA; i++) {
                B[i] = B[i - 1];
            }
        }

        int timeMax = timeA >= timeB ? timeA : timeB;
        for (int i = 1; i < timeMax; i++) {
            if (A[i] == B[i] && A[i - 1] != B[i - 1]) {
                meet++;
            }
        }
        System.out.println(meet);
    }
}