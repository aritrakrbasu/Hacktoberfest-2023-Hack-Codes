import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class weirdOrNot {

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        if (N % 2 != 0) {
            // Weird
            System.out.println("Weird");
        } else {
            if (N >= 2 && N <= 5) {
                // Not Weird
                System.out.println("Not Weird");
            } else if (N >= 6 && N <= 20) {
                // Weird
                System.out.println("Weird");
            } else {
                // Not Weird
                System.out.println("Not Weird");
            }
        }
        scanner.close();
    }
}
