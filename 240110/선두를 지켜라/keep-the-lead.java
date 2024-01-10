import java.util.Scanner;

public class Main {
    public static int n, m, v, t;
    public static int[] A, B, C;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();

        A = new int[1000000];
        B = new int[1000000];
        C = new int[1000000]; // 거리 차이

        int timeA = 1;
        for (int i = 0; i < n; i++) {
            v = sc.nextInt();
            t = sc.nextInt();
            for (int j = 1; j <= t; j++) {
                A[timeA] = A[timeA - 1] + v;
                timeA++;
            }
        }

        int timeB = 1;
        for (int i = 0; i < m; i++) {
            v = sc.nextInt();
            t = sc.nextInt();
            for (int j = 1; j <= t; j++) {
                B[timeB] = B[timeB - 1] + v;
                timeB++;
            }
        }

        for (int i = 0; i < timeB; i++) {
            C[i] = A[i] - B[i];
        }
        
        int change = 0;
        for (int i = 1; i < timeB; i++) {
            if(C[i] > 0 && C[i - 1] <= 0 || C[i] < 0 && C[i - 1] >= 0) {
                change++;
            }
        }
        if (change == 0) {
            System.out.println(0);
        } else {
            System.out.println(change - 1);    
        }
    }
}