package shop1;
import java.util.Scanner;

public class Shop1 {

   
    public static void main(String[] args) {
        Scanner input= new Scanner(System.in);
        System.out.println  ("Enter information.....");
        System.out.print("Enter id number:");
        int id=input.nextInt();
        System.out.print("Enter numer:");
        String name=input.next();
        System.out.print("Enter salary: ");
        double salary=input.nextDouble();
        System.out.print("Enter how many product sell:");
        int sell=input.nextInt();
        
        Info print = new Info(id, name); 
        print.Salary(salary);
        print.bonus(sell);
        print.display();
            
        
        
        
    }
    
}
