
package berate_jai.com;

import java.util.Scanner;


public class Berate_jaiCom {

  
    public static void main(String[] args) {
        int p_id;
        String p_name;
        double p_price;
        int seat_capacity;
        
        Scanner input=new Scanner(System.in);
        System.out.print("enter Package ID number:");
        p_id=input.nextInt();
        System.out.println("Enter Package name:");
        p_name=input.next();
        System.out.println("Enter Package price:");
        p_price=input.nextDouble();
        System.out.println("Enter How Much seat you need:");
        seat_capacity=input.nextInt();
        
        packages obj1=new packages();
        obj1.packages1(p_id,p_name,p_price,seat_capacity);
        obj1.travel();
        
        summer obj2=new summer();
        obj2.month_info();
        winter obj3=new winter();
        obj3.season_info();
        
        obj1.display(p_name);
        
    }
    
}
