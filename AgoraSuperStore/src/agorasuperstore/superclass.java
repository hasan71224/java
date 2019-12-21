package agorasuperstore;

import java.util.Scanner;

public class superclass {
    int id;
    String name;
    String address;
    
    public void SInformation(){
        Scanner input=new Scanner(System.in);
        System.out.print("enter id number:");
        id=input.nextByte();
        System.out.print("enter name:");
        name=input.next();
        System.out.print("enter address:");
        address=input.next();
    }
    public void Sdisplay(){
        System.out.println("id number is:"+id);
        System.out.println("name is :"+name);
        System.out.println("address is :"+address);
    }
    
}
