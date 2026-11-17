#include<iostream>
using namespace std;

//Added abstarct class first

class DiscountStrategy{
public:
    virtual double calculateDiscount(double price = 0);

    virtual ~DiscountStrategy() = default;

  

};

int main(){
    return 0;
}