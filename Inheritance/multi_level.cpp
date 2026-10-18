#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

};

class Student:public Person{
public:
    int roll_no;
    
};

class GradStudent:public Student{
public:
    string Researcharea;

};

int main(){
    GradStudent s1;
    s1.name = "sarthak Rajvaidya";
    s1.Researcharea="C++";
    cout<<s1.name<<endl;
    cout<<s1.Researcharea<<endl;
    return 0;
}
