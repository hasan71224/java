
package minabazar;

import java.util.Scanner;

public class MinaBazar {

    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("enter id:");
        int id=input.nextInt();
        System.out.println("enter name:");
        String name=input.next();
        
        supper obj3=new supper();
        
        obj3.setinfo(id,name);
        obj3.display();
        
        
        
        product obj=new product();
        //obj.information();
        double rec=obj.p_information();
        customer obj2=new customer();
        
        obj2.c_information(rec);
        // obj.display();
         obj2.c_display();
        obj.p_display();
       
        
        
    }
    
}
