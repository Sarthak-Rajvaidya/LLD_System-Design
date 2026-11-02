// S-> Single respomnsibility principal:-

//There should be only one reason for the class to change

//A class can clearly have one responsibilty rather than haiving many responsibilites

//Real-world example: Student Management System

// #include<iostream>
// using namespace std;

// class Student{
// public:
//     void calculatemarks(){

//     }
//     void generatereport(){

//     }

// };



// int main(){
//     return 0;
// }

//The above code acuse probelm if marks caluclation logic chnang we need to modify student class which is not good

#include<iostream>
using namespace std;

class Student{
public:
    void generatemarks(){

    }

};

class studentreport{
public:
    void generatereport(){

    }

};

class Studentrepo{
public:
    void generatedatabse(){
        
    }

};


int main(){
    return 0;
}