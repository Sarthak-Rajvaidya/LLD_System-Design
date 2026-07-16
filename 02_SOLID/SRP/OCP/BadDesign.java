class Payment {

    public void pay(String paymentType) {

        if (paymentType.equalsIgnoreCase("UPI")) {
            System.out.println("Payment Successful using UPI.");
        }

        else if (paymentType.equalsIgnoreCase("CARD")) {
            System.out.println("Payment Successful using Card.");
        }

        else if (paymentType.equalsIgnoreCase("WALLET")) {
            System.out.println("Payment Successful using Wallet.");
        }

        else {
            System.out.println("Invalid Payment Method.");
        }
    }
}

public class BadDesign {

    public static void main(String[] args) {

        Payment payment = new Payment();

        payment.pay("UPI");
        payment.pay("CARD");
        payment.pay("WALLET");

    }
}