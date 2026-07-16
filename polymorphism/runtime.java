package polymorphism;

class Vehicle{
    void start(){
        System.out.println("Starting the vehicle");
    }
}

class Car extends Vehicle{

    @Override
    void start(){
        System.out.println("Car starts with a push button");
    }



}


public class runtime {

    public static void main(String[] args){
        Vehicle vehicle = new Car();
        Vehicle vehicle2 = new Vehicle();
        vehicle2.start();
        vehicle.start();

    }
    
}
