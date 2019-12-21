package sportsmanagment;


public class Player {
    String name;
    String country;
    String sporsename;
    double prize;
    public void setvalue(String n, String c, String s, double p){
        name=n;
        country=c;
        sporsename=s;
        prize=p;

      }
      public void display(){
          System.out.println("PLAYER NAME IS:"+name);
          System.out.println("player country:"+country);
          System.out.println("player sportsname:"+sporsename);
          System.out.println("prize:"+prize);
                  
      } 
    
}
