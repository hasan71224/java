package Teacher;

public class Calculation {
    
    String name;
    double selary;
    int age;
    
    public void setvalue(String n, double s, int a){
        name=n;
        selary=s;
        age=a;
        
    }
    public void display(){
        System.out.println("Name:"+name);
        System.out.println("Selary:"+selary);
        System.out.println("age:"+age);
        
    }
    
}
