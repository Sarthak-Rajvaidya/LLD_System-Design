// Deafault constructer 

class Student{

    int roll_no;
    String name;

    Student(){
        roll_no = 1;
        name = "Unknown";
    }

    void display(){
        System.out.println("Roll no : " +roll_no);
        System.out.println("Name : " +name);


    }

}




public class defconst {
    public static void main(String[] args){
        Student s1 = new Student();
        s1.display();
    }
    
}
