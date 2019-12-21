
package student1;
import java.util.Scanner;

public class Student1 {
    
    public static void main(String[] args) {
        Scanner input= new Scanner(System.in);
        System.out.println("enter information:");
        System.out.print("Enter id  number:");
        int id=input.nextInt();
        System.out.print("Enter betch number:");
        int betch=input.nextInt();
        System.out.print("Enter Depertment name:");
        String dept=input.next();
        System.out.print("Enter designation:");
        String desig=input.next();
        
        Teacher info=new Teacher();
        info.Student(id,betch,dept);
        info.Teacher(desig);
        info.ShowInfo();
        
    }
    
}
