
package cricket;

public class ScoreCount {
    
    String name;
    int run;
    int wicket;
    int match;
    float avg;
    
    public void setvalue(String n, int r, int w, int m){
        name=n;
        run=r;
        wicket=w;
        match=m;
           
    }
    public float avg_run(){
        return run/match;
    }
    public void display(){
        System.out.println("Player information:");
        System.out.println("Player Name:"+name);
        System.out.println("Total Run:"+run);
        System.out.println("total Wicket:"+wicket);
        System.out.println("Total Match:"+match);
       // System.out.println("Avg Run:"+avg);
        
    }
    
}
