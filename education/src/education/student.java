
package education;


public class student {
   String name; 
   String id; 
   String department;
   double mid_fee;
   double reg_fee;
   double final_fee;
   double total_fee;
   public student (String name,String id,String department){
       
       this.name=name;
       this.id=id;
       this.department=department;
       
       
   }
   public void student(double mid_fee, double reg_fee, double final_fee){
       this.mid_fee=mid_fee;
       this.reg_fee=reg_fee;
       this.final_fee=final_fee;
   }
   public void studentalculate(){
       total_fee=mid_fee+reg_fee+final_fee;
   }
   public void display(){
        System.out.println("student name:- "+name);
        System.out.println("student department name:- "+department);
        System.out.println("student id:- "+id);
        System.out.println("student total fee:- "+total_fee);
   }

    
}
