abstract class Seat {

    protected int seatNumber;
    protected boolean isBooked;

    public Seat(int seatNumber) {
        this.seatNumber = seatNumber;
        this.isBooked = false;
    }

    
    abstract void bookSeat();

    // Common Method
    void displaySeatInfo() {
        System.out.println("Seat Number : " + seatNumber);
        System.out.println("Booked      : " + isBooked);
    }
}

class RegularSeat extends Seat {

    public RegularSeat(int seatNumber) {
        super(seatNumber);
    }

    @Override
    void bookSeat() {

        if (!isBooked) {
            isBooked = true;
            System.out.println("Regular Seat Booked Successfully.");
        } else {
            System.out.println("Seat Already Booked.");
        }
    }
}

class PremiumSeat extends Seat {

    public PremiumSeat(int seatNumber) {
        super(seatNumber);
    }

    @Override
    void bookSeat() {

        if (!isBooked) {
            isBooked = true;
            System.out.println("Premium Seat Booked with Complimentary Snacks.");
        } else {
            System.out.println("Seat Already Booked.");
        }
    }
}

class VIPSeat extends Seat {

    public VIPSeat(int seatNumber) {
        super(seatNumber);
    }

    @Override
    void bookSeat() {

        if (!isBooked) {
            isBooked = true;
            System.out.println("VIP Seat Booked with Lounge Access.");
        } else {
            System.out.println("Seat Already Booked.");
        }
    }
}

public class Main {

    public static void main(String[] args) {

        Seat seat1 = new RegularSeat(101);
        Seat seat2 = new PremiumSeat(201);
        Seat seat3 = new VIPSeat(301);

        seat1.bookSeat();
        seat2.bookSeat();
        seat3.bookSeat();

        System.out.println();

        seat1.displaySeatInfo();
        System.out.println();

        seat2.displaySeatInfo();
        System.out.println();

        seat3.displaySeatInfo();
    }
}