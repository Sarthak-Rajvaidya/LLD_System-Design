public class Main {

    public static void processPayment(Payment payment){

        payment.pay();

    }

    public static void main(String[] args) {

        processPayment(new CardPayment());

        processPayment(new UPIPayment());

        processPayment(new WalletPayment());

    }

}