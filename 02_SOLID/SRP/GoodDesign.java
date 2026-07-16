// Booking Responsibility
class BookingService {

    public void bookTicket() {
        System.out.println("Ticket Booked Successfully.");
    }

}

// Payment Responsibility
class PaymentService {

    public void makePayment() {
        System.out.println("Payment Successful.");
    }

}

// Notification Responsibility
class NotificationService {

    public void sendConfirmationEmail() {
        System.out.println("Confirmation Email Sent.");
    }

}

// Invoice Responsibility
class InvoiceService {

    public void generateInvoice() {
        System.out.println("Invoice Generated.");
    }

}

// Database Responsibility
class BookingRepository {

    public void saveBooking() {
        System.out.println("Booking Saved in Database.");
    }

}