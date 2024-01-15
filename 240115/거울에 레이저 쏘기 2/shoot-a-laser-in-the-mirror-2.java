import java.util.Scanner;

public class Main {
    public static int n, k, count, r, c, dirNum;
    public static char[][] arr;
    public static int[] dx = {1, 0, -1, 0}; // d l u r
    public static int[] dy = {0, -1, 0, 1};

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.nextLine();
        arr = new char[n][n];

        for(int i = 0; i < n; i++){
            String s = sc.next();
            for(int j = 0; j < n; j++){
                arr[i][j] = s.charAt(j);
            }
        }

        k = sc.nextInt();
        initalize(k);

        while(true) {
            if (inRange(r, c)) {
                count++;
                extracted(r, c);
                r += dx[dirNum];
                c += dy[dirNum];
            }
            else {
                break;
            }
        }
        System.out.println(count);
    }

    private static void extracted(int r, int c) {
        if (arr[r][c] == '/') {
            switch (dirNum) {
                case 0:
                    dirNum = 1;
                    break;
                case 1:
                    dirNum = 2;
                    break;
                case 2:
                    dirNum = 3;
                    break;
                case 3:
                    dirNum = 0;
                    break;
            }
        } else {
            switch (dirNum) {
                case 0:
                    dirNum = 3;
                    break;
                case 1:
                    dirNum = 0;
                    break;
                case 2:
                    dirNum = 1;
                    break;
                case 3:
                    dirNum = 2;
                    break;
            }
        }
    }

    public static void initalize(int x) {
        if (x <= n) {
            dirNum = 0;
            r = 0;
            c = x - 1;
        } else if (x <= 2 * n) {
            dirNum = 1;
            r = x - n - 1;
            c = n - 1;
        } else if (x <= 3 * n) {
            dirNum = 2;
            r = n - 1;
            c = 3 * n - x;
        } else {
            dirNum = 3;
            r = 4 * n - x;
            c = 0;
        }
    }
    public static boolean inRange(int x, int y) {
        return (x >= 0 && x < n && y >= 0 && y < n);
    }
}