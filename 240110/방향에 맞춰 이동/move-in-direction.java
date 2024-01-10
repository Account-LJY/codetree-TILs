import java.util.Scanner;

public class Main {
    public static int[] dx = {1, -1, 0, 0};
    public static int[] dy = {0, 0, -1, 1};
    public static int n, x, y, r;
    public static char dir;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i < n; i++) {
            dir = sc.next().charAt(0);
            r = sc.nextInt();
            if (dir == 'E') {
                x += dx[0] * r;
            } else if (dir == 'W') {
                x += dx[1] * r;
            } else if (dir == 'S') {
                y += dy[2] * r;
            } else {
                y += dy[3] * r;
            }
        }
        System.out.println(x + " " + y);
    }
}