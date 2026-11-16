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

//Ressponsibility 2 :- Get salary calculation for deduction

class SalaryCalculator {
public:
    double caluclatesalary(Employee &emp){
        double deductions = emp.getsalary() * 0.10;
        double netsalary = emp.getsalary() - deductions;

        return netsalary;
    }


};

int main(){
    return 0;

}