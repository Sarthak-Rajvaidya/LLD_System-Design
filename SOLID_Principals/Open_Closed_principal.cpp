#include<iostream>
using namespace std;

class Payment{
public:
    void pay(string type){
        if(type == "UPI"){
            cout<<"PAy using UPI";
        }
        else if(type == "Card"){
            cout<<"Pay using Card";
        }

        //Suppose i need to add Paypal tommorow so what should i do ? i need to modify the loop as following

        else if(type == "PAypal"){
            cout<<"Using paypal we could do payment";
        }
    }
    
};


int main(){
    return 0;
}