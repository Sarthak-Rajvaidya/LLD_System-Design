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
    return 0;
}
