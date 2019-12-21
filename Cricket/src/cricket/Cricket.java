
package cricket;


public class Cricket {

    
    public static void main(String[] args) {
      System.out.println("for cricketer ONE:");
      ScoreCount cricketer1=new ScoreCount();
      cricketer1.setvalue("Mashrafi" ,1750, 258, 150);
      cricketer1.display();
      float rec=cricketer1.avg_run();
      System.out.println("AVG Run :"+rec);
      
      
      System.out.println("for cricketer TWO:");
      ScoreCount cricketer2=new ScoreCount();
      cricketer2.setvalue("Tamim" ,6460, 0, 186);
      cricketer2.display();
      float rec2=cricketer2.avg_run();
      System.out.println("AVG Run :"+rec2);
      
      
      System.out.println("for cricketer Three:");
      ScoreCount cricketer3=new ScoreCount();
      cricketer3.setvalue("Mahmudulla" ,3657, 76, 147);
      cricketer3.display();
      float rec3=cricketer3.avg_run();
      System.out.println("AVG Run :"+rec3);
      
    
    }
    
}
