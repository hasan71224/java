package supershop;

public class SuperShop {
    
    public static void main(String[] args) {
        
        Customer c = new Customer("Mustafiz","Adabor","01717171716");
        Order o = new Order("13/07/19","10:00 AM");
        
        RawProduct R = new RawProduct("Rice","40");
        R.setFreshness(true);
        R.Show();
        PacketProduct P = new PacketProduct("Milk","50");
        P.setExpiryDate("07/08/19");
        P.Show();
        
    }
    
}
