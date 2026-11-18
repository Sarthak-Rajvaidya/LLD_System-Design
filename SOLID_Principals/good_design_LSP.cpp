#include<iostream>
using namespace std;

class Bird{
public:
    virtual void fly(){
        cout<<"Birds can fly"<<endl;
    }
    virtual ~Bird() = default;
};



int main(){
    return 0;
}