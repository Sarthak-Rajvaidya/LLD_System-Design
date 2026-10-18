#include<iostream>
#include<string>

using namespace std;

class Person{
public: 
    string name;
    int age;

    // Person(string name,int age){
    //     this->name =name;
    //     this->age=age;
    // }

    Person(){

    }

};

class Student : public Person{
public:
    int roll_no;

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : " <<age<<endl;
        cout<<"Roll _no : "<<roll_no<<endl;
    }
    


};


int main(){
    Student s1;
    s1.name = "Sarthak";
    s1.age = 20;
    s1.roll_no=177;

    s1.getInfo();
    return 0;
}