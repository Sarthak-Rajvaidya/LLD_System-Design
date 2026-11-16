#include<iostream>

using namespace std;

class Employee{
private:
    int id;
    string name;
    double basicsalary;

public:
    Employee(int i,string n,double s){
        id = i;
        name = n;
        basicsalary=s;


    }

    int getid(){
        return id;
    }

    string getname(){
        return name;
    }
    double getsalary(){
        return basicsalary;
    }



};

int main(){
    return 0;

}