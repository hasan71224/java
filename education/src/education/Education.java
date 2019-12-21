
package education;

import java.util.Scanner;

public class Education {

    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("enter your choice:- ");
        System.out.println("1. Student ");
        System.out.println("2. Teacher");
        int choice=input.nextInt();
        
        switch(choice){
            case 1:
                System.out.println("enter student name:- ");
                String name=input.next();
                System.out.println("enter student id:- ");
                String id=input.next();
                System.out.println("enter student department:- ");
                String department=input.next();
                System.out.println("enter student mid fee:- ");
                double mid=input.nextDouble();
                System.out.println("enter student final fee:- ");
                double final_fee=input.nextDouble();
                System.out.println("enter student registration fee:- ");
                double reg=input.nextDouble();
                
                 student inp= new student(name,id,department);
                 inp.student(mid,final_fee,reg);
                 inp.studentalculate();
                 inp.display();
                 break;
            case 2:
                System.out.println("enter teacher name:- ");
                String nam=input.next();
                System.out.println("enter teacher id:- ");
                int idt=input.nextInt();
                System.out.println("enter teacher department:- ");
                String departmentt=input.next();
                System.out.println("enter teacher designation:- ");
                String des=input.next();
                
                 teacher inpt= new teacher(nam,idt,departmentt);
                 inpt.teacher(des);
                 inpt.showinfo();   
        }
    }
    
}
