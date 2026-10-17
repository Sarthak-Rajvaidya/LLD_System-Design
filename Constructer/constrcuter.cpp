#include<iostream>
#include<string>

using namespace std;

class Teacher{
private:
    double salary;

    //Constrcuter

   
public:
    Teacher(){
        dpt = "Computer Science";
        salary = 0;
    }




    string name;
    string dpt;

    


    void setsalary(double s){
        salary = s;
    }
    double getsalary(){
        return salary;

    }



    


};


int main(){
    Teacher t1;

    t1.name="Sarathak";
    t1.setsalary(25000);

    cout<<t1.dpt<<endl;
    cout<<t1.getsalary()<<endl;



    return 0;
}

