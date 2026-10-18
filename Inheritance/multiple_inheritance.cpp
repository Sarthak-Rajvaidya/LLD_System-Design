#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int roll_no;

};
class Teacher{
public:
    string subj;
    int salary;

};
class TA:public Teacher,public Student{

};


int main(){
    TA t1;
    t1.subj = "Physics";
    t1.name ="sarthak";

    cout<<t1.name<<endl;
    cout<<t1.subj<<endl;
    return 0;
}