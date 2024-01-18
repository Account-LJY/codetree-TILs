import java.util.Scanner;

public class Main {
    public static int n, count, maxCount;
    public static int[][] arr = new int[20][20];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 2; j++) {
                count = 0;
                for (int k = 0; k < 3; k++) {
                    if (arr[i][j + k] == 1)
                        count++;
                }
                if (count > maxCount)
                    maxCount = count;
            }
        }
        System.out.println(maxCount);
    }
}