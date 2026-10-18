#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double cgpa;

    Student(string name,double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }

    Student(Student &obj){
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }

    void getInfo(){
        cout<<"NAme : "<<name<<endl;
        cout<<"CGPA : "<<cgpa<<endl;

    }

};


int main(){
    Student s1("Sarthak",8.12);
    s1.getInfo();
    Student s2(s1);
    s2.getInfo();
    
    

}