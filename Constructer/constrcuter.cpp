#include<iostream>
#include<string>

using namespace std;

class Teacher{
private:
    double salary;

    //Constrcuter

   
public:

    //non-paramatized constrcter
    Teacher(){
        dpt = "Computer Science";
        salary = 0;
    }

    //Paramatezied constructer

    Teacher(string n,string d,double sal){
        name = n;
        dpt = d;
        salary = sal;
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
    //Non-paramatezied constrcuter
    Teacher t1; //Cosntructer call

    

    t1.name="Sarathak";
    t1.setsalary(25000);

    cout<<t1.dpt<<endl;
    cout<<t1.getsalary()<<endl;



    return 0;
}

