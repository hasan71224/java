package inharitance;

public class SuiteRoom extends rooms {
    
    int NumberOfBadRoom;
    int NumberOfSingleBad;
    int NumberOfDoubleBad;
    int LivingArea;
    String Kitchenette;
    String AirCondition;
    
    void display4(){
        display1();
        System.out.println("Number Of Bad Room : "+NumberOfBadRoom);
        System.out.println("Number Of Single Bad : "+NumberOfSingleBad);
        System.out.println("Number Of Double Bad :"+NumberOfDoubleBad);
        System.out.println("Living Area Is :"+LivingArea);
        System.out.println("has Kitchenette :"+Kitchenette);
        System.out.println("Has Air Condition : "+AirCondition);
    }
    
    
    
    
}
