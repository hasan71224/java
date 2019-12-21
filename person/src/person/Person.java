package person;

import java.util.Scanner;

public class Person {

    public static void main(String[] args) {
        Scanner mark=new Scanner(System.in);
        System.out.println("for Student enter 1:");
        System.out.println("for teccher enter 2:");
        int choice=mark.nextInt();
        switch(choice){
            case 1:
                student obj=new student();
                obj.info();
                obj.info2();
                obj.display();
                obj.display2();
                break;
            case 2:
                teacher obj2=new teacher();
                obj2.info();
                obj2.info3();
                obj2.display();
                obj2.display3();
                
                
        }
    }   
}
