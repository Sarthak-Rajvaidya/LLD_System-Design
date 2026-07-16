public class Main {

    public static void main(String[] args) {

        Payment payment;

        payment = new CardPayment();
        payment.pay();

        payment = new UPIPayment();
        payment.pay();

        payment = new WalletPayment();
        payment.pay();

        payment = new PayPalPayment();
        payment.pay();

    }
}