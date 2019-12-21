package hotelrooms;
import java.util.Scanner;
public class Rooms {
    public int RoomNumber;
    public int NumberOfBad;
    public String SizeOfBad;
    public String Name;
    public String Email;
    public String Address;
    public String ExtraInformation;
    
    public void RentRoom(){
        Scanner scan=new Scanner(System.in);
        System.out.print("Enter Name:");
        Name=scan.nextLine();
        System.out.print("enter Email:");
        Email=scan.nextLine();
        System.out.print("Enter Address:");
        Address=scan.nextLine();
    }
    
    public void RoomInfo(String type){
        if(RoomType.equalsIgnoreCase("StanderdRoom")){
            RoomNumber=501;
            NumberOfBad=1;
            SizeOfBad="Single";
        }
        else if(RoomType.equalsIgnoreCase("FamilyRoom")){
            RoomNumber=601;
            NumberOfBad=1;
            SizeOfBad="double";
        }
        else{
            RoomNumber=701;
            NumberOfBad=1;
            SizeOfBad="Single & double";
        }     
    }
    public void RoomInformation(){
        System.out.println("Room number is:"+RoomNumber);
        System.out.println("Number of Bad in Room :"+NumberOfBad);
        System.out.println("Size Of Bad In Room:"+SizeOfBad);
        ExtraInformation="yes";
      
        
       if(RoomType.equalsIgnoreCase("StanderdRoom")){
           System.out.println("telephone"+ExtraInformation);
           System.out.println("television"+ExtraInformation);
       }
       else if(RoomType.equalsIgnoreCase("Family")){
           System.out.println("couch"+ExtraInformation);
           System.out.println("AC"+ExtraInformation);
       }
       else{
           System.out.println("kitchen"+ExtraInformation);
           System.out.println("Living area"+ExtraInformation);

       }   
        
    }
    
    public void CustomarInfo(){
        System.out.println("Customar Name is:"+Name);
        System.out.println("Customar Email Is: "+Email);
        System.out.println("Customar Address Is :"+Address);
    }
    
}

