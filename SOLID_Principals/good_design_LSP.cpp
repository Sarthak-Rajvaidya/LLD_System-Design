#include<iostream>
using namespace std;

class Bird{
public:
    virtual void eat(){
        cout<<"Birds can eat"<<endl;
    }
    virtual ~Bird() = default;
};

class FlyingBird: public Bird{
public:
    virtual void fly() = 0;

};

class Sparrow :public FlyingBird{
public:
    void fly() override{
        cout<<"Sparrow the bird is flying"<<endl;


    }
};

class Penguin : public Bird{
public:
    void swim(){
        cout<<"Penguin is swimming"<<endl;
    }
};




int main(){

    Sparrow sparrow;
    Penguin penguin;

    sparrow.eat();
    sparrow.fly();

    penguin.eat();
    penguin.swim();



    return 0;
}