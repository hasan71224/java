
package minabazar;
import java.util.Scanner;
public class product extends supper {
    double price;
    String availability;
    
    public double p_information(){
        
        Scanner p_input=new Scanner(System.in);
        System.out.println("enter product price;");
        price=p_input.nextDouble();
        System.out.println("enter product availability:");
        availability=p_input.next();
        
        customer object=new customer();
        object.c_information(price);
        
        return price;
    }
    public void p_display(){
        System.out.println("product price is:"+price);
        System.out.println("product availibility:"+availability);
    }
    
}
