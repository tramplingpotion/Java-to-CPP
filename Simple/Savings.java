/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package reuse.component;

import java.util.*;

/**
 *
 * @author syami
 */
public class Savings {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("What do you wanted to buy?");
        String whatToBuy = scan.nextLine();
        System.out.println("What is your monthly saving limit?");
        int savingMonthlyLimit = scan.nextInt();
        System.out.println("What is the price?");
        double price = scan.nextDouble();

        double waitTime = price / savingMonthlyLimit;
        System.out.println("You need to save for " +  Math.round(waitTime) + " Months to buy " + whatToBuy);
    }

}
