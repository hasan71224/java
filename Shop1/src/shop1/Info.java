package shop1;
public class Info {
    int id;
    String name;
    double salary;
    double day_paid=300;
    int sell;
    int bonus;
    double monthly_salary;
    
    public Info(int id, String name){
        this.id=id;
        this.name=name;    
    }
    public void Salary(double salary){
        this.salary=salary;
        monthly_salary=salary+(300*30);     
    }
    public void bonus(int sell){
        this.sell=sell;
        
        if(sell>=100){
            bonus=500;
        }
        else{
            bonus=0;
        }
    }
      public void display(){
        System.out.println("id number is:"+id);
        System.out.println("nume is;"+name);
        System.out.println("monthly salary is:"+monthly_salary);
        System.out.println("bonus amount is:"+bonus);
        }     
} 


