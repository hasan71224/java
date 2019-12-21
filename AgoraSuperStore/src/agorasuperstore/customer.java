package agorasuperstore;

import java.util.Scanner;

public class customer extends superclass{
    String customer_type;
    float discount;
    float tex;
    
    public void CInformation(){
        Scanner input2=new Scanner(System.in);
        System.out.print("enter customer type:");
        customer_type=input2.nextLine();
        
        if(customer_type.equalsIgnoreCase("member")){
           discount=(float) 0.05; 
        }
        else if(customer_type.equalsIgnoreCase("regular")){
            tex=(float) 0.02;
        }
    }
    public void display2(){
        System.out.println("discount offer is:"+discount);
        System.out.println("tex is"+tex);
    }
    
    
}
