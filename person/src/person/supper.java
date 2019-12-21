package person;

import java.util.Scanner;

public class supper {
    int id;
    String name;
    
    public void info(){
        Scanner input=new Scanner(System.in);
        System.out.println("enter id number:");
        id=input.nextInt();
        System.out.println("enter name:");
        name=input.next();
    }
    public void display(){
        System.out.println("id number is:"+id);
        System.out.println("name is :"+name);
    }
    
} 

