package person;

import java.util.Scanner;

public class teacher extends supper{
    String designation;
    
    public void info3(){
        Scanner input3=new Scanner(System.in);
        System.out.println("enter designation:");
        designation=input3.nextLine();
    }
    public void display3(){
        System.out.println("designation is:"+designation);
    }
    
}
