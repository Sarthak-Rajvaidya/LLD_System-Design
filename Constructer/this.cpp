#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    string name;

    Teacher(string name){
        this->name = name;
    }
    void display(){
        cout<<this->name<<endl;
    }

};



int main(){

    Teacher t1("Sarthak");
    Teacher t2("Sarth");

    t1.display();
    t2.display();

    return 0;
}