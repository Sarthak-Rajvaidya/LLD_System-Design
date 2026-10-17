#include<iostream>
#include<string>

using namespace std;

class Teacher{

    //Properties:-

    string name;
    string dept;
    string subj;
    double salary;

    //method functon -> class ke andar ke functions 

    void ChangeDept(string newDept){
        dept = newDept;
    }



};




int main(){


    Teacher t1;
    t1.name = "Sarthak";
    t1.dept = "CS";
    t1.subj = "C++";
    t1.salary=245000;

    cout<<t1.name<<endl;
    

    return 0;

}