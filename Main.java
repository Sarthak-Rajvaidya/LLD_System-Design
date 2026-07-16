class Student{
    int roll_no;
    String name;

    void display(){
        System.out.println("Roll_no : " +roll_no);
        System.out.println("Name : "+name);

    }
}

public class Main {

     public static void main(String [] args){

        Student s1 = new Student();
        s1.roll_no = 45;
        s1.name = "sarthak";
        s1.display();

     }
}