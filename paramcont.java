class Student{
    int roll_no;
    String name;

    Student(int r,String n){
        roll_no = r;
        name = n;


    }

    void display(){
        System.out.println("Roll no : " +roll_no);
        System.out.println("Name" +name);

    }
}




public class paramcont {

    public static void main(String[] args){
        Student s1 = new Student(45,"Sarthak");
        Student s2 = new Student(48,"Revati");

        s1.display();
        s2.display();
        
    }
    
}
