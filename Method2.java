package other;
import java.util.*;

// import javax.swing.plaf.basic.BasicInternalFrameTitlePane.SystemMenuBar;

/**
 * method2
 */
// public class method2 {
//     private static Scanner in;

//     public static void main(String[] args) {
//         in = new Scanner(System.in);
//         int num;
//         System.out.print("Enter the number: ");
//         num = in.nextInt();
//         System.out.printf("The sum digit of %d is %d", num, sumDigit(num));
//     }

//     private static int sumDigit(int num) {
//         int sum = 0;
//         while (num != 0) {
//             sum += (num   % 10);
//             num /= 10;
//         }
//         return sum;
//     }
// }

/**
 * method2
 */
// public class method2 {

//     private static Scanner in;
//     public static void main(String[] args) {
//         in = new Scanner(System.in);
//         String alp;
//         System.out.print("Enter the character: ");
//         alp = in.next();
//         if (alp.charAt(0) >= 48 && alp.charAt(0) <= 57) {
//             System.out.printf("%s is a number.", alp);
//         } else if (alp.charAt(0) >= 65 && alp.charAt(0) <= 90) {
//             if (alp.charAt(0) == 'A' || alp.charAt(0) == 'E' || alp.charAt(0) == 'I' || alp.charAt(0) == 'O' || alp.charAt(0) == 'U') {
//                 System.out.printf("%s is a vowel in uppercase.", alp);
//             } else {
//                 System.out.printf("%s is a consonant in uppercase.", alp);
//             }
//         } else if (alp.charAt(0) >= 97 && alp.charAt(0) <= 122) {
//             if (alp.charAt(0) == 'a' || alp.charAt(0) == 'e' || alp.charAt(0) == 'i' || alp.charAt(0) == 'o'
//                     || alp.charAt(0) == 'u') {
//                 System.out.printf("%s is a vowel in lowercase.", alp);
//             } else {
//                 System.out.printf("%s is a consonant in lowercase.", alp);
//             }
//         } else {
//             System.out.printf("%s is a symbol.", alp);
//         }

//     }
// }

/**
 * method2
 */
public class Method2 {

    private static Scanner in;
    private static Random random;

    public static void main(String[] args) {
        in = new Scanner(System.in);
        random = new Random();
        int answer = random.nextInt(1000), guess, count = 0;
        // answer = (int) (1 + Math.random() % 1000);
        System.out.print("Enter the number: ");
        guess = in.nextInt();
        do {
            count++;
            if (guess < answer) {
                System.out.print("Too small, try again: ");
            } else if (guess > answer) {
                System.out.print("Too big, try again: ");
            }
            guess = in.nextInt();
        } while (answer != guess);
        System.out.printf("You have guessed it.\nYou have tried %d times.", count);
    }
}