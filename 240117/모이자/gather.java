import java.util.Scanner;

public class Main {
    public static int n, min;
    public static int[] num, range;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        num = new int[n];
        range = new int[n];
        for (int i = 0; i < n; i++) {
            num[i] = sc.nextInt();
        }

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                sum += Math.abs(j - i) * num[j];
            }
            range[i] = sum;
        }

        min = range[0];
        for (int i : range) {
            if (i < min) {
                min = i;
            }
        }
        System.out.println(min);
    }
}