package inharitance;

public class FamilyRoom extends rooms{
    String CouchSiting;
    String AirCondition;
    
    void display3(){
        display1();
        System.out.println("Has CouchSiting : "+CouchSiting);
        System.out.println("Has Air Condition : "+AirCondition);
    }
    
}
