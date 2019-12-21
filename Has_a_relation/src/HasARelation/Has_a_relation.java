package HasARelation;

public class Has_a_relation {
    
    public static void main(String[] args) {
        Address address1 = new Address("dhanmondi","dhaka","bangladesh");
        Address address2 = new Address("jatrabary","dhaka","bangladesh");
        
        student info1=new student(101,"kaissha",address1);
        student info2=new student(102,"haissha",address2);
        
        info1.display();
        info2.display();
        
    }
    
}
