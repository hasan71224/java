
package supershop;

public class Customer {
    private String cName;
    private String cAddress;
    private String cPhn;

    public Customer(String cName, String cAddress, String cPhn) {
        this.cName = cName;
        this.cAddress = cAddress;
        this.cPhn = cPhn;
    }
    
    public void Show(){
        System.out.println("Customer Name = "+cName);
        System.out.println("Adress = "+cAddress);
        System.out.println("Phone no = "+cPhn);
    }
    
}
