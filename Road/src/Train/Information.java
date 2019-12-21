package Train;

public class Information {
    String train_name;
    int total_Station;
    String range;
    float starting_time;
    double income;
    double outcome;
    double profit;
    
    public void TrainInformation(String n, int s, String r, float t){
        train_name=n;
        total_Station=s;
        range=r;
        starting_time=t;
    }
    
    public void profit(double ic,double oc){
        income=ic;
        outcome=oc;
        profit=income-outcome;
    }
    public void display(){
        System.out.println("Train Name:"+train_name);
        System.out.println("Total passing Station:"+total_Station);
        System.out.println("Starting Station and last Station:"+range);
        System.out.println("Train Starting time:"+starting_time);
        System.out.println("Total profit this Train:"+profit);
    }
        
    
}
