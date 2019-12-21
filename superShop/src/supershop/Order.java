
package supershop;

public class Order {
    
    String date;
    
    String time;

    public Order(String date, String time) {
        this.date = date;
        this.time = time;
    }
    public void Show(){
        System.out.println("Date = "+date);
        System.out.println("Time = "+time);
    }
    
    
}
