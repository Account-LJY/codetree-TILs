import java.util.Scanner;

public class Main {
    public static String str;
    public static int count;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        str = sc.nextLine();

        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == '(') {
                for (int j = i; j < str.length(); j++) {
                    if (str.charAt(j) == ')') {
                        count++;
                    }
                }
            }
        }
        System.out.println(count);
    }
}