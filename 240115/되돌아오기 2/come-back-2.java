import java.util.Scanner;

public class Main {
    public static String order;
    public static int x, y, time, index, ans;
    public static int[] dx = {0, 1, 0, -1}; // u r d l
    public static int[] dy = {1, 0, -1, 0};
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        order = sc.nextLine();
        ans = -1;
        for (int i = 0; i < order.length(); i++) {
            boolean done = move(order.charAt(i));
            if (done)
                break;
        }
        System.out.println(ans);
    }
    static boolean move(char dir) {
        time++;
        if (dir == 'F') {
            x += dx[index];
            y += dy[index];
            if (x == 0 && y == 0) {
                ans = time;
                return true;
            }
        } else if (dir == 'R') {
            index = (index + 1) % 4;
        } else {
            index = (index + 3) % 4;
        }
        return false;
    }
}