import java.util.Scanner;

public class Main {
    public static String[] direction = {"E", "W", "S", "N"};
    public static int[] dx = {1, -1, 0, 0};
    public static int[] dy = {0, 0, -1, 1};
    public static int n, x, y, r;
    public static String dir;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i < n; i++) {
            dir = sc.next();
            r = sc.nextInt();
            sc.nextLine();
            if (dir.equals(direction[0])) {
                x += dx[0] * r;
                y += dy[0] * r;
            } else if (dir.equals(direction[1])) {
                x += dx[1] * r;
                y += dy[1] * r;
            } else if (dir.equals(direction[2])) {
                x += dx[2] * r;
                y += dy[2] * r;
            } else {
                x += dx[3] * r;
                y += dy[3] * r;
            }
        }
        System.out.println(x + " " + y);
    }
}