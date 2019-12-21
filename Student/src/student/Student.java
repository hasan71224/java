/*has a relationship*/

package student;

public class Student {

    public static void main(String[] args) {
        address add1=new address("dhanmondi","dhaka","bangladesh");
        address add2=new address("mirpur","dhaka","bangladesh");
        address add3=new address("jatrabary","dhaka","bangladesh");
        
        information student1=new information(110,"kaishha",add1);
        information student2=new information(111,"kilbil pandy",add2);
        information student3=new information(112,"sondi",add3);
        
        student1.display();
        student2.display();
        student3.display();
    }
    
}
