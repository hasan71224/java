package clearance;

public class admin extends person{
    private String designation;
    
    public admin(String designation){
        this.designation=designation;
    }

    public void display3(){
        System.out.println("\t Prepared by:");
        System.out.println("\t "+designation);
    }
    
}
