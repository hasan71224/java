package EmployeeMenegment;

public class EmployeeMenegment {

    public static void main(String[] args) {
        System.out.println("for reference one:");
        Employee emp1=new Employee();
        //emp1.Id="5";
        emp1.setValue("101", "AKA", 100000);
        double rec = emp1.yearlySalary();
        System.out.println("y s is: "+rec);
        emp1.display();
        
        System.out.println("for reference two:");
        Employee emp2=new Employee();
        //emp1.Id="5";
        emp2.setValue("102", "AKA2", 200000);
        emp2.display();
        
    }
    
}


