#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaptr;

    Student(string name,double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr=cgpa;

    }

    Student(Student &obj){
        this->name = obj.name;
        cgpaptr=new double;
        *cgpaptr = *obj.cgpaptr;
    }

    void getInfo(){
        cout<<"NAme : "<<name<<endl;
        cout<<"CGPA : "<<*cgpaptr<<endl;

    }

};


int main(){
    Student s1("Sarthak",8.12);
    s1.getInfo();
    Student s2(s1);
    s2.getInfo();
    
    

}