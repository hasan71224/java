package clearance;
import java.util.Scanner;

public class student extends person{
    public String id;
    public int batch;
    public String section;
    public double dues;
    
    public void scan1(){
        Scanner input2=new Scanner(System.in);
        System.out.print("enter id number:");
        id=input2.nextLine();
        System.out.print("enter batch number:");
        batch=input2.nextInt();
        System.out.print("enter section name:");
        section=input2.next();
        System.out.print("enter Student dues:");
        dues=input2.nextDouble();
    }
    public void display2(){
        System.out.println("id:"+id);
        System.out.println("batch:"+batch);
        System.out.println("section:"+section);
        System.out.println("total dues:"+dues);
    }
    
}
