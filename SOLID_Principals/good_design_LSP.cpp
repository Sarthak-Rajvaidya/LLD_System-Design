#include<iostream>
using namespace std;

class Bird{
public:
    virtual void fly(){
        cout<<"Birds can fly"<<endl;
    }
    virtual ~Bird() = default;
};

class FlyingBird{
public:
    virtual void fly() = 0;

};



int main(){
    return 0;
}