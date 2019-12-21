package agorasuperstore;

import java.util.Scanner;

public class product{
    int Pid;
    int Pprice;
    String Pname;
    String quantity;
    
    public void Pinformation(){
        Scanner input3 =new Scanner(System.in);
        System.out.print("enter Product id number:");
        Pid=input3.nextInt();
        System.out.print("enter Product price:");
        Pprice=input3.nextInt();
        System.out.print("enter Product name:");
        Pname=input3.next();
        System.out.print("enter Product quentity:");
        quantity=input3.next();
    }
    public void display3(){
        System.out.println("product is found");
        System.out.println("Product id number is:"+Pid);
        System.out.println("Product Pprice is:"+Pprice);
        System.out.println("Product name is:"+Pname);
        System.out.println("Product quantity is:"+quantity);
        
    }
    
}
