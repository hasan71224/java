package berate_jai.com;

import java.util.Scanner;

public class travelers{
    String t_type;
    Float discount;
    double total_cost;
    
    public void cost_information(){
    Scanner input2=new Scanner(System.in);
    t_type =input2.next();
    discount=input2.nextFloat();
        
    }
    public void total_cost(double price){
        
        if(t_type.equalsIgnoreCase("resigter")){
            total_cost=price-(price*0.1);
        }
        else{
            total_cost=price;
        }
    }
    public void display2(){
        System.out.println("Travelars Type"+t_type);
        System.out.println("Travelaring Cost"+total_cost);
    }
}
