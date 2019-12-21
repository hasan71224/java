package Train;
import java.util.Scanner;

public class Road {

    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        
        System.out.print("Who many train :");
        int t=input.nextInt();
        
        for(int i=0;i<t;i++){
        
        System.out.print("Enter Train Name:");
        String train_name=input.next();
        
        System.out.print("Enter total passing Station:");
        int total_station=input.nextInt();
        
        System.out.print("Enter First and Last Station:");
        String range=input.next();
        
        System.out.print("Enter Train Starting time:");
        float Starting=input.nextFloat();
        
        System.out.print("Enter total income pre tripe:");
        double income=input.nextDouble();
        
        System.out.print("Enter total outcome per tripe:");
        double outcome=input.nextDouble();
        
        Information train=new Information();
        train.TrainInformation(train_name, total_station, range, Starting);
        train.profit(income, outcome);
        train.display();
        }
    }
    
}
