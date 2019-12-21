package person;

import java.util.Scanner;

public class student extends supper{
    int batch;
    public void info2(){
        Scanner input2=new Scanner(System.in);
        System.out.println("enter batch number:");
        batch=input2.nextInt();
    }
    public void display2(){
        System.out.println("batch number is:"+batch);
    }
    
}
