package berate_jai.com;
import java.util.Scanner;
public class packages {
    int p_id;
    String p_name;
    double p_price;
    int seat_capacity;
    
    public void packages1(int p,String pn,double pp,int sc){
       
        p=p_id;
        pn=p_name;
        pp=p_price;
        sc=seat_capacity;
        
    }
    public void travel(){
        if(seat_capacity<=0 && seat_capacity>10){
            System.out.println("Package is full...");
        }
        else{
            travelers obj5=new travelers();
            obj5.cost_information();
            obj5.total_cost(p_price);
            
        }
    }
    
    
    public void display(String pakage){
        System.out.println("pakage i'd is:"+p_id);
        System.out.println("pakage i'd is:"+p_name);
        System.out.println("pakage i'd is:"+p_price);
        System.out.println("pakage i'd is:"+seat_capacity);
        if(pakage.equalsIgnoreCase("summer")){
        summer obj2=new summer();
        obj2.display3();
        }
        else if(pakage.equalsIgnoreCase("winter")){
        winter obj3=new winter();
        obj3.display4();        
        }
    }

   
    
}
