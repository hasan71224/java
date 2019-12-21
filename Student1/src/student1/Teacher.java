
package student1;

public class Teacher {
    int id;
    int betch;
    String dept;
    String desig;
    
    public void Student(int id, int betch,String dept){
        this.id=id;
        this.betch=betch;
        this.dept=dept;
        
    }
    public void Teacher(String desig){
        this.desig=desig;
    }
    public void ShowInfo(){
        System.out.println("id number is:"+id);
        System.out.println("betch number is:"+betch);
        System.out.println("department is:"+dept);
        System.out.println("designation is:"+desig);
    }
    
    
}
