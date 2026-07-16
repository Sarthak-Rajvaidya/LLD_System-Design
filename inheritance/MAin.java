class Animal{
    void eat(){
        System.out.println("Animal is eating");
    }
}

class Dog extends Animal{
    void bark(){
        System.out.println("Dog is Barking");
    }
}

public class MAin{
    public static void main(String[] args){
        Dog dog = new Dog();
        dog.bark();
        dog.eat();
    }
}