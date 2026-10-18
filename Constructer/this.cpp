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
    Teacher t1("sarthak");
    Teacher t2("Prashant");

    t1.display();
    t2.display();

}