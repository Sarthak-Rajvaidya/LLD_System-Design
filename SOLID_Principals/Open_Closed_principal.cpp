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

class UPI : PaymentMethod{
public:
    void pay(double amount) override{
        cout <<"Paid"<<amount<<"Uisng UPI"<<endl;
    }

};

class CreditCard : PaymentMethod{
public:
    void pay(double amount) override{
        cout<<"Paid"<<amount<<"Using CreditCard"<<endl;

    }
    
};


int main(){
    return 0;
    
}