
package sportsmanagment;

import java.util.Scanner;

public class SportsManagment {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter name:");
        String name=input.nextLine();
        System.out.print("EnterCountry:");
        String Country=input.nextLine();
        System.out.print("Enter Sportsname:");
        String SportName=input.nextLine();
        System.out.print("Enter Prize:");
        double Prize=input.nextDouble();
        
        Player info=new Player();
        info.setvalue(name, name, name, Prize);
        info.display();
        
        
        
    }
    
}
