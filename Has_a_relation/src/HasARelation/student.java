package HasARelation;

public class student {
    int id;
    String name;
    Address address;
    public student(int id,String name,Address address){
        this.id=id;
        this.name=name;
        this.address=address;
    }
    public void display(){
        System.out.println("id:"+id);
        System.out.println("name:"+name);
        System.out.println("address:"+address.city+","+address.district+","+address.country);
    }
    
}
