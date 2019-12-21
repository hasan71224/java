
package education;

public class teacher {
  String name;
  int id;
  String department;
  double Salary;
  String designation;
  public teacher(String name,int id,String department){
      this.name=name;
      this.id=id;
      this.department=department;
      
  }
  public void teacher(String designation){
      this.designation=designation;
      
      if(designation.equalsIgnoreCase("Head"))
          Salary=50000; 
      else if(designation.equalsIgnoreCase("Assistant"))
          Salary=40000;
      else
          Salary=0;
  }
  public void showinfo(){
      System.out.println("teacher name is:"+name);
      System.out.println("teacher id is:"+id);
      System.out.println("teacher department is:"+department);
      System.out.println("teacher salary is:"+Salary);
  }
}

