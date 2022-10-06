import java.util.*;

public class SimpleCalculator {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter 1st number: ");
        int number1 = scan.nextInt();
        System.out.print("Enter 2nd number: ");
        int number2 = scan.nextInt();
        System.out.print("Enter Method of operation: ");
        char operator = scan.next().charAt(0);
        switch (operator) {
            case '+':
                System.out.println(number1 + number2);
                break;
            case '-':
                System.out.println(number1 - number2);
                break;
            case '*':
                System.out.println(number1*number2);
                break;
            case '/':
                System.out.println(number1/number2);
                break;

            default:
                break;
        }
        scan.close();
    }
}