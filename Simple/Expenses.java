import java.util.*;

public class Expenses {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        System.out.print("Meals: ");
        int meals = scan.nextInt();
        System.out.print("Transport: ");
        int transport = scan.nextInt();
        System.out.print("Savings: ");
        int saving = scan.nextInt();

        int monthlyTotal = (meals + transport + saving) * 30;
        System.out.println("Monthly Expenses: RM" + monthlyTotal);
    }

}
