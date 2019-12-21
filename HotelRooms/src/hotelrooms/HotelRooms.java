package hotelrooms;
import java.util.Scanner;

public class HotelRooms {
    
    public static void main(String[] args) {
        
        Scanner input=new Scanner(System.in);
        System.out.println("Enter room type");
        String RoomType=input.nextLine();
        
        FamilyRoom input2=new FamilyRoom();
        input2.RoomInfo(RoomType);
        input2.RoomInformation();
        input2.RentRoom();
        
        StanderdRoom input3=new StanderdRoom();
        input3.RoomInfo(RoomType);
        input3.RoomInformation();
        input3.RentRoom();
        
        SuitRoom input4=new SuitRoom();
        input4.RoomInfo(RoomType);
        input4.RoomInformation();
        input4.RentRoom();
      
    }
    
}
