#include<iostream>
using namespace std;

class EmailService{
public:
    void sendemail(){
        cout<<"Email has been sent successfully";
    }

};

class Notification{
private:
    EmailService email;

public:
    void notify(){
        email.sendemail();
    }
};



int main(){
    Notification n;
    n.notify();
    
    return 0;
}