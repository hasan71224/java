
package supershop;

public class PacketProduct extends product{
    
    private String expiryDate;

    public PacketProduct(String p_name, String p_price) {
        super(p_name, p_price);
    }

   

    public String getExpiryDate() {
        return expiryDate;
    }

    public void setExpiryDate(String expiryDate) {
        this.expiryDate = expiryDate;
    }

    
    

    
   public void Show(){
        System.out.println("Product Name = "+p_name);
        System.out.println("Product Price = "+p_price);
        System.out.println("The producs expiry date is "+expiryDate);
    }
    
}
