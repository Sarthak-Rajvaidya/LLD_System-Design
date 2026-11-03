// #include<iostream>
// using namespace std;

// class Payment{
// public:
//     void pay(string type){
//         if(type == "UPI"){
//             cout<<"PAy using UPI";
//         }
//         else if(type == "Card"){
//             cout<<"Pay using Card";
//         }

//         //Suppose i need to add Paypal tommorow so what should i do ? i need to modify the loop as following

//         else if(type == "PAypal"){
//             cout<<"Using paypal we could do payment";
//         }
//     }
    
// };


// int main(){
//     return 0;
// }


//How to fix these so to fix these we should use Abstraction + Polymorphism 

#include<iostream>
using namespace std;

class PaymentMethod{
public:
    virtual void pay(double amount) = 0;

    virtual ~PaymentMethod() = default;

};

//Impelmeting different payyment methods

class UPI :public PaymentMethod{
public:
    void pay(double amount) override{
        cout <<"Paid"<<amount<<"Uisng UPI"<<endl;
    }

};

class CreditCard :public PaymentMethod{
public:
    void pay(double amount) override{
        cout<<"Paid"<<amount<<"Using CreditCard"<<endl;

    }
    
};

class Paypal :public PaymentMethod{
public:
    void pay(double amount) override{
        cout<<"Paid"<<amount<<"using Paypal"<<endl;
    }

};

//Use abstarction to get values

void checkout(PaymentMethod &payment,double amount){
    payment.pay(amount);

}


int main(){

    UPI upi;
    CreditCard creditcard;
    Paypal paypal;

    checkout(upi,500);
    checkout(creditcard,1000);
    checkout(paypal,2000);

    //the inheritance is private by default.

// That means UPI privately inherits PaymentMethod, so an UPI object cannot be treated as a PaymentMethod from outside the class.



    return 0;
    
}