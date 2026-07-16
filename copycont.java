class Student {
    int rollNo;
    String name;

    Student(int r, String n) {
        rollNo = r;
        name = n;
    }

    // Copy Constructor
    Student(Student s) {
        rollNo = s.rollNo;
        name = s.name;
    }

    void display() {
        System.out.println(rollNo + " " + name);
    }
}

public class copycont {
    public static void main(String[] args) {

        Student s1 = new Student(101, "Sarthak");

        Student s2 = new Student(s1);

        s2.display();
    }
}