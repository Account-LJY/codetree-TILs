import java.util.Scanner;

public class Main {
    public static int r, c, count;
    public static char[][] arr = new char[15][15];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        r = sc.nextInt();
        c = sc.nextInt();

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                arr[i][j] = sc.next().charAt(0);
            }
        }
        
        for (int i = 1; i < r; i++) {
            for (int j = 1; j < c; j++) {
                for (int k = i + 1; k < r - 1; k++) {
                    for (int l = j + 1; l < c - 1; l++) {
                        if ((arr[i][j] != arr[0][0]) && (arr[i][j] != arr[k][l]) && (arr[r - 1][c - 1] != arr[k][l]))
                            count++;
                    }
                }
            }
        }
        System.out.println(count);

    }
}