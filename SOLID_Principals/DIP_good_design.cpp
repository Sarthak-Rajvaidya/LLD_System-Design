//To remov ethose error that we if need to add SMS service tommororw we need to modify the notificationsystem class
//We will us ethe Abstarction class uisng virtual keyword these would reduce the problem..the following is the correction codde

#include<iostream>
using namespace std;

class NotificationSystem{
public:
    virtual void send() = 0;
    virtual ~NotificationSystem() = default;

};


class EmailService : public NotificationSystem{
public:
    void send() override{
        cout<<"Email is sent to user"<<endl;
    }



};

class SMSservice: public NotificationSystem{
public:
    void send() override{
        cout<<"Notification is sent through SMS"<<endl;
    }


};

// High-level module
class Notification {
private:
    NotificationSystem &service;

public:
    Notification(NotificationSystem &s) : service(s) {}

    void notify() {
        service.send();
    }
};




int main(){
    return 0;
}