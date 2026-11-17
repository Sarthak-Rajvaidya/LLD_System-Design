#include<iostream>
using namespace std;

class Discount{
public:
    double calculatediscount(string type,double price){
        if(type == "REGULAR"){
            return price*0.05;
        }
        else if(type=="PREMIUM"){
            return price*0.10;
        }
        else if(type =="FESTIVAL"){
            return price*0.20;
        }
        return 0;
    }

};

int main(){
    return 0;
}