/*has a relationship*/
package student;

public class information {
    int id;
    String name;
    address address;
    public information(int id, String name, address address){
        this.id=id;
        this.name=name;
        this.address=address;
    }
     public void display(){
         System.out.println("id:"+id+" name:"+name);
         System.out.println("address:"+address.city+" ,"+address.district+" ,"+address.country);
     }
    
}
