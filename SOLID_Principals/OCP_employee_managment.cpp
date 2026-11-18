#include<iostream>
using namespace std;

//Added abstarct class first

class DiscountStrategy{
public:
    virtual double calculateDiscount(double price = 0);

    virtual ~DiscountStrategy() = default;

  

};

//Regular customer - 5 % discount

class RegularDiscount

int main(){
    return 0;
}