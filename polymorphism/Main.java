//compile - time polymorphism (method overloading)


package polymorphism;

class Vehicle{

    void start(String VehicleType){

        System.out.println("Statring a " +VehicleType);

    }

    void start(String VehicleType,int speed){
        System.out.println("Starting a " +VehicleType + "with speed " +speed);
    }
    

}





public class Main {

    public static void main(String[] args){
        Vehicle vehicle = new Vehicle();

        vehicle.start("Car");
        vehicle.start("Bike",60);
        



    }
    
}
