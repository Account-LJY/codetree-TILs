import java.util.Scanner;

public class Main {
    public static int n, count;
    public static int[] arr = new int[100];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (arr[i] <= arr[j] && arr[j] <= arr[k]) {
                        count++;
                    }
                }
            }
        }
        System.out.println(count);
    }
}