#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class Student : public Person{
public:
    int roll_no;
};

class Teacher:public Person{
public:
    int salary;
};

int main(){
    
    return 0;
}