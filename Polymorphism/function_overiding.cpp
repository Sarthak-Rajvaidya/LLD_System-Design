#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    void show(){
        cout<<"Parent class";
    }

};

class Child{
public:

    void show(){
        cout<<"Class Child";
    }

};


int main(){
    Child c1;
    c1.show();
    return 0;

}
