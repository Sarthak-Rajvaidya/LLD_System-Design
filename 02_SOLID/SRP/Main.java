public class Main {

    public static void main(String[] args) {

        BookingService bookingService = new BookingService();
        PaymentService paymentService = new PaymentService();
        NotificationService notificationService = new NotificationService();
        InvoiceService invoiceService = new InvoiceService();
        BookingRepository bookingRepository = new BookingRepository();

        bookingService.bookTicket();

        paymentService.makePayment();

        notificationService.sendConfirmationEmail();

        invoiceService.generateInvoice();

        bookingRepository.saveBooking();

    }

}