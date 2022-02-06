import java.util.*;

public class factorial_of_number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);    //input class
        int n = sc.nextInt();
        long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact=fact*i;
        }
        System.out.println(fact);
    }
}