
package EmployeeMenegment;

public class Employee {
   String Id;
   String name;
   double salary;
   
   public void setValue(String i, String n, double s){
       System.out.println("before assign");
       System.out.println("i is: "+i);
       System.out.println("n is: "+n);
       System.out.println("s is: "+s);
      Id=i;
      name=n;
      salary=s;
   }
   public double yearlySalary(){
    return salary*12;      
   }
   
   public void display(){
       System.out.println("after assign");
       System.out.println("id is: "+Id);
       System.out.println("name is: "+name);
       System.out.println("salary is: "+salary);
   }
   
}
