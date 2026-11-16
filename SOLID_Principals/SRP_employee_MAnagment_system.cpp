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


// Responsibility 3: Salary slip generation
class SalarySlipGenerator {
public:
    void generateSalarySlip(Employee &emp, double salary) {
        cout << "\n----- Salary Slip -----" << endl;
        cout << "Employee ID: " << emp.getid() << endl;
        cout << "Employee Name: " << emp.getname() << endl;
        cout << "Net Salary: " << salary << endl;
        cout << "----------------------" << endl;
    }
};

// Responsibility 4: Employee database storage
class EmployeeRepository {
public:
    void saveEmployee(Employee &emp) {
        cout << "Employee " << emp.getname()
             << " saved to database" << endl;
    }
};

int main(){
    return 0;

}