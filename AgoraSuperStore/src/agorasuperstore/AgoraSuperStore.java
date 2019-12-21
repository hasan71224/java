package agorasuperstore;

import java.util.Scanner;

public class AgoraSuperStore {

    public static void main(String[] args) {
        Scanner Scan=new Scanner(System.in);
        System.out.println("For customar enter 1");
        System.out.println("For Sales person enter 2");
        System.out.println("For product enter 3");
        System.out.print("enter your choice:");
        int choice=Scan.nextInt();
        
        switch(choice){
        
        case 1:
        customer print=new customer();
        print.SInformation();
        print.CInformation();
        print.Sdisplay();
        print.display2();
        break;
        
        case 2:
        salesperson print1=new salesperson();
        print1.SInformation();
        print1.Sdisplay();
        break;
        case 3:
        product print2=new product();
        print2.Pinformation();
        print2.display3();
        }
    }    
}
