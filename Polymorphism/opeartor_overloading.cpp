#include<iostream>
#include<string>

using namespace std;

class Student{
public:
    string name;

    Student(){
        cout<<"Paramaterzied function";
    }
    Student(string name){
        cout<<"non-paramatezied";
    }

};

int main(){
    Student s1;
    // Student s1("Sarthak");
    return 0;

}