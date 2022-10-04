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
public class Expenses {

    /**
     * @param args the command line arguments
     */
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
