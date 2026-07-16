package encapusulation;


class BankAccount{

    private String AccountHolder;
    private double balance;

    void SetAccountname(String name){
        AccountHolder = name;
    }

    void deposit(double amount){
        
        if(amount>0){
            balance += amount;

        }

        else{
            System.out.println("Invalid amount");
        }
    }

    void display(){
        System.out.println(AccountHolder);
        System.out.println(balance);
    }



}
public class Main {

    public static void main(String[] args){
        BankAccount account = new BankAccount();
        account.SetAccountname("Sarthak");
        account.deposit(10000);
        account.deposit(-50000);
        account.display();
    }
    
}
