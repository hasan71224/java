package clearance;
import java.util.Scanner;

public class person {
   public String name;
   public String department;
   
   public void supper(){
    Scanner input=new Scanner(System.in);
    System.out.print("enter name:");
    name = input.nextLine();
    System.out.print("enter department:");
    department=input.nextLine();
    }
    public void display(){
        System.out.println("name :"+name);
        System.out.println("department :"+department);
    }
   
}
