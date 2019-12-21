package minabazar;

import java.util.Scanner;

public class customer extends supper{
    String address;
    String c_type;
    double total_price;
    
    public void c_information(double price){
        Scanner c_input=new Scanner(System.in);
        System.out.println("enetr customer address:");
        address=c_input.next();
        System.out.println("enter customer type:");
        c_type = c_input.next();
        if(c_type.equalsIgnoreCase("regular")){
            total_price=price+((price-(price*0.05))*0.02);
        }
        else if(c_type.equalsIgnoreCase("member")){
            total_price=price+(price*0.02);
        }
    }
    public void c_display(){
        System.out.println("address is:"+address);
        System.out.println("customer type is:"+c_type);
        System.out.println("total price is:"+total_price);
    }
    
}

