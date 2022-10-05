import java.util.Scanner;

public class Gambling {

    public static void main(String[] args) {

        System.out.println("_____________________________");
        System.out.println("    Welcome To Trampling");
        System.out.println("      Gambling Centre");
        System.out.println("");
        System.out.println(" Enter a Number Between 0-10");
        System.out.println("  If You Correct, You win!");
        System.out.println("  If You Wrong, You Lose!");
        System.out.println("_____________________________");
        System.out.println("");
        int gamble;
        Scanner sc = new Scanner(System.in);
        int number = 0;
        do {
            gamble = (int) (Math.random() * 10);
            System.out.println("Enter Your Number (0-10): ");
            number = sc.nextInt();

            if (number > 10 || number < 0) {
                System.err.println("Error");
            } else if (number == gamble) {
                System.out.println("You Won!");
                System.out.println("The Answer is " + gamble);
            } else if (number != gamble) {
                System.out.println("You Lose!");
                System.out.println("The Answer is " + gamble);
            }
        } while (gamble != number);
    }
}

