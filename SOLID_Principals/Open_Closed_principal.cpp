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
    }
    
};


int main(){
    return 0;
}