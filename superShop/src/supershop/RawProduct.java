
package supershop;

public class RawProduct extends product{
    
    private boolean freshness;

    public RawProduct(String p_name, String p_price) {
        super(p_name, p_price);
    }

    public boolean isFreshness() {
        return freshness;
    }

    public void setFreshness(boolean freshness) {
        this.freshness = freshness;
    }
    
    

    
    
    public void Show(){
        System.out.println("Product Name = "+p_name);
        System.out.println("Product Price = "+p_price);
        System.out.println("Product freshness = "+freshness);
    }
    
    
    
}
