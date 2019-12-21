
package supershop;

public class product {
    protected String p_name;
    protected String p_price;
    Order order;
    Customer customer;

    public product(String p_name, String p_price) {
        this.p_name = p_name;
        this.p_price = p_price;
    }
    
   // Customer c = new Customer("Mustafiz","Adabor","01717171716");
    
   // Order o = new Order("13/07/19","10:00 AM");
   
   
    
    public void Show(){
        System.out.println("Product Name = "+p_name);
        System.out.println("Product Price = "+p_price);
    }
    
}
