#include<iostream>
#include<string>

using namespace std;

class Teacher{

private:
    double salary;
public:

    //Properties:-

    string name;
    string dept;
    string subj;



    //method functon -> class ke andar ke functions 

    void ChangeDept(string newDept){
        dept = newDept;
    }

    //setter
    void setsalary(double s){
        salary = s;
    }

    //getter
    double getsalary(){
        return salary;
    }



};





int main(){


    Teacher t1;
    t1.name = "Sarthak";
    t1.dept = "CS";
    t1.subj = "C++";
    t1.setsalary(25000);

    cout<<t1.name<<endl;
    cout<<t1.getsalary()<<endl;



   
    

    return 0;

}