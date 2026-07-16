class Booking {

    public void bookTicket() {
        System.out.println("Ticket Booked Successfully.");
    }

    public void makePayment() {
        System.out.println("Payment Successful.");
    }

    public void sendConfirmationEmail() {
        System.out.println("Confirmation Email Sent.");
    }

    public void generateInvoice() {
        System.out.println("Invoice Generated.");
    }

    public void saveBookingToDatabase() {
        System.out.println("Booking Saved in Database.");
    }

}

public class BadDesign {

    public static void main(String[] args) {

        Booking booking = new Booking();

        booking.bookTicket();
        booking.makePayment();
        booking.sendConfirmationEmail();
        booking.generateInvoice();
        booking.saveBookingToDatabase();

    }

}