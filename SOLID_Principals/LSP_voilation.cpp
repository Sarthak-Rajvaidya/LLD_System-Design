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

void makebirdfly(Bird &bird){
    bird.fly();
}



int main(){
    Sparrow sparrow;
    Penguin penguin;

    makebirdfly(sparrow);
    makebirdfly(penguin);



    return 0;
}