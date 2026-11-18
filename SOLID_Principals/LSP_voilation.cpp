#include<iostream>
using namespace std;

class Bird{
public:
    virtual void fly(){
        cout<<"Birs is flying"<<endl;
    }

};

class Sparrow : public Bird{

    void fly() override{
        cout<<"sparrow is flying"<<endl;
    }

};

class Penguin : public Bird{
    void fly() override{
        throw runtime_error("PEnguins cant fly");
    }
};



int main(){
    return 0;
}